#include "topp.h"
#include <math.h>


float W1[C1][3][3][3];
float B1[C1];

float W2[C2][C1][3][3];
float B2[C2];

float W3[C3][C2][3][3];
float B3[C3];

float W4[C3][C3][3][3];
float B4[C3];

float W5[C3][C3][3][3];
float B5[C3];

float WH[OUT_CH][C3][1][1];
float BH[OUT_CH];

/* ==========================================

   ========================================== */
void conv1(
    float in[64][64][3],
    float out[62][62][C1],
    float kernel[C1][3][3][3],
    float bias[C1])
{
    static float linbu[2][64][3];
    float win_buf[3][3][3];
    int r, c, ic, oc, kr, kc;
    float val0, val1, val2, sum;
    //sol3

	#pragma HLS ARRAY_PARTITION variable=linbu complete dim=1
    #pragma HLS ARRAY_PARTITION variable=linbu complete dim=3
	#pragma HLS ARRAY_PARTITION variable=win_buf complete dim=0

    for(r = 0; r < 64; r++) {
        for(c = 0; c < 64; c++) {

            for(ic = 0; ic < 3; ic++) {
	#pragma HLS UNROLL //sol5
                win_buf[0][0][ic] = win_buf[0][1][ic];
                win_buf[0][1][ic] = win_buf[0][2][ic];
                win_buf[1][0][ic] = win_buf[1][1][ic];
                win_buf[1][1][ic] = win_buf[1][2][ic];
                win_buf[2][0][ic] = win_buf[2][1][ic];
                win_buf[2][1][ic] = win_buf[2][2][ic];


                val0 = linbu[0][c][ic];
                val1 = linbu[1][c][ic];
                val2 = in[r][c][ic];


                linbu[0][c][ic] = val1;
                linbu[1][c][ic] = val2;


                win_buf[0][2][ic] = val0;
                win_buf[1][2][ic] = val1;
                win_buf[2][2][ic] = val2;
            }


            if(r >= 2 && c >= 2) {
                for(oc = 0; oc < C1; oc++) {
	#pragma HLS PIPELINE II=1 //final
                	sum = bias[oc];

                    for(kr = 0; kr < 3; kr++) {

                        for(kc = 0; kc < 3; kc++) {

                            for(ic = 0; ic < 3; ic++) {
                                sum += win_buf[kr][kc][ic] * kernel[oc][kr][kc][ic];
                            }
                        }
                    }
                    if(sum < 0) sum = 0.0f;
                    out[r-2][c-2][oc] = sum;
                }
            }
        }
    }
}

/* ==========================================

   ========================================== */
void maxpool1(
    float in[62][62][C1],
    float out[31][31][C1])
{
    int r, c, ch;
    float v0, v1, v2, v3, maxv;

    for(r = 0; r < 31; r++) {
        for(c = 0; c < 31; c++) {
	#pragma HLS UNROLL //sol4
            for(ch = 0; ch < C1; ch++) {

                v0 = in[2*r][2*c][ch];
                v1 = in[2*r][2*c+1][ch];
                v2 = in[2*r+1][2*c][ch];
                v3 = in[2*r+1][2*c+1][ch];

                maxv = v0;
                if(v1 > maxv) maxv = v1;
                if(v2 > maxv) maxv = v2;
                if(v3 > maxv) maxv = v3;

                out[r][c][ch] = maxv;
            }
        }
    }
}

/* ==========================================

   ========================================== */
