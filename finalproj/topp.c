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



void conv1(
    float in[64][64][3],
    float out[62][62][C1],
    float kernel[C1][3][3][3],
    float bias[C1])
{
#pragma HLS ARRAY_PARTITION variable=in complete dim=3
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=2
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=3
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=4
    for(int oc=0; oc<C1; oc++)
    {
        for(int r=0; r<62; r++)
        {
            for(int c=0; c<62; c++)
            {
#pragma HLS PIPELINE II=1
                float sum = bias[oc];

                for(int ic=0; ic<3; ic++)
                {

                    for(int kr=0; kr<3; kr++)
                    {

                        for(int kc=0; kc<3; kc++)
                        {


                            sum += in[r+kr][c+kc][ic] * kernel[oc][kr][kc][ic];
                        }
                    }
                }

                if(sum < 0) sum = 0;
                out[r][c][oc] = sum;
            }
        }
    }
}




void maxpool1(
    float in[62][62][C1],
    float out[31][31][C1])
{
#pragma HLS ARRAY_PARTITION variable=in complete dim=3
#pragma HLS ARRAY_PARTITION variable=out complete dim=3


    for(int ch=0; ch<C1; ch++)
    {
        for(int r=0; r<31; r++)
        {
            for(int c=0; c<31; c++)
            {
#pragma HLS PIPELINE II=1
                float maxv = in[2*r][2*c][ch];

                for(int i=0;i<2;i++)
                {
                    for(int j=0;j<2;j++)
                    {

                        float v = in[2*r+i][2*c+j][ch];
                        if(v > maxv) maxv = v;
                    }
                }
                out[r][c][ch] = maxv;
            }
        }
    }
}


void conv2(
    float in[31][31][C1],
    float out[29][29][C2],
    float kernel[C2][C1][3][3],
    float bias[C2])
{
#pragma HLS ARRAY_PARTITION variable=in complete dim=3
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=2
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=3
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=4

    for(int oc=0; oc<C2; oc++)
    {
        for(int r=0; r<29; r++)
        {
            for(int c=0; c<29; c++)
            {
#pragma HLS PIPELINE II=1
                float sum = bias[oc];

                for(int ic=0; ic<C1; ic++)
                {

                    for(int kr=0; kr<3; kr++)
                    {

                        for(int kc=0; kc<3; kc++)
                        {
                            sum += in[r+kr][c+kc][ic] * kernel[oc][ic][kr][kc];
                        }
                    }
                }

                if(sum < 0) sum = 0;
                out[r][c][oc] = sum;
            }
        }
    }
}


void maxpool2(
    float in[29][29][C2],
    float out[14][14][C2])
{
#pragma HLS ARRAY_PARTITION variable=in cyclic factor=8 dim=3
#pragma HLS ARRAY_PARTITION variable=out cyclic factor=8 dim=3


    for(int ch=0; ch<C2; ch++)
    {

        for(int r=0; r<14; r++)
        {
            for(int c=0; c<14; c++)
            {
#pragma HLS PIPELINE II=1
                float maxv = in[2*r][2*c][ch];

                for(int i=0;i<2;i++)
                {
                    for(int j=0;j<2;j++)
                    {


                        float v = in[2*r+i][2*c+j][ch];
                        if(v > maxv) maxv = v;
                    }
                }
                out[r][c][ch] = maxv;
            }
        }
    }
}


void conv3(
    float in[14][14][C2],
    float out[12][12][C3],
    float kernel[C3][C2][3][3],
    float bias[C3])
{

#pragma HLS ARRAY_PARTITION variable=in cyclic factor=8 dim=3
#pragma HLS ARRAY_PARTITION variable=kernel cyclic factor=8 dim=2
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=3
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=4

    for(int oc=0; oc<C3; oc++)
    {
        for(int r=0; r<12; r++)
        {
            for(int c=0; c<12; c++)
            {
#pragma HLS PIPELINE II=1
                float sum = bias[oc];

                for(int ic=0; ic<C2; ic++)
                {

                    for(int kr=0; kr<3; kr++)
                    {

                        for(int kc=0; kc<3; kc++)
                        {
                            sum += in[r+kr][c+kc][ic] * kernel[oc][ic][kr][kc];
                        }
                    }
                }

                if(sum < 0) sum = 0;
                out[r][c][oc] = sum;
            }
        }
    }
}


void conv4(
    float in[12][12][C3],
    float out[10][10][C3],
    float kernel[C3][C3][3][3],
    float bias[C3])
{

#pragma HLS ARRAY_PARTITION variable=in cyclic factor=8 dim=3
#pragma HLS ARRAY_PARTITION variable=kernel cyclic factor=8 dim=2
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=3
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=4

    for(int oc=0; oc<C3; oc++)
    {
        for(int r=0; r<10; r++)
        {
            for(int c=0; c<10; c++)
            {
#pragma HLS PIPELINE II=1
                float sum = bias[oc];

                for(int ic=0; ic<C3; ic++)
                {

                    for(int kr=0; kr<3; kr++)
                    {

                        for(int kc=0; kc<3; kc++)
                        {
                            sum += in[r+kr][c+kc][ic] * kernel[oc][ic][kr][kc];
                        }
                    }
                }

                if(sum < 0) sum = 0;
                out[r][c][oc] = sum;
            }
        }
    }
}


void conv5(
    float in[10][10][C3],
    float out[8][8][C3],
    float kernel[C3][C3][3][3],
    float bias[C3])
{

#pragma HLS ARRAY_PARTITION variable=in cyclic factor=8 dim=3
#pragma HLS ARRAY_PARTITION variable=kernel cyclic factor=8 dim=2
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=3
#pragma HLS ARRAY_PARTITION variable=kernel complete dim=4

    for(int oc=0; oc<C3; oc++)
    {
        for(int r=0; r<8; r++)
        {
            for(int c=0; c<8; c++)
            {
#pragma HLS PIPELINE II=1
                float sum = bias[oc];

                for(int ic=0; ic<C3; ic++)
                {

                    for(int kr=0; kr<3; kr++)
                    {

                        for(int kc=0; kc<3; kc++)
                        {
                            sum += in[r+kr][c+kc][ic] * kernel[oc][ic][kr][kc];
                        }
                    }
                }
                out[r][c][oc] = sum;
            }
        }
    }
}


float sigmoid(float x)
{
#pragma HLS INLINE


    return 1.0f / (1.0f + expf(-x));
}


void detection_head(
    float in[8][8][C3],
    float out[8][8][OUT_CH],
    float kernel[OUT_CH][C3][1][1],
    float bias[OUT_CH])
{

#pragma HLS ARRAY_PARTITION variable=in cyclic factor=8 dim=3
#pragma HLS ARRAY_PARTITION variable=kernel cyclic factor=8 dim=2

    for(int oc=0; oc<OUT_CH; oc++)
    {
        for(int r=0; r<8; r++)
        {
#pragma HLS PIPELINE II=1
            for(int c=0; c<8; c++)
            {
                float sum = bias[oc];

                for(int ic=0; ic<C3; ic++)
                {

                    sum += in[r][c][ic] * kernel[oc][ic][0][0];
                }

                out[r][c][oc] = sigmoid(sum);
            }
        }
    }
}


void topp(
    float image[64][64][3],
    float output[8][8][OUT_CH]
)
{
#pragma HLS DATAFLOW
    static float f1[62][62][C1];
    static float p1[31][31][C1];
    static float f2[29][29][C2];
    static float p2[14][14][C2];
    static float f3[12][12][C3];
    static float f4[10][10][C3];
    static float f5[8][8][C3];

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






