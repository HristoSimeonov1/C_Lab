#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    int valid = 1;

    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {
            if (*(p + i) >= *(p + i + 1)) {
                valid = 0;
                break;
            }
        } else {
            if (*(p + i) <= *(p + i + 1)) {
                valid = 0;
                break;
            }
        }
    }

    if (valid)
        printf("The sequence satisfies the condition.\n");
    else
        printf("The sequence does NOT satisfy the condition.\n");

    return 0;
}