void conv2(
    float in[31][31][C1],
    float out[29][29][C2],
    float kernel[C2][C1][3][3],
    float bias[C2])
{
    static float linbu[2][31][C1];
    float win_buf[3][3][C1];
    int r, c, ic, oc, kr, kc;
    float val0, val1, val2, sum;
	//sol3

    #pragma HLS ARRAY_PARTITION variable=linbu complete dim=1
    #pragma HLS ARRAY_PARTITION variable=linbu cyclic factor=8 dim=3
	#pragma HLS ARRAY_PARTITION variable=win_buf complete dim=1
    #pragma HLS ARRAY_PARTITION variable=win_buf complete dim=2
    #pragma HLS ARRAY_PARTITION variable=win_buf cyclic factor=8 dim=3

    for(r = 0; r < 31; r++) {
        for(c = 0; c < 31; c++) {
            for(ic = 0; ic < C1; ic++) {
	#pragma HLS UNROLL //sol5
                win_buf[0][0][ic] = win_buf[0][1][ic];
                win_buf[0][1][ic] = win_buf[0][2][ic];
                win_buf[1][0][ic] = win_buf[1][1][ic];
                win_buf[1][1][ic] = win_buf[1][2][ic];
                win_buf[2][0][ic] = win_buf[2][1][ic];
                win_buf[2][1][ic] = win_buf[2][2][ic];

                val0 = linbu[0][c][ic];
                val1 = linbu[1][c][ic];
                val2 = in[r][c][ic];

                linbu[0][c][ic] = val1;
                linbu[1][c][ic] = val2;

                win_buf[0][2][ic] = val0;
                win_buf[1][2][ic] = val1;
                win_buf[2][2][ic] = val2;
            }

            if(r >= 2 && c >= 2) {

                for(oc = 0; oc < C2; oc++) {
	#pragma HLS PIPELINE II=1 //final
                    sum = bias[oc];
                    for(kr = 0; kr < 3; kr++) {

                        for(kc = 0; kc < 3; kc++) {

                            for(ic = 0; ic < C1; ic++) {
                                sum += win_buf[kr][kc][ic] * kernel[oc][ic][kr][kc];
                            }
                        }
                    }
                    if(sum < 0) sum = 0.0f;
                    out[r-2][c-2][oc] = sum;
                }
            }
        }
    }
}

/* ==========================================

   ========================================== */
void maxpool2(
    float in[29][29][C2],
    float out[14][14][C2])
{
    int r, c, ch;
    float v0, v1, v2, v3, maxv;

    for(r = 0; r < 14; r++) {
        for(c = 0; c < 14; c++) {
	#pragma HLS UNROLL //sol4
            for(ch = 0; ch < C2; ch++) {

                v0 = in[2*r][2*c][ch];
                v1 = in[2*r][2*c+1][ch];
                v2 = in[2*r+1][2*c][ch];
                v3 = in[2*r+1][2*c+1][ch];

                maxv = v0;
                if(v1 > maxv) maxv = v1;
                if(v2 > maxv) maxv = v2;
                if(v3 > maxv) maxv = v3;

                out[r][c][ch] = maxv;
            }
        }
    }
}

/* ==========================================

   ========================================== */
void conv3(
    float in[14][14][C2],
    float out[12][12][C3],
    float kernel[C3][C2][3][3],
    float bias[C3])
{
    static float linbu[2][14][C2];
    float win_buf[3][3][C2];
    int r, c, ic, oc, kr, kc;
    float val0, val1, val2, sum;
    //sol3

	#pragma HLS ARRAY_PARTITION variable=linbu complete dim=1
    #pragma HLS ARRAY_PARTITION variable=linbu cyclic factor=8 dim=3
	#pragma HLS ARRAY_PARTITION variable=win_buf complete dim=1
    #pragma HLS ARRAY_PARTITION variable=win_buf complete dim=2
    #pragma HLS ARRAY_PARTITION variable=win_buf cyclic factor=8 dim=3

    for(r = 0; r < 14; r++) {
        for(c = 0; c < 14; c++) {
            for(ic = 0; ic < C2; ic++) {
	#pragma HLS UNROLL //sol5
                win_buf[0][0][ic] = win_buf[0][1][ic];
                win_buf[0][1][ic] = win_buf[0][2][ic];
                win_buf[1][0][ic] = win_buf[1][1][ic];
                win_buf[1][1][ic] = win_buf[1][2][ic];
                win_buf[2][0][ic] = win_buf[2][1][ic];
                win_buf[2][1][ic] = win_buf[2][2][ic];

                val0 = linbu[0][c][ic];
                val1 = linbu[1][c][ic];
                val2 = in[r][c][ic];

                linbu[0][c][ic] = val1;
                linbu[1][c][ic] = val2;

                win_buf[0][2][ic] = val0;
                win_buf[1][2][ic] = val1;
                win_buf[2][2][ic] = val2;
            }

            if(r >= 2 && c >= 2) {
                for(oc = 0; oc < C3; oc++) {
	#pragma HLS PIPELINE II=1 //final
                    sum = bias[oc];
                    for(kr = 0; kr < 3; kr++) {

                        for(kc = 0; kc < 3; kc++) {

                            for(ic = 0; ic < C2; ic++) {
                                sum += win_buf[kr][kc][ic] * kernel[oc][ic][kr][kc];
                            }
                        }
                    }
                    if(sum < 0) sum = 0.0f;
                    out[r-2][c-2][oc] = sum;
                }
            }
        }
    }
}

