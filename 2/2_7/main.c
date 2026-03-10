#include <stdio.h>

int main() {
    int a, b, sum = 0;

    scanf("%d %d", &a, &b);

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }

    printf("Explanation: ");

    for (int i = a + 1; i < b; i++) {
        printf("%d", i);
        sum += i;

        if (i < b - 1) {
            printf("+");
        }
    }

    printf(" = %d", sum);

    return 0;
}