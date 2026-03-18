#include <stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i < n; i++)
        if(n % i == 0) return 0;
    return 1;
}

int sumDigits(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int countDigits(int n){
    int count = 0;
    while(n){
        count++;
        n /= 10;
    }
    return count;
}

int reverseNumber(int n){
    int r = 0;
    while(n){
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int main(){
    int n;
    scanf("%d", &n);

    printf("Prime: %d\n", isPrime(n));
    printf("Sum of digits: %d\n", sumDigits(n));
    printf("Number of digits: %d\n", countDigits(n));
    printf("Reversed: %d\n", reverseNumber(n));

    return 0;
}