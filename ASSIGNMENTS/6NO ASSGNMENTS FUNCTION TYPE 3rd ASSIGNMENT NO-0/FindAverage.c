#include <stdio.h>

// Function declaration
void findAverage(float a, float b, float c, float d, float e);

int main() {
    float n1, n2, n3, n4, n5;

    printf("Enter five numbers: ");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    // Function call
    findAverage(n1, n2, n3, n4, n5);

    return 0;
}

// Function definition
void findAverage(float a, float b, float c, float d, float e) {
    float avg;

    avg = (a + b + c + d + e) / 5;

    printf("Average of five numbers = %.2f\n", avg);
}
