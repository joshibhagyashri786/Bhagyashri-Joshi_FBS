#include <stdio.h>

// Function declaration
void checkArmstrong();

void main() {
    checkArmstrong(); // Function call
}

// Function definition
void checkArmstrong() {
    int n, t, r, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    t = n;
    while (t != 0) {
        r = t % 10;
        sum += r * r * r;
        t /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
}
