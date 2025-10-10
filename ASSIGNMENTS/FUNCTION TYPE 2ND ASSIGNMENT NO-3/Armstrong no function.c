#include <stdio.h>

// Function declaration
int isArmstrong(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Function call
    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}

// Function definition
int isArmstrong(int n) {
    int t, r, sum = 0;
    t = n;

    while (t != 0) {
        r = t % 10;
        sum += r * r * r; 
        t /= 10;
    }

    if (sum == n)
        return 1;  
    else
        return 0;  
}
