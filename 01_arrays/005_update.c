#include <stdio.h>
#include "common.h"

void main()
{
    int LA[] = {1, 3, 5, 7, 8};
    int k = 3, n = 5, item = 10;
    int i = 0, j;

    printf("The original array elements are :\n");
    printArray(LA, n);

    LA[k - 1] = item;

    printf("The array elements after update :\n");
    printArray(LA, n);
}
