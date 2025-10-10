#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int num1, num2, sum;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Function call
    sum = add(num1, num2);

    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
