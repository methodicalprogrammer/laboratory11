#include <stdio.h>
#include <stdlib.h>

void minmax(int a[], int n, int *max, int *min);

int main(){
    int a[10];
    int i, mymin, mymax;

    printf("Type 10 numbers: \n");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }

    minmax(a, 10, &mymax, &mymin);

    printf("min is: %d\n", mymin);
    printf("max is: %d\n", mymax);    
    return 0;
}

void minmax(int a[], int n, int *max, int *min){
    int cur_max, cur_min, i;
    cur_max = a[0];
    cur_min = a[0];
    for(i=1;i<10;i++){
        if(cur_max<a[i]){
            cur_max = a[i];
        }
        if(cur_min>a[i]){
            cur_min = a[i];
        }
    }

    if(max){
        *max = cur_max;
    }
    if(min){
        *min = cur_min;
    }
}
