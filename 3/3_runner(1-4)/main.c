#include <stdio.h>

// --- Декларации на основните функции за задачите ---
void exercise_3_1(void);
void exercise_3_2(void);
void exercise_3_3(void);
void exercise_3_4(void);

// --- Декларации на помощните функции ---
int squareArea(int side);
int rectangleArea(int length, int width);
int triangleArea(int base, int height);
int circleArea(int radius);
void change(int *a, int *b);
int ifEven(int n);
void decimalToBinary(int n);


// ==========================================
// Помощни функции за Задача 3_1
// ==========================================
int squareArea(int side){
    return side * side;
}

int rectangleArea(int length, int width){
    return length * width;
}

int triangleArea(int base, int height){
    return (base * height) / 2;
}

int circleArea(int radius){
    return 3.14 * radius * radius;
}

// Exercise 3_1: Area Calculator
void exercise_3_1(void) {
    int choice = 0;
    int a;
    int b;

    printf("Choose a shape to calculate its area:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Circle\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Enter the side length of the square: ");
            scanf("%d", &a);
            printf("The area of the square is: %d\n", squareArea(a));
            break;
        case 2:
            printf("Enter the length and width of the rectangle: ");
            scanf("%d %d", &a, &b);
            printf("The area of the rectangle is: %d\n", rectangleArea(a, b));
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%d %d", &a, &b);
            printf("The area of the triangle is: %d\n", triangleArea(a, b));
            break;
        case 4:
            printf("Enter the radius of the circle: ");
            scanf("%d", &a);
            printf("The area of the circle is: %d\n", circleArea(a));
            break;
        default:
            printf("Invalid choice\n");
    }
}


// ==========================================
// Помощна функция за Задача 3_2
// ==========================================
void change(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Exercise 3_2: Swap variables using pointers
void exercise_3_2(void) {
    int x = 5, y = 10;

    printf("Before: x=%d y=%d\n", x, y);
    change(&x, &y);
    printf("After: x=%d y=%d\n", x, y);
}


// ==========================================
// Помощна функция за Задача 3_3
// ==========================================
int ifEven(int n) {
    return n % 2 == 0;
}

// Exercise 3_3: Check if number is even or odd
void exercise_3_3(void) {
    int n;
    printf("Vavedi chislo: ");
    scanf("%d", &n);

    if (ifEven(n))
        printf("Chisloto e chetno\n");
    else
        printf("Chisloto e nechetno\n");
}


// ==========================================
// Помощна функция за Задача 3_4
// ==========================================
void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}

// Exercise 3_4: Decimal to Binary (Recursive)
void exercise_3_4(void) {
    int n;
    printf("Enter decimal number: ");
    scanf("%d", &n);

    printf("Binary: ");
    decimalToBinary(n);
    printf("\n"); // Добавяме нов ред, за да не се слее резултатът с менюто
}


// ==========================================
// ГЛАВНА ФУНКЦИЯ И МЕНЮ
// ==========================================
int main(void) {
    int choice = 0;

    // Безкраен цикъл за задържане на менюто активно
    while (1) {
        printf("\n========================================\n");
        printf("    TU_LU Exercise Selector (3_n)\n");
        printf("========================================\n\n");
        printf("Available exercises:\n");
        printf("  0  - Exit Program\n");
        printf("  1  - Exercise 3_1: Area Calculator\n");
        printf("  2  - Exercise 3_2: Swap Variables (Pointers)\n");
        printf("  3  - Exercise 3_3: Check Even/Odd\n");
        printf("  4  - Exercise 3_4: Decimal to Binary\n\n");
        printf("========================================\n\n");

        printf("Select exercise (0-4): ");
        scanf("%d", &choice);

        // Изход от програмата
        if (choice == 0) {
            printf("\nExiting program. Goodbye!\n");
            break; 
        }

        printf("\n----------------------------------------\n");
        printf("Running Exercise 3_%d\n", choice);
        printf("----------------------------------------\n\n");

        switch(choice) {
            case 1:
                exercise_3_1();
                break;
            case 2:
                exercise_3_2();
                break;
            case 3:
                exercise_3_3();
                break;
            case 4:
                exercise_3_4();
                break;
            default:
                printf("Invalid choice! Please select a number between 0 and 4.\n");
        }

        printf("\n\n----------------------------------------\n");
        printf("Exercise completed!\n");
        printf("----------------------------------------\n");

        // Пауза, за да видиш резултата преди менюто да се презареди
        printf("\nPress Enter to return to the menu...");
        
        // Изчистване на буфера
        while (getchar() != '\n'); 
        
        // Изчакване на натискане на Enter
        getchar(); 
    }

    return 0;
}