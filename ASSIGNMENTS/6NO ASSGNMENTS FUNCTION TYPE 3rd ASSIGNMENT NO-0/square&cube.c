#include <stdio.h>

// Function declaration
void squareAndCube(int num);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Function call
    squareAndCube(n);

    return 0;
}

// Function definition
void squareAndCube(int num) {
    int square, cube;

    square = num * num;
    cube = num * num * num;

    printf("Square of %d = %d\n", num, square);
    printf("Cube of %d = %d\n", num, cube);
}
