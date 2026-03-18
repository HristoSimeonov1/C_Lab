#include <stdio.h>

#define PI 3.14

// --- Декларации на основните функции за задачите ---
void exercise_3_5(void);
void exercise_3_6(void);
void exercise_3_7(void);
void exercise_3_8(void);
void exercise_3_9(void);

// --- Декларации на помощните функции ---
// За Задача 3_5
double squareArea_3_5(double a);
double squarePerimeter(double a);
double rectangleArea_3_5(double a, double b);
double rectanglePerimeter(double a, double b);
double triangleArea_3_5(double a, double b);
double circleArea_3_5(double r);
double circlePerimeter(double r);
double trapezoidArea(double a, double b, double h);
double trapezoidPerimeter(double a, double b, double c, double d);

// За Задача 3_6
int sumArray(int arr[], int n);
int maxArray(int arr[], int n);
int minArray(int arr[], int n);
int countEvenArray(int arr[], int n);
void reverseArray(int arr[], int n);

// За Задача 3_7
int isPrime(int n);
int sumDigits(int n);
int countDigits(int n);
int reverseNumber(int n);

// За Задача 3_8
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

// За Задача 3_9
int countUpper(char text[]);
int countLower(char text[]);
int countDigitChars(char text[]); // Преименувана, за да не съвпада с countDigits от 3_7


// ==========================================
// Помощни функции и логика за Задача 3_5
// ==========================================
double squareArea_3_5(double a) { return a * a; }
double squarePerimeter(double a) { return 4 * a; }

double rectangleArea_3_5(double a, double b) { return a * b; }
double rectanglePerimeter(double a, double b) { return 2 * (a + b); }

double triangleArea_3_5(double a, double b) { return a * b / 2; }

double circleArea_3_5(double r) { return PI * r * r; }
double circlePerimeter(double r) { return 2 * PI * r; }

double trapezoidArea(double a, double b, double h) { return (a + b) * h / 2; }
double trapezoidPerimeter(double a, double b, double c, double d) { return a + b + c + d; }

void exercise_3_5(void) {
    int choice;
    printf("Choose a shape to calculate its area:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Circle\n");
    printf("5. Trapezoid\n");
    scanf("%d", &choice);

    double a, b, c, d, h, r;

    if(choice == 1){
        printf("Enter side a: ");
        scanf("%lf", &a);
        printf("Area=%.2lf Perimeter=%.2lf\n", squareArea_3_5(a), squarePerimeter(a));
    }
    else if(choice == 2){
        printf("Enter sides a b: ");
        scanf("%lf %lf", &a, &b);
        printf("Area=%.2lf Perimeter=%.2lf\n", rectangleArea_3_5(a,b), rectanglePerimeter(a,b));
    }
    else if(choice == 3){
        printf("Enter base and height: ");
        scanf("%lf %lf", &a, &b);
        printf("Area=%.2lf\n", triangleArea_3_5(a,b));
    }
    else if(choice == 4){
        printf("Enter radius: ");
        scanf("%lf", &r);
        printf("Area=%.2lf Perimeter=%.2lf\n", circleArea_3_5(r), circlePerimeter(r));
    }
    else if(choice == 5){
        printf("Enter bases a b and height h: ");
        scanf("%lf %lf %lf", &a, &b, &h);
        printf("Enter sides c d: ");
        scanf("%lf %lf", &c, &d);

        printf("Area=%.2lf Perimeter=%.2lf\n",
               trapezoidArea(a,b,h),
               trapezoidPerimeter(a,b,c,d));
    } else {
        printf("Invalid choice.\n");
    }
}


// ==========================================
// Помощни функции и логика за Задача 3_6
// ==========================================
int sumArray(int arr[], int n){
    int s = 0;
    for(int i = 0; i < n; i++)
        s += arr[i];
    return s;
}

int maxArray(int arr[], int n){
    int m = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > m) m = arr[i];
    return m;
}

int minArray(int arr[], int n){
    int m = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < m) m = arr[i];
    return m;
}

int countEvenArray(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 == 0) count++;
    return count;
}

