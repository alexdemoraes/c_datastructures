#include <stdio.h>

void printArray(int *LA, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("LA[%d] = %d \n", i, LA[i]);
  }
}
