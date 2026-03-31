#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[7];
    int *ptr = arr;
    int sum = 0;
    double average;
    int closest;
    int position = 0;

    for(int i = 0; i < 7; i++){
        printf("Enter number %d [-5000..5000]: ", i + 1);

        while(scanf("%d", (ptr + i)) != 1 || (*(ptr + i) < -5000) || (*(ptr + i) > 5000)){
            printf("Invalid input! Try again: ");
            while(getchar() != '\n');
        }

        sum += *(ptr + i);
    }

    average = sum / 7.0;

    closest = *ptr;
    position = 0;

    for(int i = 1; i < 7; i++){
        if(abs(*(ptr + i) - average) < abs(closest - average)){
            closest = *(ptr + i);
            position = i;
        }
    }

    printf("Average: %.2f\n", average);
    printf("Closest value: %d at position %d\n", closest, position + 1);

    return 0;
}