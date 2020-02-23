#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int x, y;
    int *p, *q;

    x = 2;
    y = 3;

    p = &x;
    q = &y;


    printf("%p  %d\n", &x, x);
    printf("%p  %d\n", p, *p);

    printf("%p  %d\n", &y, y);   
    printf("%p  %d\n", q, *q);
    printf("%p\n", &p);        
    printf("%p\n", &q);        

    return 0;
}