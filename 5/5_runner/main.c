#include <stdio.h>

// --- Declarations for exercise functions ---
void exercise_5_1(void);
void exercise_5_1_bonus(void);
void exercise_5_2(void);
void exercise_5_2_bonus(void);
void exercise_5_3(void);
void exercise_5_4(void);
void exercise_5_5(void);
void exercise_5_6(void);
void exercise_5_7(void);
void exercise_5_8(void);
void exercise_5_9(void);

// ==========================================
// Exercise 5_1
// ==========================================
void exercise_5_1(void) {
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
}

// ==========================================
// Exercise 5_1_bonus
// ==========================================
void exercise_5_1_bonus(void) {
    int x = 10;
    int *p = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);

    *p = 20;
    printf("Value of x after change: %d\n", x);
}

// ==========================================
// Exercise 5_2
// ==========================================
void exercise_5_2(void) {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    int valid = 1;

    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {
            if (*(p + i) >= *(p + i + 1)) {
                valid = 0;
                break;
            }
        } else {
            if (*(p + i) <= *(p + i + 1)) {
                valid = 0;
                break;
            }
        }
    }

    if (valid) {
        printf("The sequence satisfies the condition.\n");
    } else {
        printf("The sequence does NOT satisfy the condition.\n");
    }
}

// ==========================================
// Exercise 5_2_bonus
// ==========================================
void exercise_5_2_bonus(void) {
    char choice;

    printf("Enter an operation (+, -, *, /): \n");
    scanf(" %c", &choice);

    int a, b;
    printf("Enter two integers: \n");
    scanf("%d %d", &a, &b);

    int arr[2];
    int *p = arr;
    *p = a;
    *(p + 1) = b;

    switch (choice) {
        case '+':
            printf("Result: %d\n", *p + *(p + 1));
            break;
        case '-':
            printf("Result: %d\n", *p - *(p + 1));
            break;
        case '*':
            printf("Result: %d\n", (*p) * (*(p + 1)));
            break;
        case '/':
            if (*(p + 1) != 0) {
                printf("Result: %d\n", (*p) / (*(p + 1)));
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
    }
}

// ==========================================
// Exercise 5_3
// ==========================================
void exercise_5_3(void) {
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

    printf("\n");
}

// ==========================================
// Exercise 5_4
// ==========================================
void exercise_5_4(void) {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Enter K: ");
    scanf("%d", &k);

    k = k % n;

    for (int step = 0; step < k; step++) {
        int last = *(p + n - 1);

        for (int i = n - 1; i > 0; i--) {
            *(p + i) = *(p + i - 1);
        }

        *p = last;
    }

    printf("Result:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");
}

// ==========================================
// Exercise 5_5
// ==========================================
void exercise_5_5(void) {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Enter K: ");
    scanf("%d", &k);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(p + i) < *(p + j)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("K-th largest element: %d\n", *(p + k - 1));
}

// ==========================================
// Exercise 5_6
// ==========================================
void exercise_5_6(void) {
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

    printf("\n");
}

// ==========================================
// Exercise 5_7
// ==========================================
void exercise_5_7(void) {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Enter target sum: ");
    scanf("%d", &k);

    int found = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += *(p + j);

            if (sum == k) {
                printf("Subarray: ");
                for (int t = i; t <= j; t++) {
                    printf("%d ", *(p + t));
                }
                found = 1;
                break;
            }
        }

        if (found) {
            break;
        }
    }

    if (!found) {
        printf("No such subarray.\n");
    } else {
        printf("\n");
    }
}

// ==========================================
// Exercise 5_8
// ==========================================
void exercise_5_8(void) {
    int arr[20];
    int *p = arr;

    int n = 10;

    printf("Enter 10 elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    while (n < 20) {
        int value, pos;

        printf("Enter value (0 to stop): ");
        scanf("%d", &value);

        if (value == 0) {
            break;
        }

        printf("Enter position: ");
        scanf("%d", &pos);

        if (pos < 0 || pos > n) {
            continue;
        }

        for (int i = n; i > pos; i--) {
            *(p + i) = *(p + i - 1);
        }

        *(p + pos) = value;
        n++;
    }

    printf("Result:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");
}

// ==========================================
// Exercise 5_9
// ==========================================
void exercise_5_9(void) {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    int maxLen = 1, maxStart = 0;
    int currLen = 1, currStart = 0;

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

    printf("Longest sequence of equal numbers:\n");
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");
}

// ==========================================
// Main menu
// ==========================================
int main(void) {
    int choice = 0;

    while (1) {
        printf("\n========================================\n");
        printf("    TU_LU Exercise Selector (5_1 - 5_9)\n");
        printf("========================================\n\n");
        printf("Available exercises:\n");
        printf("  0  - Exit Program\n");
        printf("  1  - Exercise 5_1: Longest square in sorted array\n");
        printf("  2  - Exercise 5_1_bonus: Pointer basics\n");
        printf("  3  - Exercise 5_2: Zig-zag sequence check\n");
        printf("  4  - Exercise 5_2_bonus: Pointer calculator\n");
        printf("  5  - Exercise 5_3: Reverse print array\n");
        printf("  6  - Exercise 5_4: Rotate array right by K\n");
        printf("  7  - Exercise 5_5: K-th largest element\n");
        printf("  8  - Exercise 5_6: Longest monotonic subsequence\n");
        printf("  9  - Exercise 5_7: Subarray with target sum\n");
        printf(" 10  - Exercise 5_8: Insert values in array\n");
        printf(" 11  - Exercise 5_9: Longest equal sequence\n\n");
        printf("========================================\n\n");

        printf("Select exercise (0-11): ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input! Please enter a number.\n");
            continue;
        }

        if (choice == 0) {
            printf("\nExiting program. Goodbye!\n");
            break;
        }

        printf("\n----------------------------------------\n");
        printf("Running selection %d\n", choice);
        printf("----------------------------------------\n\n");

        switch (choice) {
            case 1:  exercise_5_1(); break;
            case 2:  exercise_5_1_bonus(); break;
            case 3:  exercise_5_2(); break;
            case 4:  exercise_5_2_bonus(); break;
            case 5:  exercise_5_3(); break;
            case 6:  exercise_5_4(); break;
            case 7:  exercise_5_5(); break;
            case 8:  exercise_5_6(); break;
            case 9:  exercise_5_7(); break;
            case 10: exercise_5_8(); break;
            case 11: exercise_5_9(); break;
            default:
                printf("Invalid choice! Please select a valid number from the menu.\n");
        }

        printf("\n\n----------------------------------------\n");
        printf("Exercise completed!\n");
        printf("----------------------------------------\n");

        printf("\nPress Enter to return to the menu...");

        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        getchar();
    }

    return 0;
}
