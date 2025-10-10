#include <stdio.h>

// Function declaration
int isLeapYear(int year);

int main() {
    int y;

    printf("Enter year: ");
    scanf("%d", &y);

    // Function call
    if (isLeapYear(y))
        printf("%d is a leap year.\n", y);
    else
        printf("%d is not a leap year.\n", y);

    return 0;
}

// Function definition
int isLeapYear(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;  // Leap year
    else
        return 0;  // Not a leap year
}
2