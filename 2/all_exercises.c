#include <stdio.h>

void exercise_2_1(void);
void exercise_2_2(void);
void exercise_2_3(void);
void exercise_2_4(void);
void exercise_2_5(void);
void exercise_2_6(void);
void exercise_2_7(void);
void exercise_2_8(void);
void exercise_2_9(void);
void exercise_2_10(void);
void exercise_2_11(void);

// Exercise 2_1: Check if number > 6
void exercise_2_1(void) {
    int number = 0;

    printf("Enter a whole number: ");
    scanf("%d", &number);

    if(number > 6)
    {
        printf("The number is greater than 6\n");
    }
}

// Exercise 2_2: Check if remainder of number/8 > 4
void exercise_2_2(void) {
    int number = 0;

    printf("Enter a whole number: ");
    scanf("%d", &number);

    if(number % 8 > 4)
    {
        printf("The remainder of %d divided by 8 is greater than 4\n", number);
    }
}

// Exercise 2_3: Find smallest of three numbers
void exercise_2_3(void) {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Enter three whole numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 < num2 && num1 < num3)
    {
        printf("%d is the smallest number\n", num1);
    } else if(num2 < num1 && num2 < num3)
    {
        printf("%d is the smallest number\n", num2);
    } else if(num3 < num1 && num3 < num2)
    {
        printf("%d is the smallest number\n", num3);
    } else
    {
        printf("There is a tie for the smallest number\n");
    }
}

// Exercise 2_4: Number to word (1-10)
void exercise_2_4(void) {
    int number = 0;
    printf("Enter a whole number between 1 and 10 to be displayed: ");
    scanf("%d", &number);

    switch(number)
    {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        case 10:
            printf("Ten\n");    
            break;
        default:
            printf("Please enter a whole number between 1 and 10\n");
    }
}

// Exercise 2_5: Day of week (1-7)
void exercise_2_5(void) {
    int number = 0;
    printf("Enter the day of the week as a whole number (1-7): ");
    scanf("%d", &number);

    switch(number)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");    
            break;
        default:
            printf("Please enter a whole number between 1 and 7\n");
    }
}

// Exercise 2_6: Print pyramid pattern
void exercise_2_6(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

// Exercise 2_7: Sum of numbers between a and b
void exercise_2_7(void) {
    int a, b, sum = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }

    printf("Explanation: ");

    for (int i = a + 1; i < b; i++) {
        printf("%d", i);
        sum += i;

        if (i < b - 1) {
            printf("+");
        }
    }

    printf(" = %d\n", sum);
}

// Exercise 2_8: Sum of even and multiplication of odd numbers
void exercise_2_8(void) {
    int a, b, sum = 0, multiplication = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }

    for (int i = a + 1; i < b; i++) {
        if (i % 2 == 0)
            sum += i;        
        else
            multiplication *= i;    
    }

    printf("Sum of even numbers: %d\n", sum);
    printf("Multiplication of odd numbers: %d\n", multiplication);
}

// Exercise 2_9: Count numbers > K and divisible by 3
void exercise_2_9(void) {
    int N, K, x;
    int count = 0;

    printf("Enter N and K: ");
    scanf("%d %d", &N, &K);

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);

        if (x > K && x % 3 == 0) {
            count++;
        }
    }

    printf("Count = %d\n", count);
}

// Exercise 2_10: Sum of integers until 0 is entered
void exercise_2_10(void) {
    int x, sum = 0;

    printf("Enter numbers to sum (0 to stop): ");
    scanf("%d", &x);

    while (x != 0) {
        sum += x;
        scanf("%d", &x);
    }

    printf("Sum = %d\n", sum);
}

// Exercise 2_11: Function table
void exercise_2_11(void) {
    double a, b, x;

    printf("Enter start and end values (a b): ");
    scanf("%lf %lf", &a, &b);

    for (x = a; x <= b; x = x + 0.01) {
        printf("x = %.2lf  f(x) = %.2lf\n", x, x*x - 4);
    }
}

int main(void) {
    int choice = 0;

    // Infinite loop that keeps the menu active until you choose to exit
    while (1) {
        printf("\n========================================\n");
        printf("    TU_LU Exercise Selector (2_n)\n");
        printf("========================================\n\n");
        printf("Available exercises:\n");
        printf("  0  - Exit Program\n");
        printf("  1  - Exercise 2_1:  Check if number > 6\n");
        printf("  2  - Exercise 2_2:  Check remainder of number/8 > 4\n");
        printf("  3  - Exercise 2_3:  Find smallest of three numbers\n");
        printf("  4  - Exercise 2_4:  Number to word (1-10)\n");
        printf("  5  - Exercise 2_5:  Day of week (1-7)\n");
        printf("  6  - Exercise 2_6:  Pyramid pattern\n");
        printf("  7  - Exercise 2_7:  Sum of numbers between a and b\n");
        printf("  8  - Exercise 2_8:  Sum of even and multiply odd numbers\n");
        printf("  9  - Exercise 2_9:  Count numbers > K divisible by 3\n");
        printf(" 10  - Exercise 2_10: Sum of integers until 0\n");
        printf(" 11  - Exercise 2_11: Function table\n\n");
        printf("========================================\n\n");

        printf("Select exercise (0-11): ");
        scanf("%d", &choice);

        // Break the loop if the user enters 0
        if (choice == 0) {
            printf("\nExiting program. Goodbye!\n");
            break; 
        }

        printf("\n----------------------------------------\n");
        printf("Running Exercise 2_%d\n", choice);
        printf("----------------------------------------\n\n");

        switch(choice) {
            case 1:
                exercise_2_1();
                break;
            case 2:
                exercise_2_2();
                break;
            case 3:
                exercise_2_3();
                break;
            case 4:
                exercise_2_4();
                break;
            case 5:
                exercise_2_5();
                break;
            case 6:
                exercise_2_6();
                break;
            case 7:
                exercise_2_7();
                break;
            case 8:
                exercise_2_8();
                break;
            case 9:
                exercise_2_9();
                break;
            case 10:
                exercise_2_10();
                break;
            case 11:
                exercise_2_11();
                break;
            default:
                printf("Invalid choice! Please select a number between 0 and 11.\n");
        }

        printf("\n\n----------------------------------------\n");
        printf("Exercise completed!\n");
        printf("----------------------------------------\n");

        // --- NEW CODE: PAUSE SO YOU CAN SEE THE RESULTS ---
        printf("\nPress Enter to return to the menu...");
        
        // This clears any leftover inputs (like hitting enter after typing your number)
        while (getchar() != '\n'); 
        
        // This waits for you to actually press Enter to continue
        getchar(); 
        // --------------------------------------------------
    }

    return 0;
}