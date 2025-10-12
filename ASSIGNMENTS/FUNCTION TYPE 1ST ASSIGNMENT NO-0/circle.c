#include <stdio.h>

// Function declaration
void areaOfCircle();

void main() {
    areaOfCircle();  // Function call
}

// Function definition
void areaOfCircle() {
    float radius, area;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("The area of the circle is: %.2f\n", area);
}
