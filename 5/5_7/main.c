#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Enter target sum: ");
    scanf("%d", &k);

    int found = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += *(p + j);

            if (sum == k) {
                printf("Subarray: ");
                for (int t = i; t <= j; t++) {
                    printf("%d ", *(p + t));
                }
                found = 1;
                break;
            }
        }

        if (found) break;
    }

    if (!found) {
        printf("No such subarray.\n");
    }

    return 0;
}