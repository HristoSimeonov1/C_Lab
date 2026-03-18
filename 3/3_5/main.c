#include <stdio.h>
#define PI 3.14

double squareArea(double a) { return a * a; }
double squarePerimeter(double a) { return 4 * a; }

double rectangleArea(double a, double b) { return a * b; }
double rectanglePerimeter(double a, double b) { return 2 * (a + b); }

double triangleArea(double a, double b) { return a * b / 2; }

double circleArea(double r) { return PI * r * r; }
double circlePerimeter(double r) { return 2 * PI * r; }

double trapezoidArea(double a, double b, double h) {
    return (a + b) * h / 2;
}
double trapezoidPerimeter(double a, double b, double c, double d) {
    return a + b + c + d;
}

int main() {
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
        scanf("%lf", &a);
        printf("Area=%.2lf Perimeter=%.2lf\n", squareArea(a), squarePerimeter(a));
    }
    else if(choice == 2){
        scanf("%lf %lf", &a, &b);
        printf("Area=%.2lf Perimeter=%.2lf\n", rectangleArea(a,b), rectanglePerimeter(a,b));
    }
    else if(choice == 3){
        scanf("%lf %lf", &a, &b);
        printf("Area=%.2lf\n", triangleArea(a,b));
    }
    else if(choice == 4){
        scanf("%lf", &r);
        printf("Area=%.2lf Perimeter=%.2lf\n", circleArea(r), circlePerimeter(r));
    }
    else if(choice == 5){
        printf("Enter bases a b and height h: ");
        scanf("%lf %lf %lf", &a, &b, &h);
        printf("Enter sides c d: ");
        scanf("%lf %lf", &c, &d);

        printf("Area=%.2lf Perimeter=%.2lf\n",
               trapezoidArea(a,b,h),
               trapezoidPerimeter(a,b,c,d));
    }

    return 0;
}