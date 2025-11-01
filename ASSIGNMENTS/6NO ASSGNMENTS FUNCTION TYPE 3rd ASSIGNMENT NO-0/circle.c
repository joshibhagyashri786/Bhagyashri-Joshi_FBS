#include <stdio.h>

// Function declaration
void areaOfCircle(float radius);

void main() {
    float r;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    // Function call 
    areaOfCircle(r);
}

// Function definition
void areaOfCircle(float radius) {
    const float PI = 3.14159;
    float area;

    area = PI * radius * radius;

    printf("The area of the circle is: %.2f\n", area);
}
