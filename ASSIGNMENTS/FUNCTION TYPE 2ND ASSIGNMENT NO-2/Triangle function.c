#include <stdio.h>

// Function declaration
void checkTriangleType(int a, int b, int c);

int main() {
    int a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Function call
    checkTriangleType(a, b, c);

    return 0;
}

// Function definition
void checkTriangleType(int a, int b, int c) {
    if (a == b && b == c)
        printf("The triangle is Equilateral.\n");
    else if (a == b || b == c || a == c)
        printf("The triangle is Isosceles.\n");
    else
        printf("The triangle is Scalene.\n");
}
