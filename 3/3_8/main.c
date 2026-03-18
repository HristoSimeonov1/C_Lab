#include <stdio.h>

int add(int a, int b){ return a + b; }
int subtract(int a, int b){ return a - b; }
int multiply(int a, int b){ return a * b; }
double divide(int a, int b){ return (double)a / b; }

int main(){
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1-add 2-subtract 3-multiply 4-divide\n");
    scanf("%d", &choice);

    if(choice == 1)
        printf("Result = %d\n", add(a,b));
    else if(choice == 2)
        printf("Result = %d\n", subtract(a,b));
    else if(choice == 3)
        printf("Result = %d\n", multiply(a,b));
    else if(choice == 4){
        if(b != 0)
            printf("Result = %.2lf\n", divide(a,b));
        else
            printf("Cannot divide by zero\n");
    }

    return 0;
}