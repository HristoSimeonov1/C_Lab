#include <stdio.h>

int main(){

    double n;
    char time;

    printf("Enter distance in km: ");
    scanf("%lf", &n);
    printf("Enter time (D for day, N for night): ");
    scanf(" %c", &time);

    double taxi;

    if(time == 'D' || time == 'd'){
        taxi = 0.70 + 0.79 * n;
    } else {
        taxi = 0.70 + 0.90 * n;
    }

    double min = taxi;
    char transport[] = "Taxi";

    if(n >= 20){
        double bus = 0.09 * n;
        if(bus < min){
            min = bus;
            sprintf(transport, "Bus");
        }
    }

    if(n >= 100){
        double train = 0.06 * n;
        if(train < min){
            min = train;
            sprintf(transport, "Train");
        }
    }

    printf("%s %.2lf\n", transport, min);

    return 0;
}