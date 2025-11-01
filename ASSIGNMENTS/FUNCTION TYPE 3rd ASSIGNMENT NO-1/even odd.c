#include <stdio.h>

// Function declaration
void checkEvenOdd(int num);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Function call
    checkEvenOdd(n);

    return 0;
}

// Function definition
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);
}
