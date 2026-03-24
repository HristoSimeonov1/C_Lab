#include <stdio.h>

int main(){

    int x = 10;
    int *p = &x;
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    *p = 20;
    printf("Value of x after change: %d\n", x);

    return 0;
}