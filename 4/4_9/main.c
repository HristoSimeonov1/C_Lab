#include <stdio.h>

int main() {
    float X, Y, Z;
    int workers;

    printf("Vineyard area (sq meters): ");
    scanf("%f", &X);
    printf("Grapes per sq meter (kg): ");
    scanf("%f", &Y);
    printf("Desired wine (liters): ");
    scanf("%f", &Z);
    printf("Number of workers: ");
    scanf("%d", &workers);

    float total_grapes = X * Y;
    float grapes_for_wine = total_grapes * 0.40;
    float produced_wine = grapes_for_wine / 2.5;

    if (produced_wine >= Z) {
        float left_wine = produced_wine - Z;
        float wine_per_worker = left_wine / workers;

        printf("Produced %.2f liters of wine.\n", produced_wine);
        printf("%.2f liters left -> %.2f liters per worker.\n", left_wine, wine_per_worker);
    } else {
        float needed_wine = Z - produced_wine;
        
        printf("%.2f more liters of wine needed.\n", needed_wine);
    }

    return 0;
}