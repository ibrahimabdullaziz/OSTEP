#ifndef __common_h__
#define __common_h__

#include <stdio.h>
#include <windows.h>

static inline void Spin(int howlong) {
    Sleep(howlong * 1000);
}

#endif