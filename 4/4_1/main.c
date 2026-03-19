#include <stdio.h>

int bigger(int a, int b){
    return (a > b) ? a : b;
}

int smaller(int a, int b){
    return (a < b) ? a : b;
}

int main(){
    int num;
    
    printf("Enter numbers (0 to stop): ");
    scanf("%d", &num);

    if(num == 0){
        printf("No numbers entered.\n");
        return 0;
    }

    int max = num;
    int min = num;

    while(1){
        scanf("%d", &num);
        if(num == 0){
            break;
        }

        max = bigger(max, num);
        min = smaller(min, num);
    }

    printf("Max number: %d\n", max);
    printf("Min number: %d\n", min);

    return 0;
}