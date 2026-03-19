#include <stdio.h>

// --- Декларации на основните функции за задачите ---
void exercise_4_1(void);
void exercise_4_2(void);
void exercise_4_3(void);
void exercise_4_4(void);
void exercise_4_5(void);
void exercise_4_6(void);
void exercise_4_7(void);
void exercise_4_8(void);
void exercise_4_9(void);
void exercise_4_10(void);
void exercise_4_11(void);
void exercise_4_12(void);

// --- Помощни функции ---
int bigger(int a, int b);
int smaller(int a, int b);


// ==========================================
// Логика за Задача 4_1
// ==========================================
int bigger(int a, int b){
    return (a > b) ? a : b;
}

int smaller(int a, int b){
    return (a < b) ? a : b;
}

void exercise_4_1(void) {
    int num;
    
    printf("Enter numbers (0 to stop): ");
    scanf("%d", &num);

    if(num == 0){
        printf("No numbers entered.\n");
        return; // Използваме просто return вместо return 0, за да не крашне менюто
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
}

// ==========================================
// Логика за Задача 4_2
// ==========================================
void exercise_4_2(void) {
    int hours, minutes;
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);

    if(hours < 0 || hours > 23 || minutes < 0 || minutes > 59){
        printf("Invalid time entered.\n");
        return;
    }
    else{
        printf("The time in 15 minutes will be: %02d:%02d\n", 
               (hours + (minutes + 15) / 60) % 24, 
               (minutes + 15) % 60);
    }
}

// ==========================================
// Логика за Задача 4_3
// ==========================================
void exercise_4_3(void) {
    int num1, num2, num3;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Enter number 3: ");
    scanf("%d", &num3);

    if(num1 == num2 || num1 == num3 || num2 == num3){
        printf("Some numbers are equal.\n");
    } else {
        printf("All numbers are different.\n");
    }
}

// ==========================================
// Логика за Задача 4_4
// ==========================================
void exercise_4_4(void) {
    int points;
    double bonus = 0;

    printf("Enter points: ");
    scanf("%d", &points);

    if(points <= 100){
        bonus = 5;
    } else if(points <= 1000){
        bonus = 0.2 * points;
    } else {
        bonus = 0.1 * points;
    }

    if(points % 2 == 0){
        bonus += 1;
    }

    if(points % 10 == 5){
        bonus += 2;
    }

    printf("Bonus points: %.0lf\n", bonus);
    printf("Total points: %.0lf\n", points + bonus);
}

// ==========================================
// Логика за Задача 4_5
// ==========================================
void exercise_4_5(void) {
    int seconds1, seconds2, seconds3;

    printf("Enter seconds for time 1: ");
    scanf("%d", &seconds1);

    printf("Enter seconds for time 2: ");
    scanf("%d", &seconds2);

    printf("Enter seconds for time 3: ");
    scanf("%d", &seconds3);

    int total = seconds1 + seconds2 + seconds3;

    int minutes = total / 60;
    int seconds = total % 60;

    printf("Total time: %d:%02d\n", minutes, seconds);
}

// ==========================================
// Логика за Задача 4_6
// ==========================================
void exercise_4_6(void) {
    double x1, y1, x2, y2, x, y;

    printf("Enter x1: ");
    scanf("%lf", &x1);

    printf("Enter y1: ");
    scanf("%lf", &y1);

    printf("Enter x2: ");
    scanf("%lf", &x2);

    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter y: ");
    scanf("%lf", &y);

    if(x >= x1 && x <= x2 && y >= y1 && y <= y2){
        printf("Inside\n");
    } else {
        printf("Outside\n");
    }
}

// ==========================================
// Логика за Задача 4_7
// ==========================================
void exercise_4_7(void) {
    double n;
    char time;

    printf("Enter distance in km: ");
    scanf("%lf", &n);
    printf("Enter time (D for day, N for night): ");
    scanf(" %c", &time);

    double taxi;

    if(time == 'D' || time == 'd'){
        taxi = 0.70 + 0.79 * n;
    } else {
        taxi = 0.70 + 0.90 * n;
    }

    double min = taxi;
    char transport[] = "Taxi "; // Добавен малък буфер за безопасност със sprintf

    if(n >= 20){
        double bus = 0.09 * n;
        if(bus < min){
            min = bus;
            sprintf(transport, "Bus");
        }
    }

    if(n >= 100){
        double train = 0.06 * n;
        if(train < min){
            min = train;
            sprintf(transport, "Train");
        }
    }

    printf("%s %.2lf\n", transport, min);
}

