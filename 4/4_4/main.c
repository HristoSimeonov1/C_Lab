#include <stdio.h>

int main(){

    int points;
    double bonus = 0;

    printf("Enter points: ");
    scanf("%d", &points);

    if(points <= 100){
        bonus = 5;
    } else if(points <= 1000){
        bonus = 0.2 * points;
    } else {
        bonus = 0.1 * points;
    }

    if(points % 2 == 0){
        bonus += 1;
    }

    if(points % 10 == 5){
        bonus += 2;
    }

    printf("Bonus points: %.0lf\n", bonus);
    printf("Total points: %.0lf\n", points + bonus);

    return 0;
}