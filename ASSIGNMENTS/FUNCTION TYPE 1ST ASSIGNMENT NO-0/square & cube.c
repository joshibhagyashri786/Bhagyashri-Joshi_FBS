#include <stdio.h>

// Function declaration
void squareCube();

void main() {
    // Function call
    squareCube();
}

void squareCube() {
    int n, square, cube;

    printf("Enter a number: ");
    scanf("%d", &n);

    square = n * n;
    cube = n * n * n;

    printf("Square = %d\n", square);
    printf("Cube = %d\n", cube);
}
