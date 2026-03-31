#include <stdio.h>

int main() {
    int arr[7];
    int sum = 0;

    for(int i = 0; i < 7; i++) {
        do {
            printf("Enter number %d [-5000..5000]: ", i + 1);
            scanf("%d", &arr[i]);
        } while(arr[i] < -5000 || arr[i] > 5000);

        sum += arr[i];
    }

    printf("Summary: %d\n", sum);

    return 0;
}