// ==========================================
// Логика за Задача 4_8
// ==========================================
void exercise_4_8(void) {
    int V, P1, P2;
    float N;

    printf("Pool volume (in cubic meters): ");
    scanf("%d", &V);
    printf("Pipe 1 flow rate (liters per hour): ");
    scanf("%d", &P1);
    printf("Pipe 2 flow rate (liters per hour): ");
    scanf("%d", &P2);
    printf("Hours the worker is absent: ");
    scanf("%f", &N);

    float volume_in_liters = V * 1000.0; 
    float water_p1 = P1 * N;
    float water_p2 = P2 * N;
    float total_water = water_p1 + water_p2;

    if (total_water <= volume_in_liters) {
        float percent_full = (total_water / volume_in_liters) * 100;
        float percent_p1 = (water_p1 / total_water) * 100;
        float percent_p2 = (water_p2 / total_water) * 100;

        printf("The pool is %.2f%% full.\n", percent_full);
        printf("Pipe 1 filled %.2f%% and Pipe 2 filled %.2f%% of the water.\n", percent_p1, percent_p2);
    } else {
        float overflow = total_water - volume_in_liters;
        printf("For %.2f hours the pool overflowed with %.2f liters of water.\n", N, overflow);
    }
}

// ==========================================
// Логика за Задача 4_9
// ==========================================
void exercise_4_9(void) {
    float X, Y, Z;
    int workers;

    printf("Vineyard area (sq meters): ");
    scanf("%f", &X);
    printf("Grapes per sq meter (kg): ");
    scanf("%f", &Y);
    printf("Desired wine (liters): ");
    scanf("%f", &Z);
    printf("Number of workers: ");
    scanf("%d", &workers);

    float total_grapes = X * Y;
    float grapes_for_wine = total_grapes * 0.40;
    float produced_wine = grapes_for_wine / 2.5;

    if (produced_wine >= Z) {
        float left_wine = produced_wine - Z;
        float wine_per_worker = left_wine / workers;

        printf("Produced %.2f liters of wine.\n", produced_wine);
        printf("%.2f liters left -> %.2f liters per worker.\n", left_wine, wine_per_worker);
    } else {
        float needed_wine = Z - produced_wine;
        printf("%.2f more liters of wine needed.\n", needed_wine);
    }
}

// ==========================================
// Логика за Задача 4_10
// ==========================================
void exercise_4_10(void) {
    int n;
    printf("Enter the amount of numbers to input: ");
    scanf("%d", &n);

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;

    printf("Enter %d numbers: ", n);
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

    if (n > 0) {
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
    } else {
        printf("No numbers to process.\n");
    }
}

// ==========================================
// Логика за Задача 4_11
// ==========================================
void exercise_4_11(void) {
    int n;
    printf("Enter a number n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("/\\\n");
        return; // Използваме return вместо return 0
    } 
    
    if (n == 2) {
        printf("/\\/\\\n");
        printf("\\/\\/\n");
        return;
    }

    int col_size = n / 2;
    int mid_size = 2 * n - 2 * col_size - 4;

    printf("/");
    for (int i = 0; i < col_size; i++) printf("^");
    printf("\\");
    for (int i = 0; i < mid_size; i++) printf("_");
    printf("/");
    for (int i = 0; i < col_size; i++) printf("^");
    printf("\\\n");

    for (int row = 2; row <= n - 2; row++) {
        printf("|");
        for (int i = 0; i < 2 * n - 2; i++) printf(" ");
        printf("|\n");
    }

    if (n > 2) {
        printf("|");
        for (int i = 0; i < col_size + 1; i++) printf(" ");
        for (int i = 0; i < mid_size; i++) printf("_");
        for (int i = 0; i < col_size + 1; i++) printf(" ");
        printf("|\n");
    }

    printf("\\");
    for (int i = 0; i < col_size; i++) printf("_");
    printf("/");
    for (int i = 0; i < mid_size; i++) printf(" ");
    printf("\\");
    for (int i = 0; i < col_size; i++) printf("_");
    printf("/\n");
}

