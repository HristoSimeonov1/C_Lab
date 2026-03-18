#include <stdio.h>

double squareArea(double side){
    return side * side;
}

double rectangleArea(double length, double width){
    return length * width;
}

double triangleArea(double base, double height){
    return (base * height) / 2;
}

double circleArea(double radius){
    return 3.14 * radius * radius;
}

int main(){

    int choice = 0;
    double a;
    double b;

    printf("Choose a shape to calculate its area:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Circle\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Enter the side length of the square: ");
            scanf("%lf", &a);
            printf("The area of the square is: %.2lf\n", squareArea(a));
            break;
        
        case 2:
            printf("Enter the length and width of the rectangle: ");
            scanf("%lf %lf", &a, &b);
            printf("The area of the rectangle is: %.2lf\n", rectangleArea(a, b));
            break;
        
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%lf %lf", &a, &b);
            printf("The area of the triangle is: %.2lf\n", triangleArea(a, b));
            break;
        
        case 4:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &a);
            printf("The area of the circle is: %.2lf\n", circleArea(a));
            break;
        
        default:
            printf("Invalid choice");
    }

    return 0;
}