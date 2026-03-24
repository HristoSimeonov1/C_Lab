#include <stdio.h>

int main(){

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }
    

    return 0;
}