#ifndef rim_H_
#define rim_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define rim_NUM_CELLS 427
#define rim_SAMPLERATE 16384
 
CONSTTABLE_STORAGE(int8_t) rim_DATA [] = {1, -1, 2, -7, -10, 3, 6, 3, 5, -2,
-42, -33, -28, -10, 40, 50, 36, 43, -13, -37, -26, -14, -15, 14, 62, 57, 31,
-48, -29, -18, -16, -14, 17, 62, 33, 40, -9, -99, -42, -29, -3, 44, 24, 31, 8,
19, -39, -67, -44, -17, 27, 23, 19, 20, -16, -41, -25, -19, -8, -3, 11, 25, 13,
14, 14, 17, 14, 16, 11, 41, 56, 38, -5, -86, -50, -15, 12, 35, 20, 15, 4, -2,
-10, -22, -36, -20, -20, -17, -19, -12, -28, -43, -29, -17, -3, 7, 18, 24, 29,
31, 33, 31, 29, 25, 21, 17, 15, 11, 5, -6, -10, -5, 2, 19, 14, 4, -5, -13, -21,
-26, -30, -30, -30, -27, -24, -19, -21, -28, -22, -13, 0, 9, 17, 24, 28, 30, 31,
29, 28, 24, 21, 16, 11, 7, 3, 0, -3, -5, -4, -1, 3, 6, 1, -5, -11, -16, -19,
-21, -23, -21, -20, -18, -19, -20, -15, -10, -4, 1, 8, 13, 17, 20, 22, 22, 21,
19, 18, 15, 12, 8, 6, 3, 1, -2, -3, -3, -4, -4, -4, -5, -5, -6, -7, -8, -9, -11,
-12, -13, -13, -13, -11, -9, -6, -2, 0, 4, 7, 10, 11, 12, 13, 13, 12, 11, 10, 8,
7, 4, 3, 1, 1, -1, -2, -2, -2, -3, -4, -4, -5, -5, -6, -6, -6, -6, -6, -6, -6,
-7, -5, -3, -2, -1, 1, 3, 4, 5, 7, 7, 7, 6, 7, 5, 6, 5, 4, 2, 2, 2, 0, 0, -2,
-2, -2, -2, -3, -3, -4, -4, -4, -5, -4, -5, -3, -3, -3, -2, -2, -1, 0, 1, 1, 1,
3, 3, 5, 4, 5, 5, 3, 4, 3, 3, 2, 2, 2, 1, 0, -1, 0, -1, -2, -2, -2, -2, -2, -3,
-2, -2, -3, -3, -3, -2, -2, -2, -1, -1, 1, 1, 1, 2, 1, 2, 3, 2, 2, 2, 2, 2, 2,
1, 2, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, 0,
0, 0, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1, 0, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0,
-1, 0, 0, 0, 1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 1, 0, 0, 0, 0, 1,
0, };

#endif /* rim_H_ */