#include <stdio.h>

// Function declaration
float findAverage(float n1, float n2, float n3, float n4, float n5);

int main() {
    float a, b, c, d, e, average;

    printf("Enter five numbers: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    // Function call
    average = findAverage(a, b, c, d, e);

    printf("Average = %.2f\n", average);

    return 0;
}

// Function definition
float findAverage(float n1, float n2, float n3, float n4, float n5) {
    return (n1 + n2 + n3 + n4 + n5) / 5;
}
