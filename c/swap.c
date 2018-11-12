//
// Swap 2 variables in different ways
//
//
#include<stdio.h>

void swapPointer(int *a, int *b)
{
    int k;
    k = *b;
    *b = *a;
    *a = k;
}

void swapBitwise(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main()
{
    int i = 3;
    int j = 999;

    printf("\n i = %3d \t j = %3d", i, j);

    swapPointer(&i, &j);
    printf("\n i = %3d \t j = %3d", i, j);

    swapBitwise(&i, &j);
    printf("\n i = %3d \t j = %3d", i, j);

    printf("\n");
    return 0;
}
