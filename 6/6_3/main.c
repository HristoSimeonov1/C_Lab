#include <stdio.h>

int main() {

    int arr[7];
    int *ptr = arr;
    double sum = 0;
    double average = 0.0;

    for(int i = 0; i < 7; i++) {
        do {
            printf("Enter number %d [-5000..5000]: ", i + 1);
            scanf("%d", (ptr + i));
        } while((*(ptr + i) < -5000) || (*(ptr + i) > 5000));

        sum += *(ptr + i);
    }
    average = (double)sum / 7;
    printf("Average: %.2f\n", average);


    return 0;
}