#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>
#include <assert.h>
#include "common.h"

int main(int argc, char *argv[]) {
    int *p = malloc(sizeof(int)); 
    assert(p != NULL);

    printf("(%d) address pointed to by p: %p\n", GetCurrentProcessId(), (void*)p);

    *p = 0;

    while (1) {
        Spin(1);
        *p = *p + 1;
    
        printf("(%d) p: %d\n", GetCurrentProcessId(), *p);
    }

    return 0;
}