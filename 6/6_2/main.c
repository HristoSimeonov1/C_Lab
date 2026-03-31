#include <stdio.h>

int main(){

    int arr[7];
    int *ptr = arr;
    int max = 0;

    for (int i = 0; i < 7; i++){
        do{
            printf("Enter number %d [-5000..5000]: ", i + 1);
            scanf("%d", (ptr + i));
        }while((*(ptr + i) < -5000) || (*(ptr + i) > 5000));
    }

    max = *ptr;
    for (int i = 1; i < 7; i++){
        if (*(ptr + i) > max){
            max = *(ptr + i);
        }
    }
    printf("Max: %d\n", max);

    return 0;
}