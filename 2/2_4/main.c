#include <stdio.h>

int main(){

    int number = 0;
    printf("Enter a whole number between 1 and 10 to be displayed: ");
    scanf("%d", &number);

    switch(number)
    {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        case 10:
            printf("Ten\n");    
            break;
        default:
            printf("Please enter a whole number between 1 and 10\n");
    }

    return 0;
}