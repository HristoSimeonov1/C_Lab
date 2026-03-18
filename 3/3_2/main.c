#include <stdio.h>

void change(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before: x=%d y=%d\n", x, y);
    change(&x, &y);
    printf("After: x=%d y=%d\n", x, y);

    return 0;
}