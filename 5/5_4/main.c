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

    k = k % n;

    for (int step = 0; step < k; step++) {
        int last = *(p + n - 1);

        for (int i = n - 1; i > 0; i--) {
            *(p + i) = *(p + i - 1);
        }

        *p = last;
    }

    printf("Result:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}