// ==========================================
// Логика за Задача 4_12
// ==========================================
void exercise_4_12(void) {
    int n;
    printf("Enter a number n: ");
    scanf("%d", &n);

    int half_rows = n - 2;

    for (int i = 0; i < half_rows; i++) {
        char c = (i % 2 == 0) ? '*' : '-';
        for (int j = 0; j < half_rows; j++) {
            printf("%c", c);
        }
        printf("\\ /");
        for (int j = 0; j < half_rows; j++) {
            printf("%c", c);
        }
        printf("\n");
    }

    for (int i = 0; i < n - 1; i++) {
        printf(" ");
    }
    printf("@\n");

    for (int i = 0; i < half_rows; i++) {
        char c = (i % 2 == 0) ? '*' : '-';
        for (int j = 0; j < half_rows; j++) {
            printf("%c", c);
        }
        printf("/ \\");
        for (int j = 0; j < half_rows; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}


// ==========================================
// ГЛАВНА ФУНКЦИЯ И МЕНЮ
// ==========================================
int main(void) {
    int choice = 0;

    // Безкраен цикъл за задържане на менюто активно
    while (1) {
        printf("\n========================================\n");
        printf("    TU_LU Exercise Selector (4_1 - 4_12)\n");
        printf("========================================\n\n");
        printf("Available exercises:\n");
        printf("  0  - Exit Program\n");
        printf("  1  - Exercise 4_1: Max and Min numbers\n");
        printf("  2  - Exercise 4_2: Time + 15 minutes\n");
        printf("  3  - Exercise 4_3: Compare 3 numbers\n");
        printf("  4  - Exercise 4_4: Bonus points\n");
        printf("  5  - Exercise 4_5: Sum seconds\n");
        printf("  6  - Exercise 4_6: Point in rectangle\n");
        printf("  7  - Exercise 4_7: Transport cost\n");
        printf("  8  - Exercise 4_8: Pool pipes overflow\n");
        printf("  9  - Exercise 4_9: Vineyard wine\n");
        printf(" 10  - Exercise 4_10: Numbers histogram\n");
        printf(" 11  - Exercise 4_11: ASCII Art (Fortress)\n");
        printf(" 12  - Exercise 4_12: ASCII Art (Butterfly)\n\n");
        printf("========================================\n\n");

        printf("Select exercise (0-12): ");
        if (scanf("%d", &choice) != 1) {
            // Ако потребителят въведе буква вместо число, изчистваме буфера
            while (getchar() != '\n');
            printf("Invalid input! Please enter a number.\n");
            continue;
        }

        if (choice == 0) {
            printf("\nExiting program. Goodbye!\n");
            break; 
        }

        printf("\n----------------------------------------\n");
        printf("Running Exercise 4_%d\n", choice);
        printf("----------------------------------------\n\n");

        switch(choice) {
            case 1:  exercise_4_1(); break;
            case 2:  exercise_4_2(); break;
            case 3:  exercise_4_3(); break;
            case 4:  exercise_4_4(); break;
            case 5:  exercise_4_5(); break;
            case 6:  exercise_4_6(); break;
            case 7:  exercise_4_7(); break;
            case 8:  exercise_4_8(); break;
            case 9:  exercise_4_9(); break;
            case 10: exercise_4_10(); break;
            case 11: exercise_4_11(); break;
            case 12: exercise_4_12(); break;
            default:
                printf("Invalid choice! Please select a valid number from the menu.\n");
        }

        printf("\n\n----------------------------------------\n");
        printf("Exercise completed!\n");
        printf("----------------------------------------\n");

        // Пауза, за да видиш резултата преди менюто да се презареди
        printf("\nPress Enter to return to the menu...");
        
        // Изчистване на буфера
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 
        
        // Изчакване на натискане на Enter
        getchar(); 
    }

    return 0;
}