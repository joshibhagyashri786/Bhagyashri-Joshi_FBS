#include <stdio.h>

// Function declaration
void calculate();

void main() {
    calculate();  // Function call
}

void calculate() {
    int a, b, result;
    char op;

    printf("Enter two numbers and operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &a, &b, &op);

    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/')
        result = a / b;
    else if (op == '%')
        result = a % b;
    else {
        printf("Invalid operator!\n");
        return;
    }

    printf("Result = %d\n", result);
}