/* ==========================================

   ========================================== */
void conv4(
    float in[12][12][C3],
    float out[10][10][C3],
    float kernel[C3][C3][3][3],
    float bias[C3])
{
    static float linbu[2][12][C3];
    float win_buf[3][3][C3];
    int r, c, ic, oc, kr, kc;
    float val0, val1, val2, sum;
    //sol3

	#pragma HLS ARRAY_PARTITION variable=linbu complete dim=1
    #pragma HLS ARRAY_PARTITION variable=linbu cyclic factor=8 dim=3
	#pragma HLS ARRAY_PARTITION variable=win_buf complete dim=1
    #pragma HLS ARRAY_PARTITION variable=win_buf complete dim=2
    #pragma HLS ARRAY_PARTITION variable=win_buf cyclic factor=8 dim=3

    for(r = 0; r < 12; r++) {
        for(c = 0; c < 12; c++) {
            for(ic = 0; ic < C3; ic++) {
	#pragma HLS UNROLL //sol5
                win_buf[0][0][ic] = win_buf[0][1][ic];
                win_buf[0][1][ic] = win_buf[0][2][ic];
                win_buf[1][0][ic] = win_buf[1][1][ic];
                win_buf[1][1][ic] = win_buf[1][2][ic];
                win_buf[2][0][ic] = win_buf[2][1][ic];
                win_buf[2][1][ic] = win_buf[2][2][ic];

                val0 = linbu[0][c][ic];
                val1 = linbu[1][c][ic];
                val2 = in[r][c][ic];

                linbu[0][c][ic] = val1;
                linbu[1][c][ic] = val2;

                win_buf[0][2][ic] = val0;
                win_buf[1][2][ic] = val1;
                win_buf[2][2][ic] = val2;
            }

            if(r >= 2 && c >= 2) {
                for(oc = 0; oc < C3; oc++) {
	#pragma HLS PIPELINE II=1 //final
                    sum = bias[oc];
                    for(kr = 0; kr < 3; kr++) {

                        for(kc = 0; kc < 3; kc++) {

                            for(ic = 0; ic < C3; ic++) {
                                sum += win_buf[kr][kc][ic] * kernel[oc][ic][kr][kc];
                            }
                        }
                    }
                    if(sum < 0) sum = 0.0f;
                    out[r-2][c-2][oc] = sum;
                }
            }
        }
    }
}

/* ==========================================

   ========================================== */
