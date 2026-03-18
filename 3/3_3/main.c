#include <stdio.h>

int ifEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    printf("Vavedi chislo: ");
    scanf("%d", &n);

    if (ifEven(n))
        printf("Chisloto e chetno\n");
    else
        printf("Chisloto e nechetno\n");

    return 0;
}