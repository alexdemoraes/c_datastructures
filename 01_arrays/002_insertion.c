#include <stdio.h>
#include "common.h"

void main()
{
    int LA[3] = {}, i;
    int n = 3;
    printf("Array before insertion :\n");
    printArray(LA, n);

    printf("Inserting elements... :\n");

    printf("The array elements after insertion :\n");

    // This is dangerous
    for (i = 0; i < 5; i++)
    {
        LA[i] = i + 2;
    }
    printArray(LA, 5);
}
