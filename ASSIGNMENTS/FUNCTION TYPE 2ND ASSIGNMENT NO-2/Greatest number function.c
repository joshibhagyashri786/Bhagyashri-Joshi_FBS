#include <stdio.h>

// Function declaration
int findGreatest(int a, int b, int c);

int main() {
    int a, b, c, greatest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Function call
    greatest = findGreatest(a, b, c);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}

// Function definition using nested if-else
int findGreatest(int a, int b, int c) {
    if (a > b) {
        if (a > c)
            return a;
        else
            return c;
    } else {
        if (b > c)
            return b;
        else
            return c;
    }
}
