#include <stdio.h>

int main() {
    double a, b, x;

    scanf("%lf %lf", &a, &b);

    for (x = a; x <= b; x = x + 0.01) {
        printf("x = %.2lf  f(x) = %.2lf\n", x, x*x - 4);
    }

    return 0;
}