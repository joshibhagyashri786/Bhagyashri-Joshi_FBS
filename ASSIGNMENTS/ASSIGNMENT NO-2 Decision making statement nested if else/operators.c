#include <stdio.h>

int main() 
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    printf("Enter second number: ");
    scanf("%d", &b);

    if (op == '+')
        printf("Result = %d\n", a + b);
    else if (op == '-')
        printf("Result = %d\n", a - b);
    else if (op == '*')
        printf("Result = %d\n", a * b);
    else if (op == '/')
        printf("Result = %d\n", a / b);
    else if (op == '%')
        printf("Result = %d\n", a % b);
    else
        printf("Invalid operator\n");

    return 0;
}
