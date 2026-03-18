#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int n;
    printf("Enter decimal number: ");
    scanf("%d", &n);

    printf("Binary: ");
    decimalToBinary(n);

    return 0;
}