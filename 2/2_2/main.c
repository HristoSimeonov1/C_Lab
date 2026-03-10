#include <stdio.h>

int main(){

    int number = 0;

    printf("Enter a whole number: ");
    scanf("%d", &number);

    if(number % 8 > 4)
    {
        printf("The remainder of %d divided by 8 is greater than 4\n", number);
    }

    return 0;
}