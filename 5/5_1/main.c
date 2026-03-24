#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter the sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    int maxLen = 1, currLen = 1;
    int maxStart = 0, currStart = 0;

    for (int i = 1; i < n; i++) {
        if (*(p + i) == *(p + i - 1)) {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 1;
            currStart = i;
        }
    }

    if (currLen > maxLen) {
        maxLen = currLen;
        maxStart = currStart;
    }

    printf("Longest square starts at index: %d\n", maxStart);
    printf("Length: %d\n", maxLen);

    return 0;
}