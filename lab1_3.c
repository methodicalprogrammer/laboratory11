#include <stdio.h>
#include <stdlib.h>

void swapint(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void swapdouble(double *x, double *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int a = 3;
    int b = 5;

    swapint(&a, &b);
    printf("%d   %d\n", a, b);
    return 0;
}