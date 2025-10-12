#include <stdio.h>

// Function declaration
void checkTriangleType();

void main() {
    checkTriangleType();  // Function call
}

void checkTriangleType() {
    int a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("The triangle is Equilateral.\n");
    else if (a == b || b == c || a == c)
        printf("The triangle is Isosceles.\n");
    else
        printf("The triangle is Scalene.\n");
}
