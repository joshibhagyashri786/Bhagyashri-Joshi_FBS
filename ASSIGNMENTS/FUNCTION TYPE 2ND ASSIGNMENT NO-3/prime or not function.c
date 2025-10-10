#include <stdio.h>

// Function declaration
int isPrime(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Function call
    if (isPrime(n))
        printf("%d is prime.\n", n);
    else
        printf("%d is not prime.\n", n);

    return 0;
}

// Function definition
int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0; // Not prime

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}
