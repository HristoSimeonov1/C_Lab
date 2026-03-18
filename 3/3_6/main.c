#include <stdio.h>

// sum of elements
int sum(int arr[], int n){
    int s = 0;
    for(int i = 0; i < n; i++)
        s += arr[i];
    return s;
}

// maximum element
int max(int arr[], int n){
    int m = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > m) m = arr[i];
    return m;
}

// minimum element
int min(int arr[], int n){
    int m = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < m) m = arr[i];
    return m;
}

// count even numbers
int countEven(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 == 0) count++;
    return count;
}

// reverse array
void reverse(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[100];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum = %d\n", sum(arr, n));
    printf("Max = %d\n", max(arr, n));
    printf("Min = %d\n", min(arr, n));
    printf("Even count = %d\n", countEven(arr, n));

    reverse(arr, n);

    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}