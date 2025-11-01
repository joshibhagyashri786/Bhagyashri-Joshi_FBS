#include <stdio.h>

// Function declaration
void swap(int a, int b);

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Function call
    swap(x, y);

    return 0;
}

// Function definition
void swap(int a, int b) {
    int temp;

    printf("\nBefore swapping: a = %d, b = %d", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:  a = %d, b = %d\n", a, b);
}
