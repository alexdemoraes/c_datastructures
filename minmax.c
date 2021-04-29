#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


int minMaxSeq(int n, int *min, int *max) {
    int i, x;
    scanf("%d", min);
    *max = *min;
    for (i = 2; i <= n; i = i + 1) {
        scanf("%d", &x);
        if (x > *max){
            *max = x;
        } else if (x < *min){
            *min  = x;
        }
    }
}

int main(void)
{
    int n, minimo, maximo;
    scanf("%d", &n);
     if (minMaxSeq(n, &minimo, &maximo))
        printf("%4d%4d\n", minimo, maximo);
    else printf("sequencia vazia\n");
        return 0;
}