#include <stdio.h>

// Function declaration
float findArea(float r);

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Function call
    area = findArea(radius);

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}

// Function definition
float findArea(float r) {
    const float PI = 3.14159;
    return PI * r * r;
}