void reverseArray(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

void exercise_3_6(void) {
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum = %d\n", sumArray(arr, n));
    printf("Max = %d\n", maxArray(arr, n));
    printf("Min = %d\n", minArray(arr, n));
    printf("Even count = %d\n", countEvenArray(arr, n));

    reverseArray(arr, n);

    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// ==========================================
// Помощни функции и логика за Задача 3_7
// ==========================================
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
    if(n == 0) return 1; // Добавена проверка за 0
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

void exercise_3_7(void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Prime: %d\n", isPrime(n));
    printf("Sum of digits: %d\n", sumDigits(n));
    printf("Number of digits: %d\n", countDigits(n));
    printf("Reversed: %d\n", reverseNumber(n));
}


// ==========================================
// Помощни функции и логика за Задача 3_8
// ==========================================
int add(int a, int b){ return a + b; }
int subtract(int a, int b){ return a - b; }
int multiply(int a, int b){ return a * b; }
double divide(int a, int b){ return (double)a / b; }

void exercise_3_8(void) {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1-add 2-subtract 3-multiply 4-divide\nChoice: ");
    scanf("%d", &choice);

    if(choice == 1)
        printf("Result = %d\n", add(a,b));
    else if(choice == 2)
        printf("Result = %d\n", subtract(a,b));
    else if(choice == 3)
        printf("Result = %d\n", multiply(a,b));
    else if(choice == 4){
        if(b != 0)
            printf("Result = %.2lf\n", divide(a,b));
        else
            printf("Cannot divide by zero\n");
    } else {
        printf("Invalid choice.\n");
    }
}


// ==========================================
// Помощни функции и логика за Задача 3_9
// ==========================================
int countUpper(char text[]){
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] >= 'A' && text[i] <= 'Z')
            count++;
    }
    return count;
}

int countLower(char text[]){
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] >= 'a' && text[i] <= 'z')
            count++;
    }
    return count;
}

int countDigitChars(char text[]){
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] >= '0' && text[i] <= '9')
            count++;
    }
    return count;
}

void exercise_3_9(void) {
    char text[100];

    // Изчистване на буфера преди въвеждане на текст, 
    // за да не прихване fgets остатъчен "Enter" от предишен scanf
    while (getchar() != '\n'); 

    printf("Enter text: ");
    fgets(text, 100, stdin);

    printf("Uppercase: %d\n", countUpper(text));
    printf("Lowercase: %d\n", countLower(text));
    printf("Digits: %d\n", countDigitChars(text));
}


// ==========================================
// ГЛАВНА ФУНКЦИЯ И МЕНЮ
// ==========================================
int main(void) {
    int choice = 0;

    // Безкраен цикъл за задържане на менюто активно
    while (1) {
        printf("\n========================================\n");
        printf("    TU_LU Exercise Selector (3_5 - 3_9)\n");
        printf("========================================\n\n");
        printf("Available exercises:\n");
        printf("  0  - Exit Program\n");
        printf("  5  - Exercise 3_5: Shapes Calculator (Extended)\n");
        printf("  6  - Exercise 3_6: Array Operations\n");
        printf("  7  - Exercise 3_7: Number Properties\n");
        printf("  8  - Exercise 3_8: Basic Calculator\n");
        printf("  9  - Exercise 3_9: Character Counter\n\n");
        printf("========================================\n\n");

        printf("Select exercise (0, 5-9): ");
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
            case 5:
                exercise_3_5();
                break;
            case 6:
                exercise_3_6();
                break;
            case 7:
                exercise_3_7();
                break;
            case 8:
                exercise_3_8();
                break;
            case 9:
                exercise_3_9();
                break;
            default:
                printf("Invalid choice! Please select a valid number from the menu.\n");
        }

        printf("\n\n----------------------------------------\n");
        printf("Exercise completed!\n");
        printf("----------------------------------------\n");

        // Пауза, за да видиш резултата преди менюто да се презареди
        printf("\nPress Enter to return to the menu...");
        
        // Изчистване на буфера
        // (Спестяваме го, ако току що е минала задача 3_9, защото тя вече чисти буфера в себе си, 
        //  но за всеки случай оставяме тази логика. При 3_9 ще трябва да цъкнеш Enter два пъти)
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 
        
        getchar(); 
    }

    return 0;
}