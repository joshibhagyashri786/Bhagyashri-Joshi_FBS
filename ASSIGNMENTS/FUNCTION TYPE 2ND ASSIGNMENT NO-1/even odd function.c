#include <stdio.h>

// Function declaration
int isEven(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Function call
    if (isEven(n))
        printf("%d is even.\n", n);
    else
        printf("%d is odd.\n", n);

    return 0;
}

// Function definition
int isEven(int n) {
    return (n % 2 == 0);
}
