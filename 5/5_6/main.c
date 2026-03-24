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

    int maxLen = 1, start = 0;

    int currLen = 1, currStart = 0;
    for (int i = 1; i < n; i++) {
        if (*(p + i) > *(p + i - 1)) {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                start = currStart;
            }
            currLen = 1;
            currStart = i;
        }
    }
    if (currLen > maxLen) {
        maxLen = currLen;
        start = currStart;
    }

    currLen = 1;
    currStart = 0;
    for (int i = 1; i < n; i++) {
        if (*(p + i) < *(p + i - 1)) {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                start = currStart;
            }
            currLen = 1;
            currStart = i;
        }
    }
    if (currLen > maxLen) {
        maxLen = currLen;
        start = currStart;
    }

    printf("Longest monotonic subsequence:\n");
    for (int i = start; i < start + maxLen; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}