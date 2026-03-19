#include <stdio.h>

int main() {
    int V, P1, P2;
    float N;

    printf("Pool volume (in cubic meters): ");
    scanf("%d", &V);
    printf("Pipe 1 flow rate (liters per hour): ");
    scanf("%d", &P1);
    printf("Pipe 2 flow rate (liters per hour): ");
    scanf("%d", &P2);
    printf("Hours the worker is absent: ");
    scanf("%f", &N);

    float volume_in_liters = V * 1000.0; 
    float water_p1 = P1 * N;
    float water_p2 = P2 * N;
    float total_water = water_p1 + water_p2;

    if (total_water <= volume_in_liters) {
        float percent_full = (total_water / volume_in_liters) * 100;
        float percent_p1 = (water_p1 / total_water) * 100;
        float percent_p2 = (water_p2 / total_water) * 100;

        printf("The pool is %.2f%% full.\n", percent_full);
        printf("Pipe 1 filled %.2f%% and Pipe 2 filled %.2f%% of the water.\n", percent_p1, percent_p2);
    } else {
        float overflow = total_water - volume_in_liters;
        
        printf("For %.2f hours the pool overflowed with %.2f liters of water.\n", N, overflow);
    }

    return 0;
}