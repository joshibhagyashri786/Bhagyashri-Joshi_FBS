#include <stdio.h>

// Function declaration
void factorial(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    factorial(n);

    return 0;
}

// Function definition
void factorial(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %d\n", n, fact);
}
