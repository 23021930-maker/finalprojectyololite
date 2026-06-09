#include <stdio.h>

#define IMG_H 64
#define IMG_W 64
#define IMG_C 3

#define C1 8
#define C2 16
#define C3 32

#define NUM_CLASSES 3
#define NUM_BOXES 2

#define OUT_CH (NUM_BOXES * (5 + NUM_CLASSES))
