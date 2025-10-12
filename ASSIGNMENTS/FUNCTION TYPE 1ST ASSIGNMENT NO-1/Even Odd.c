#include <stdio.h>

// Function declaration
void isEven();

void main() {
    // Function call
    isEven();
}

// Function definition
void isEven() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is even.\n", n);
    else
        printf("%d is odd.\n", n);
}
