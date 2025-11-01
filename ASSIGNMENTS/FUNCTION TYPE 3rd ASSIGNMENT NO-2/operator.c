#include <stdio.h>

// Function declaration
void calculate(int num1, int num2, char op);

int main() {
    int a, b;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, %%): ");
    scanf(" %c", &operator);  

    calculate(a, b, operator);

    return 0;
}

// Function definition
void calculate(int num1, int num2, char op) {
    switch(op) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '%':
            if(num2 != 0)
                printf("Result: %d\n", num1 % num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
}
