#include <stdio.h>

int main(){

    int hours, minutes;
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    if(hours < 0 || hours > 23 || minutes < 0 || minutes > 59){
        printf("Invalid time entered.\n");
        return 1;
    }
    else{
        printf("The time in 15 minutes will be: %02d:%02d\n", (hours + (minutes + 15) / 60) % 24, (minutes + 15) % 60);}
        

    return 0;
}