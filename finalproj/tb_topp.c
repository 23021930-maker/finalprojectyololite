#include <stdio.h>
#include "topp.h"

/*=====================================================

=====================================================*/
extern float W1[C1][3][3][3];
extern float B1[C1];

extern float W2[C2][C1][3][3];
extern float B2[C2];

extern float W3[C3][C2][3][3];
extern float B3[C3];

extern float W4[C3][C3][3][3];
extern float B4[C3];

extern float W5[C3][C3][3][3];
extern float B5[C3];

extern float WH[OUT_CH][C3][1][1];
extern float BH[OUT_CH];

/*=====================================================

=====================================================*/
static float tb_image[64][64][3];
static float tb_output[8][8][OUT_CH];

/*=====================================================

=====================================================*/
void tb_init_image()
{
    int r,c,ch;

    for(r=0;r<64;r++)
    {
        for(c=0;c<64;c++)
        {
            for(ch=0;ch<3;ch++)
            {
                tb_image[r][c][ch] = 0.0f;
            }
        }
    }

    for(r=22;r<42;r++)
    {
        for(c=22;c<42;c++)
        {
            for(ch=0;ch<3;ch++)
            {
                tb_image[r][c][ch] = 1.0f;
            }
        }
    }
}

/*=====================================================
  Weight = 1
=====================================================*/
void tb_init_weights()
{
    int oc, ic, r, c;

    /* Conv1 : average filter */
    for(oc=0; oc<C1; oc++)
    {
        B1[oc] = 0.0f;

        for(r=0; r<3; r++)
        {
            for(c=0; c<3; c++)
            {
                for(ic=0; ic<3; ic++)
                {
                    W1[oc][r][c][ic] = 1.0f/27.0f;
                }
            }
        }
    }

    /* Conv2 : identity */
    for(oc=0; oc<C2; oc++)
    {
        B2[oc] = 0.0f;

        for(ic=0; ic<C1; ic++)
        {
            for(r=0; r<3; r++)
            {
                for(c=0; c<3; c++)
                {
                    W2[oc][ic][r][c] = 0.0f;

                    if(r==1 && c==1)
                        W2[oc][ic][r][c] = 1.0f;
                }
            }
        }
    }

    /* Conv3 : identity */
    for(oc=0; oc<C3; oc++)
    {
        B3[oc] = 0.0f;

        for(ic=0; ic<C2; ic++)
        {
            for(r=0; r<3; r++)
            {
                for(c=0; c<3; c++)
                {
                    W3[oc][ic][r][c] = 0.0f;

                    if(r==1 && c==1)
                        W3[oc][ic][r][c] = 1.0f;
                }
            }
        }
    }

    /* Conv4 : identity */
    for(oc=0; oc<C3; oc++)
    {
        B4[oc] = 0.0f;

        for(ic=0; ic<C3; ic++)
        {
            for(r=0; r<3; r++)
            {
                for(c=0; c<3; c++)
                {
                    W4[oc][ic][r][c] = 0.0f;

                    if(r==1 && c==1)
                        W4[oc][ic][r][c] = 1.0f;
                }
            }
        }
    }

    /* Conv5 : identity */
    for(oc=0; oc<C3; oc++)
    {
        B5[oc] = 0.0f;

        for(ic=0; ic<C3; ic++)
        {
            for(r=0; r<3; r++)
            {
                for(c=0; c<3; c++)
                {
                    W5[oc][ic][r][c] = 0.0f;

                    if(r==1 && c==1)
                        W5[oc][ic][r][c] = 1.0f;
                }
            }
        }
    }

    /* Detection Head */
    for(oc=0; oc<OUT_CH; oc++)
    {
        BH[oc] = 0.0f;

        for(ic=0; ic<C3; ic++)
        {
            WH[oc][ic][0][0] = 1.0f / (float)C3;
        }
    }
}
/*=====================================================
  Main
=====================================================*/
int main()
{
    int r,c;

    printf("Init weights...\n");
    tb_init_weights();

    printf("Init image...\n");
    tb_init_image();

    printf("Run CNN...\n");
    topp(tb_image, tb_output);

    printf("\nOutput channel 0\n\n");

    for(r=0;r<8;r++)
    {
        for(c=0;c<8;c++)
        {
            printf("%6.3f ", tb_output[r][c][0]);
        }
        printf("\n");
    }


    printf("\nDetected cells:\n\n");

    for(int gr=0; gr<8; gr++)
    {
        for(int gc=0; gc<8; gc++)
        {
            float conf = tb_output[gr][gc][4];

            if(conf > 0.5f)
            {
                printf(
                    "Cell(%d,%d): "
                    "x=%.2f y=%.2f "
                    "w=%.2f h=%.2f "
                    "conf=%.2f class=%.2f\n",

                    gr,
                    gc,

                    tb_output[gr][gc][0],
                    tb_output[gr][gc][1],
                    tb_output[gr][gc][2],
                    tb_output[gr][gc][3],
                    tb_output[gr][gc][4],
                    tb_output[gr][gc][5]
                );
            }
        }
    }

    return 0;
}
