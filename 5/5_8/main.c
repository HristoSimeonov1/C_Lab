#include <stdio.h>

int main() {
    int arr[20];
    int *p = arr;

    int n = 10; 

    printf("Enter 10 elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    while (n < 20) {
        int value, pos;

        printf("Enter value (0 to stop): ");
        scanf("%d", &value);

        if (value == 0) break;

        printf("Enter position: ");
        scanf("%d", &pos);

        if (pos < 0 || pos > n) continue;

        for (int i = n; i > pos; i--) {
            *(p + i) = *(p + i - 1);
        }


        *(p + pos) = value;
        n++;
    }

    printf("Result:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}