#ifndef clap_H_
#define clap_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define clap_NUM_CELLS 2751
#define clap_SAMPLERATE 16384
 
CONSTTABLE_STORAGE(int8_t) clap_DATA [] = {2, -2, 3, -2, 2, 6, 8, 9, -15, 15, 9,
44, 33, -8, -14, -21, -36, -50, -35, -27, 1, 8, 6, 25, 24, 14, 41, 17, 9, -2, 5,
-3, -29, -22, -18, -5, -20, -15, 4, 4, 18, 36, 20, 17, -7, -6, -25, -24, -22,
-34, -2, 4, 8, 20, 29, 22, 13, 5, 2, -12, -4, -3, -12, -2, -4, -11, -12, -8, -1,
2, 19, 10, -2, 2, -5, 3, 10, -5, -9, -10, -9, 1, -1, 14, 10, 4, -1, 2, -2, -13,
-12, -1, 4, 0, -2, -3, 10, 8, 8, 1, 4, 2, -3, -5, -5, -1, -2, -4, -1, -1, -2, 4,
2, 3, 3, -3, -3, -2, 3, 2, 2, 4, 0, -4, 0, 4, 1, -1, -3, -3, -1, -1, 3, -1, -2,
1, 0, 0, -1, 0, 1, -2, 2, 3, 1, 0, -5, -3, 5, 4, 0, -1, 1, 0, -2, -1, 1, 1, -2,
-1, 2, 2, 2, 0, -3, -2, -3, 1, 0, 2, -1, 0, -1, 0, 0, 1, -3, 1, 1, 0, 6, -30,
19, 38, 45, 27, -27, -18, -34, -27, -30, -19, -11, -24, 8, 31, 35, 16, -5, 13,
-26, -19, 10, 19, 33, 27, 8, -10, -20, -15, -20, -47, 1, 15, 6, 13, 20, 44, 26,
-21, -24, -18, -26, -17, -10, -5, 21, 35, 20, -15, -22, -24, -8, 8, 3, 42, 24,
6, -2, -5, -22, -29, -3, -11, -8, -1, 17, 15, -4, 9, 23, 15, 8, -8, -12, -17,
-22, -15, -6, -11, -4, 13, 20, 25, 24, 12, -2, 4, -10, -20, -13, -3, -6, -10,
-10, -2, 0, 16, 15, 6, 9, 1, 4, -10, -13, -9, -4, -7, -4, 5, 8, 4, 7, 13, 5, 0,
-10, -10, -12, -7, 3, 1, 0, 0, 10, 8, 1, -1, 3, 3, 2, -1, -5, -8, -4, 0, -1, 2,
-2, -2, 1, 2, 1, 2, 3, -2, -6, -2, -2, 3, 9, 6, 6, -1, -3, -4, -1, -2, -5, -5,
-5, 1, 0, 4, 4, 6, 0, -3, -2, -4, 3, 1, 2, 5, 1, 1, -1, -4, -4, -1, 3, 4, -1,
-2, 0, 1, -1, -4, 2, -1, -2, -2, 0, -1, 3, 1, 2, 0, 0, 2, -4, 3, -7, 5, -1, 16,
19, 30, 21, -31, -20, 0, -39, -29, 3, -16, -20, 16, 14, -19, 20, 7, 12, -5, 6,
54, 42, 34, -19, -42, -34, -53, -38, -19, -11, 3, 28, 37, 43, 50, 37, -3, -34,
-39, -5, 22, -3, -7, -28, -28, -12, 16, 12, -11, -3, -7, -13, -1, 16, 24, 18, 9,
5, 0, -4, -6, 17, 7, -4, -19, 1, -6, -33, -4, 4, 9, 0, -3, -4, 11, 16, 2, 4, -1,
-17, -8, 19, 8, -4, 0, 9, 14, 1, -17, -21, -24, 1, 4, -3, -7, -7, 9, 1, 15, 21,
11, -2, -4, -1, 2, -11, -6, -11, -3, 13, 15, 20, 8, -16, -37, -55, -58, 0, 32,
39, 57, 72, 39, -25, -52, -26, -57, -5, 27, 10, 23, -2, 11, 27, 27, -12, -27,
-32, -16, -16, -16, -22, 9, -3, -10, 55, 49, 35, 39, 6, -16, 15, -38, -52, -54,
-61, -16, -8, 22, 13, 49, 39, 23, 45, 8, -9, -26, -39, -21, -16, -18, 14, -8,
29, 56, 1, -4, -11, -43, 3, -38, -22, 43, 20, 12, -17, 26, 32, -7, -32, 0, -20,
-9, 16, -14, 5, 21, 1, -38, -16, 23, 33, -6, -29, 0, 36, 21, 13, 12, -33, -31,
18, 8, -37, -24, -30, -3, 24, 44, 39, 24, 28, 10, 5, -47, -25, -29, -22, -10,
-29, -2, 12, 33, 28, -9, -11, -2, -16, -1, -12, -28, -9, 56, 52, 18, -8, -16,
10, -24, -27, 34, 24, -2, -5, -32, 2, 8, -6, -35, -32, -30, -8, 31, 6, 43, 42,
42, 21, -29, -31, -46, -22, 18, -7, -24, -14, 9, 6, 21, 52, 32, 13, -10, -8,
-15, -24, -27, -22, -11, 2, 17, 25, 50, 37, -7, -32, -33, -15, -15, -15, -14,
-10, 13, 17, 16, 9, -5, -17, 18, 22, -8, 12, -13, -28, 20, 32, 5, 1, -12, -10,
-5, -20, -6, -2, -5, -30, -21, -3, 22, 33, 43, 57, 38, 8, -50, -65, -44, 3, 1,
2, -11, -24, 2, -15, -11, 38, 24, 46, 27, -8, 19, -1, -7, -18, -13, 9, -7, -30,
-19, -26, -10, 11, 25, -14, -7, 11, -2, 26, 12, 6, 11, 10, -2, 4, -4, -17, -17,
5, 5, -18, 8, 18, 12, 36, 1, -25, -25, -14, 3, -16, 0, -15, -7, 27, 19, 0, -2,
-21, -11, 13, 8, 4, 7, 6, 5, 5, 6, -12, -37, -3, 8, 17, -3, 8, 10, -20, 8, -13,
-6, -3, -18, 8, 4, 4, 18, 1, 0, -8, 4, 12, -10, 11, 22, 19, 0, -18, -12, -6,
-11, -29, -17, 12, 10, 15, -4, 0, 35, 2, 7, -6, -37, -10, 0, 23, 16, 2, 2, 1,
-20, -15, 24, 12, 0, -3, -10, -7, 3, -16, -8, 5, -19, 14, 19, 15, -1, -31, -18,
-2, 19, -2, 23, 19, -3, 21, -4, -22, -16, 6, 17, 12, 0, -24, -42, -25, 11, 25,
19, 9, -5, 9, 17, 17, 10, -24, -16, -11, -19, -5, -8, -31, 1, 19, 23, 16, 19,
25, 10, 14, -23, -11, -7, -14, -8, -11, -14, -17, -7, -2, 13, 23, 16, 22, -1,
-4, 1, -2, -5, -34, -20, -8, 6, 3, 14, 17, 28, 17, 15, 8, -19, -13, -30, -30,
-24, -8, -6, 13, 34, 24, 15, 3, -11, -2, 2, 15, 16, 5, -15, -31, -24, -19, -4,
2, 5, 30, 29, 14, 16, -3, 1, -23, -31, -12, -6, 2, -5, 1, 3, 2, 14, 13, 11, 2,
-12, -19, -27, 4, 25, 19, 9, 12, -3, -5, 9, 12, -6, -28, -12, -5, -7, -13, 1,
10, 20, 20, -20, -22, 1, 6, 5, 7, 4, 2, -1, 4, -3, -12, -10, -22, 6, 24, 16, 13,
-2, -9, -1, 4, 4, 3, 0, -23, -20, 12, -2, -18, -15, 0, 21, 22, 27, 29, 2, -19,
-26, -29, -18, -12, -5, 0, -3, 4, 21, 35, 34, 4, 0, 8, -22, -24, -17, -3, 10,
-1, -12, -4, -7, 6, 25, 12, 7, -13, -6, -1, -11, -15, -1, 1, 5, 13, -8, -14, 3,
15, 17, -1, -1, 3, 3, 4, -6, 1, 4, -8, -10, -18, -24, -1, 3, 21, 15, -1, 11, 13,
5, -8, -9, -2, -1, -2, 0, -5, -5, 8, 10, -1, 0, -1, 1, -11, -1, -6, -6, 4, -5,
2, 7, 4, -10, 0, 2, 3, 0, 4, 13, -3, 3, 11, -16, -13, -1, 6, 13, -6, -6, 4, 6,
2, 0, -6, -6, -4, 0, -2, -6, 5, -2, 2, 8, 8, 1, -2, -5, -4, 0, 3, 7, 14, 0, -17,
-11, -10, 2, -1, 9, 8, 9, 2, -3, -3, -8, 3, -1, 3, -2, 5, -13, -10, 9, 3, 11,
13, -3, -7, 0, -2, -4, -8, -9, -5, -1, 3, 12, 10, 1, -1, 10, 9, 4, 1, -4, 1, -3,
-13, -6, -10, -13, 5, -11, -5, 7, 19, 21, 5, 5, -1, 4, -6, -12, -17, -15, -4,
10, 12, 9, 10, 2, 0, 2, 2, 0, -7, -10, -7, 1, 3, 3, 5, -10, -7, -2, 5, 4, -1, 4,
5, -4, -3, -2, 0, -2, -6, 10, -1, -6, -13, -3, 12, 14, 16, 5, -3, 2, -11, -11,
-2, -7, 6, 2, -2, -5, -3, 0, 1, 10, 6, 3, 0, 0, -3, -1, 0, -7, -2, -7, -5, -6,
-5, 1, 7, 8, 7, 13, 13, -1, -4, -4, -10, -4, -1, -6, -3, -2, -3, -1, 3, 4, -1,
9, 10, 4, -3, -1, 6, 4, -9, -10, -8, -11, -5, -2, 8, 10, 10, 3, 2, 2, 5, -5, -9,
-4, -3, -3, 0, 2, 2, 5, -5, -4, -4, -1, 3, 4, 9, 5, 2, 7, 5, 2, -5, -3, -6, -3,
-11, -14, 3, 1, -2, -1, 5, 10, 11, 8, 6, -1, -3, -7, -11, -5, -6, 1, -1, 0, 4,
4, 5, 1, 3, 4, 7, 0, -3, -2, -2, -8, -8, -5, -6, 0, 6, 8, 5, 1, -2, 2, 5, 4, -3,
-3, -5, -2, 3, 4, -1, -4, -4, -4, 6, 7, 5, 5, 0, -4, -6, -8, -7, -2, -3, -3, 5,
11, 3, 1, 5, -2, -1, -1, -5, -6, -4, -1, -2, 2, 1, 5, 10, 6, 0, -6, -4, -2, -2,
-4, -1, -4, 4, 12, 3, 4, -4, -4, -4, 0, 0, 1, -1, -2, -4, 0, 4, 0, 3, 6, 8, 0,
-4, -2, -6, -3, -1, 0, 3, -2, 3, 5, 3, 6, 1, -8, -3, -2, -4, 1, 2, 2, -3, -1,
-1, -3, -2, 2, 6, 3, 2, 1, -1, -1, -3, 0, -2, 2, 2, 1, 2, -2, -1, 2, -3, -7, -6,
-2, 1, 1, 6, 8, 4, -1, 0, 0, 1, 1, -3, 0, -1, -1, 0, -2, -4, -5, -6, -2, 4, 5,
2, 6, 5, -4, -1, 2, -3, -3, -2, -1, 1, 2, 0, -3, -5, -2, 2, 1, 2, 1, 5, 2, -2,
-1, -4, -5, -6, -2, 4, 3, 7, 8, 6, 1, 1, 0, -6, -11, -7, -3, -3, 0, 2, 7, 9, 6,
3, -1, -2, -4, -6, 0, 3, 0, -2, -4, -4, -4, 2, 7, 3, 3, 4, 2, 3, -1, -2, 1, -1,
-3, -3, -2, -5, -8, -2, 0, -1, 5, 6, 7, 3, 1, 0, -3, -1, -2, -1, 1, -1, -1, 1,
-2, -2, -1, 1, -1, 1, 2, 0, 0, -4, 2, 3, 3, 2, 1, -2, -3, -1, 4, 1, 1, 0, -2, 1,
1, -3, -4, -2, -1, 2, 3, 4, 4, 2, 3, -1, -3, -4, -3, -4, -4, -3, 0, 2, 4, 7, 3,
1, 2, -1, -1, -2, -5, -4, -3, 1, 2, 4, 2, 0, 2, 0, -2, 2, 3, -1, -2, -2, -2, -4,
-2, 0, 1, 3, 4, 6, 3, -1, -2, -4, -4, -2, 0, -1, 0, 2, 1, 3, -1, -1, -1, -1, -1,
1, 4, 2, -2, -4, -2, -2, 2, 2, 1, 2, 1, -2, -3, -2, -2, 2, 2, 0, 1, 0, 0, 0, -2,
-2, -1, -1, 2, 2, 1, -1, -2, -2, 0, 4, 0, 0, 2, 0, 1, 2, -1, -3, -1, 0, -1, 0,
1, 0, 1, -2, -2, 1, 2, -1, 0, 0, 0, 1, 1, 1, 3, 1, 0, -1, -2, -2, -1, 0, 1, 1,
0, -2, -1, 0, 1, -1, 0, -1, 0, 1, 0, -1, 1, 1, 1, 0, 0, 0, -1, -1, -3, -3, 0, 3,
2, 0, 1, 0, -1, 1, -1, -4, -1, 0, -1, 1, 0, 0, 0, 3, 1, 1, -1, -2, 0, -1, -1,
-1, -2, 0, 2, 1, 0, -1, 0, -1, -1, 3, 1, 1, 0, 1, 0, -1, 1, 2, -1, -1, 0, 0, 0,
0, -1, -2, -1, 2, 1, 2, 1, 1, 2, 1, 0, -1, 0, -2, -5, -3, 1, 2, 2, 2, 3, 1, 0,
1, 0, -1, -1, -1, -3, -3, -1, 0, 1, 1, 0, 0, 2, 0, 2, 0, -1, -1, -1, -1, 0, 1,
-2, -2, -2, 1, 2, 0, 1, 1, 1, 1, 0, 1, -1, -1, -2, 0, 0, -2, 0, 1, 1, 1, 1, 0,
0, 0, 1, 0, -2, -3, -2, 0, 1, 2, 1, 1, 0, -1, -2, -1, -1, -1, 1, 0, -1, 0, 0, 0,
-1, 0, 1, 2, 2, 2, 0, 0, -1, -2, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 2, 2, 0, 0, 0,
-1, -1, 0, 1, -1, 1, -1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -1, 0, 1, -1, 1, 1, 1,
0, -2, -1, -1, -1, -1, 1, 1, 1, 3, 1, 0, 0, 0, -1, -1, -1, -1, 0, 2, 1, 0, 0, 1,
0, -1, -1, 1, 0, 0, 0, 0, 0, 1, 1, -1, 0, 0, -1, -1, 1, 1, 1, 0, 0, -1, -1, 0,
0, 0, 0, 1, 0, 1, 0, -2, -2, -2, -1, 0, 2, -1, 0, 1, 0, 0, 0, -1, 1, 0, 1, 0,
-1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 1, 0, 1, 2, 1, 0, 0, 0, -1, 0, -1, 0, -2,
-1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, -1, -2, -1, 1, 0, 0, 0, -1, -1, 1, 0, 0, 0, 1,
0, 2, 1, 0, 1, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, -1, 0, -1, 0,
1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 2, 1, 0, 1, 0, -1, 0, -1, -1, 0, 0, 0,
-1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 1, 0, -1, 0, 0, -1, 1,
1, 0, -1, 0, 0, 0, -1, -1, -1, 1, 1, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, 1, 0, 1, 0, 1, 1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0,
1, 1, 0, 0, 0, 1, -1, -1, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, -1, 0, -1, 1, 0, 0,
1, 0, 0, 1, 0, 0, 0, -1, 0, -1, -1, -1, 0, 1, 1, 1, 0, -1, 0, 1, -1, 0, -1, -1,
0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, -2, -1, 0, 0, 0, -1,
0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, -1, 1, 0, 1, 0, -1,
0, -1, 1, 0, 1, 0, 0, -1, 0, 0, -1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, -1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0,
1, 1, -1, 0, 0, 1, 0, 1, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0,
0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, 1, 1, 0, 0, 0, 0,
0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 1, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1,
1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, -1, 0, 0, 0, 0, 0,
0, -1, 0, -1, 0, 1, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0,
0, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 1, 0, -1, 0, 0, 0, 0, 0, -1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 1, -1, 0, 0, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1,
1, 0, 0, 1, 0, 0, -1, 0, -1, -1, 1, 0, 0, -1, 0, 1, -1, -1, 0, 0, 0, 1, 1, 0, 0,
-1, -1, 1, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0,
0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, -1, 1, 0, -1,
0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
0, 0, 0, 0, 0, -1, 0, 0, 0, 1, -1, -1, 0, 0, 1, 0, 0, -1, 0, };

#endif /* clap_H_ */