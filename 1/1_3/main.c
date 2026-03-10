#include <stdio.h>

int main() {
    int num = 10;
    float price = 5.25;
    char letter = 'A';

    printf("Цяло число: %d\n", num);
    printf("Дробно число: %.2f\n", price);
    printf("Символ: %c\n", letter);
    printf("Число с водещи нули: %05d\n", num);
    printf("Процент: 100%%\n");

    return 0;
}