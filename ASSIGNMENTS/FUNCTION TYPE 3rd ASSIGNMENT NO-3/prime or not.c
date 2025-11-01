#include <stdio.h>

// Function declaration
void checkPrime(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Function call
    checkPrime(n);

    return 0;
}

// Function definition
void checkPrime(int n) {
    if(n <= 1) {
        printf("%d is not a prime number.\n", n);
        return;
    }

    int isPrime = 1; 
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            isPrime = 0; 
            break;
        }
    }

    if(isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}
