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

    printf("Enter K: ");
    scanf("%d", &k);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(p + i) < *(p + j)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("K-th largest element: %d\n", *(p + k - 1));

    return 0;
}