#include <stdio.h>

int main(){

    char choice;
    printf("Enter an operation (+, -, *, /): \n");
    scanf("%c", &choice);

    int a, b;
    printf("Enter two integers: \n");
    scanf("%d %d", &a, &b);
    int arr[2];
    int *p = arr;
    *p = a;
    *(p + 1) = b;
    
    switch (choice) {
        case '+':
            printf("Result: %d\n", *p + *(p + 1));
            break;
        case '-':
            printf("Result: %d\n", *p - *(p + 1));
            break;
        case '*':
            printf("Result: %d\n", (*p) * (*(p + 1)));
            break;
        case '/':
            if (*(p + 1) != 0) {
                printf("Result: %d\n", (*p) / (*(p + 1)));
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}