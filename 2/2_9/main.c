#include <stdio.h>

int main() {
    int N, K, x;
    int count = 0;

    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);

        if (x > K && x % 3 == 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}