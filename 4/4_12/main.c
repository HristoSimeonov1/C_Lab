#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int half_rows = n - 2;

    for (int i = 0; i < half_rows; i++) {
        char c = (i % 2 == 0) ? '*' : '-';
        for (int j = 0; j < half_rows; j++) {
            printf("%c", c);
        }
        printf("\\ /");
        for (int j = 0; j < half_rows; j++) {
            printf("%c", c);
        }
        printf("\n");
    }

    for (int i = 0; i < n - 1; i++) {
        printf(" ");
    }
    printf("@\n");

    for (int i = 0; i < half_rows; i++) {
        char c = (i % 2 == 0) ? '*' : '-';
        for (int j = 0; j < half_rows; j++) {
            printf("%c", c);
        }
        printf("/ \\");
        for (int j = 0; j < half_rows; j++) {
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}