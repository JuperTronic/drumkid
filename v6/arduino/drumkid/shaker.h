#ifndef shaker_H_
#define shaker_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define shaker_NUM_CELLS 664
#define shaker_SAMPLERATE 16384
 
CONSTTABLE_STORAGE(int8_t) shaker_DATA [] = {-1, 0, -1, 1, 0, 0, 1, 1, 0, 1, -1,
-1, 2, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 1, 1, -1, 1, 1, -3, 3, 0, 1, 0, -1, 2,
-5, 4, -1, -1, 1, -2, 0, 2, 0, -2, -1, 3, -1, -1, 0, 3, -3, 5, -3, -7, 9, -5, 3,
-2, 2, -3, 1, -1, 2, -2, 3, -3, 5, 0, -7, 6, -7, 7, -2, 1, -3, 4, -1, -1, 1, 6,
-19, 13, 5, -18, 14, -4, 3, -2, 1, 0, 0, 0, -1, 5, -6, 1, 4, -2, 0, -5, 9, -8,
1, 6, -6, 3, -1, 0, 0, 1, -4, 0, 3, 0, -8, 13, -6, -7, 10, -6, 3, -4, 3, -4, 6,
-4, 3, -2, 7, -7, -2, 8, -11, 19, -23, 9, 4, -3, -1, 3, -4, 6, -5, -1, 4, -10,
13, -10, 8, -8, 4, -2, 4, -6, 7, -3, -5, 8, -3, -4, 16, -17, -4, 16, -11, 14,
-17, 9, 0, -4, 6, 1, -13, 12, 2, -11, 8, -2, 0, 0, 0, 1, 0, -3, 4, -6, 3, -1, 2,
4, -13, 12, 9, -24, 14, 0, -3, 4, -5, 9, -11, 5, -11, 4, 10, -7, 2, -1, 3, -1,
-2, -5, 3, -4, 5, 3, -5, 6, -7, 11, -10, -1, 7, -10, 8, -2, -1, 3, -2, 3, -1,
-9, 15, -8, 1, 3, -6, 5, 3, -9, 7, -5, 4, 0, -5, 16, -27, 16, -1, -3, 2, -1, 1,
-3, 5, -3, -11, 20, -9, -11, 24, -21, 11, -1, 1, -3, 1, -1, 3, -5, 3, 0, 0, 0,
-1, 7, -14, 14, -9, 0, 3, 2, -6, 13, -18, 4, 6, -4, 0, 4, -5, 7, -5, -4, 9, -9,
10, -12, 12, -11, 17, -18, 9, 0, 3, -6, 17, -16, -9, 22, -15, 21, -28, 18, -6,
11, -7, -10, 4, -2, 8, -6, 2, 1, 0, -1, -1, 7, -11, 5, 0, -2, 10, -14, 6, 5, 3,
-18, 11, 7, -5, -10, 14, -7, 3, 0, -5, 9, -9, 13, -16, 27, -30, 2, 13, -4, 13,
-21, 2, 1, 8, -2, -3, 5, -9, 1, 3, 0, -2, 2, -2, -1, 15, -31, 22, -6, 4, 0, 1,
-2, -11, 21, -15, 8, -5, 7, -8, 14, -13, -5, 26, -30, 2, 24, -18, -1, 10, -8,
16, -18, -5, 24, -24, 16, -12, 12, -8, 5, 4, -19, 22, -33, 34, -9, -11, 11, 1,
-8, 13, -19, 16, -10, 5, 4, -15, 23, -26, 16, -3, 1, -5, 7, -13, 18, -18, 13, 2,
-21, 20, 2, -17, 12, 0, -10, 16, -12, 10, -9, 9, -9, 14, -17, 8, 7, -15, 15,
-10, 4, 1, 1, -5, 3, 13, -12, -19, 26, -11, 6, -2, 0, 0, 1, 2, -6, 6, -8, 17,
-26, 22, -15, 2, 9, -7, 2, -4, 6, -7, 8, -11, 17, -15, 4, 0, 3, 2, -4, 2, -6, 4,
0, 4, -6, 6, -5, 2, 1, -2, 4, -3, 1, 0, 0, 1, -1, 0, 1, 1, 5, -10, -2, 4, 4, -3,
-7, 8, -3, 1, -2, 3, -4, 2, -1, 1, 4, -2, -5, 1, 9, -9, 5, -1, 0, 0, 0, -1, 0,
1, -1, 0, 1, 2, -2, 0, 0, 1, -1, 0, 1, -1, -1, 3, -5, 1, 2, -1, 1, 0, 1, 0, 1,
0, 0, 1, 0, -1, 2, -1, 1, 0, 0, -1, 1, 0, -1, 1, 0, 0, 0, 0, 1, 0, 0, 1, -3, 1,
-1, 0, 0, 0, 0, -1, 1, 0, -1, 0, 1, 0, 0, 0, 1, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0,
0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* shaker_H_ */