#include <stdio.h>

void areaOfCircle(float *radius);

int main() {
    float r;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    areaOfCircle(&r);

    return 0;
}

void areaOfCircle(float *radius) {
    const float PI = 3.14159;
    float area;

    area = PI * (*radius) * (*radius);

    printf("The area of the circle is: %.2f\n", area);
}