void conv5(
    float in[10][10][C3],
    float out[8][8][C3],
    float kernel[C3][C3][3][3],
    float bias[C3])
{
    static float linbu[2][10][C3];
    float win_buf[3][3][C3];
    int r, c, ic, oc, kr, kc;
    float val0, val1, val2, sum;
	//sol3

    #pragma HLS ARRAY_PARTITION variable=linbu complete dim=1
    #pragma HLS ARRAY_PARTITION variable=linbu cyclic factor=8 dim=3
	#pragma HLS ARRAY_PARTITION variable=win_buf complete dim=1
    #pragma HLS ARRAY_PARTITION variable=win_buf complete dim=2
    #pragma HLS ARRAY_PARTITION variable=win_buf cyclic factor=8 dim=3

    for(r = 0; r < 10; r++) {
        for(c = 0; c < 10; c++) {
            for(ic = 0; ic < C3; ic++) {
	#pragma HLS UNROLL //sol5
                win_buf[0][0][ic] = win_buf[0][1][ic];
                win_buf[0][1][ic] = win_buf[0][2][ic];
                win_buf[1][0][ic] = win_buf[1][1][ic];
                win_buf[1][1][ic] = win_buf[1][2][ic];
                win_buf[2][0][ic] = win_buf[2][1][ic];
                win_buf[2][1][ic] = win_buf[2][2][ic];

                val0 = linbu[0][c][ic];
                val1 = linbu[1][c][ic];
                val2 = in[r][c][ic];

                linbu[0][c][ic] = val1;
                linbu[1][c][ic] = val2;

                win_buf[0][2][ic] = val0;
                win_buf[1][2][ic] = val1;
                win_buf[2][2][ic] = val2;
            }

            if(r >= 2 && c >= 2) {
                for(oc = 0; oc < C3; oc++) {
	#pragma HLS PIPELINE II=1 //final
                    sum = bias[oc];
                    for(kr = 0; kr < 3; kr++) {

                        for(kc = 0; kc < 3; kc++) {

                            for(ic = 0; ic < C3; ic++) {
                                sum += win_buf[kr][kc][ic] * kernel[oc][ic][kr][kc];
                            }
                        }
                    }

                    out[r-2][c-2][oc] = sum;
                }
            }
        }
    }
}

/* ==========================================

   ========================================== */
float sigmoid(float x)
{
#pragma HLS INLINE //sol4
    return 1.0f / (1.0f + expf(-x));
}

/* ==========================================

   ========================================== */
void detection_head(
    float in[8][8][C3],
    float out[8][8][OUT_CH],
    float kernel[OUT_CH][C3][1][1],
    float bias[OUT_CH])
{
    int r, c, oc, ic;

    float sum[OUT_CH];
#pragma HLS ARRAY_PARTITION variable=sum complete //sol4


    for(r = 0; r < 8; r++) {
        for(c = 0; c < 8; c++) {


            for(oc = 0; oc < OUT_CH; oc++) {

                sum[oc] = bias[oc];
            }

            for(ic = 0; ic < C3; ic++) {
#pragma HLS PIPELINE II=1 //sol4
                float val = in[r][c][ic];

                for(oc = 0; oc < OUT_CH; oc++) {

                    sum[oc] += val * kernel[oc][ic][0][0];
                }
            }

            for(oc = 0; oc < OUT_CH; oc++) {
                out[r][c][oc] = sigmoid(sum[oc]);
            }
        }
    }
}

/* ==========================================

   ========================================== */
void topp(
    float image[64][64][3],
    float output[8][8][OUT_CH]
)
{
	#pragma HLS DATAFLOW //sol1 pingpong //sol2 fifo
    static float f1[62][62][C1];
    static float p1[31][31][C1];
    static float f2[29][29][C2];
    static float p2[14][14][C2];
    static float f3[12][12][C3];
    static float f4[10][10][C3];
    static float f5[8][8][C3];
    //sol3

	#pragma HLS ARRAY_PARTITION variable=f1 cyclic factor=8 dim=3
    #pragma HLS ARRAY_PARTITION variable=p1 cyclic factor=8 dim=3
    #pragma HLS ARRAY_PARTITION variable=f2 cyclic factor=8 dim=3
    #pragma HLS ARRAY_PARTITION variable=p2 cyclic factor=8 dim=3
    #pragma HLS ARRAY_PARTITION variable=f3 cyclic factor=8 dim=3
    #pragma HLS ARRAY_PARTITION variable=f4 cyclic factor=8 dim=3
    #pragma HLS ARRAY_PARTITION variable=f5 cyclic factor=8 dim=3

    conv1(image, f1, W1, B1);
    maxpool1(f1, p1);
    conv2(p1, f2, W2, B2);
    maxpool2(f2, p2);
    conv3(p2, f3, W3, B3);
    conv4(f3, f4, W4, B4);
    conv5(f4, f5, W5, B5);
    detection_head(f5, output, WH, BH);
}



