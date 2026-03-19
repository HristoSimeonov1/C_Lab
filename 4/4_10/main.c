#include <stdio.h>

int main() {
    int n;
    printf("Enter the amount of numbers to input: ");
    scanf("%d", &n);

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num < 200) {
            count1++;
        } else if (num < 400) {
            count2++;
        } else if (num < 600) {
            count3++;
        } else if (num < 800) {
            count4++;
        } else {
            count5++;
        }
    }

    float p1 = ((float)count1 / n) * 100;
    float p2 = ((float)count2 / n) * 100;
    float p3 = ((float)count3 / n) * 100;
    float p4 = ((float)count4 / n) * 100;
    float p5 = ((float)count5 / n) * 100;

    printf("1 to 200: %.2f%%\n", p1);
    printf("200 to 399: %.2f%%\n", p2);
    printf("400 to 599: %.2f%%\n", p3);
    printf("600 to 799: %.2f%%\n", p4);
    printf("800 to 1000: %.2f%%\n", p5);

    return 0;
}