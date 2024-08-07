#include <stdio.h>
#include "common.h"

void main()
{
    int LA[] = {1, 3, 5, 7, 8};
    int item = 5, n = 5;
    int i = 0;
    printf("The original array elements are :\n");
    printArray(LA, n);

    while (i < n)
    {
        if (LA[i] == item)
        {
            break;
        }
        i++;
    }
    printf("Found element %d at position %d\n", item, i + 1);
}