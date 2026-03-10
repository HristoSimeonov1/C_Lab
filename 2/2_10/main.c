#include <stdio.h>

int main() {
    int x, sum = 0;

    scanf("%d", &x);

    while (x != 0) {
        sum += x;
        scanf("%d", &x);
    }

    printf("Sum = %d", sum);

    return 0;
}