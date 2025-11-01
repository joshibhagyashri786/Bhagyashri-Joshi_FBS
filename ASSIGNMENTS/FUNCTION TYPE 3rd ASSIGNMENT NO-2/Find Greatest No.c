#include <stdio.h>

// Function declaration
void findGreatest(int a, int b, int c);

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    findGreatest(num1, num2, num3);

    return 0;
}

// Function definition
void findGreatest(int a, int b, int c) {
    if (a > b) {
        if (a > c) {
            printf("The greatest number is: %d\n", a);
        } else {
            printf("The greatest number is: %d\n", c);
        }
    } else {
        if (b > c) {
            printf("The greatest number is: %d\n", b);
        } else {
            printf("The greatest number is: %d\n", c);
        }
    }
}
