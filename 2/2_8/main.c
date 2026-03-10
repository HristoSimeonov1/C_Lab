#include <stdio.h>

int main() {
    int a, b, sum = 0, multiplication = 1;

    scanf("%d %d", &a, &b);

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }

    for (int i = a + 1; i < b; i++) {
        if (i % 2 == 0)
            sum += i;        
        else
            multiplication *= i;    
    }

    printf("Sum of even numbers: %d\n", sum);
    printf("Multiplication of odd numbers: %d", multiplication);

    return 0;
}