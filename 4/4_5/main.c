#include <stdio.h>

int main(){

    int seconds1, seconds2, seconds3;

    printf("Enter seconds for time 1: ");
    scanf("%d", &seconds1);

    printf("Enter seconds for time 2: ");
    scanf("%d", &seconds2);

    printf("Enter seconds for time 3: ");
    scanf("%d", &seconds3);

    int total = seconds1 + seconds2 + seconds3;

    int minutes = total / 60;
    int seconds = total % 60;

    printf("Total time: %d:%02d\n", minutes, seconds);

    return 0;
}