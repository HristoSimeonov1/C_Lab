#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("/\\\n");
        return 0;
    } 
    
    if (n == 2) {
        printf("/\\/\\\n");
        printf("\\/\\/\n");
        return 0;
    }

    int col_size = n / 2;
    int mid_size = 2 * n - 2 * col_size - 4;

    printf("/");
    for (int i = 0; i < col_size; i++) printf("^");
    printf("\\");
    for (int i = 0; i < mid_size; i++) printf("_");
    printf("/");
    for (int i = 0; i < col_size; i++) printf("^");
    printf("\\\n");

    for (int row = 2; row <= n - 2; row++) {
        printf("|");
        for (int i = 0; i < 2 * n - 2; i++) printf(" ");
        printf("|\n");
    }

    if (n > 2) {
        printf("|");
        for (int i = 0; i < col_size + 1; i++) printf(" ");
        for (int i = 0; i < mid_size; i++) printf("_");
        for (int i = 0; i < col_size + 1; i++) printf(" ");
        printf("|\n");
    }

    printf("\\");
    for (int i = 0; i < col_size; i++) printf("_");
    printf("/");
    for (int i = 0; i < mid_size; i++) printf(" ");
    printf("\\");
    for (int i = 0; i < col_size; i++) printf("_");
    printf("/\n");

    return 0;
}