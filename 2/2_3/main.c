#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Enter three whole numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 < num2 && num1 < num3)
    {
        printf("%d is the smallest number\n", num1);
    } else if(num2 < num1 && num2 < num3)
    {
        printf("%d is the smallest number\n", num2);
    } else if(num3 < num1 && num3 < num2)
    {
        printf("%d is the smallest number\n", num3);
    } else
    {
        printf("There is a tie for the smallest number\n");
    }
    
    return 0;
}