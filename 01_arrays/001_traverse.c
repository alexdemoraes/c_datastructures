#include <stdio.h>
#include "common.h"

int main(char **args)
{
    int LA[] = {1, 3, 5, 7, 8};
    int n = 5;
    int i = 0;
    printf("The original array elements are :\n");
    printArray(LA, n);
    return 0;
}