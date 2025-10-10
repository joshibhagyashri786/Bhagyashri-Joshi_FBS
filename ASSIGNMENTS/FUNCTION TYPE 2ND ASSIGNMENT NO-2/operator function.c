#include <stdio.h>

// Function declaration
int calculate(int a, int b, char op);

int main() {
    int a, b, result;
    char op;

    printf("Enter two numbers and operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &a, &b, &op);

    // Function call
    result = calculate(a, b, op);

    printf("Result = %d\n", result);

    return 0;
}

// Function definition
int calculate(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '%': return a % b;
        default:
            printf("Invalid operator!\n");
            return 0;
    }
}
