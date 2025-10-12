#include <stdio.h>

// Function declaration
void findAverage();

void main() {
    // Function call
    findAverage();
}

void findAverage() {
    float a, b, c, d, e, average;

    printf("Enter five numbers: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    average = (a + b + c + d + e) / 5;

    printf("Average = %.2f\n", average);
}
