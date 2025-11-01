#include <stdio.h>

// Function declaration
void checkLeapYear(int *year);

int main() {
    int y;

    printf("Enter a year: ");
    scanf("%d", &y);
    
    checkLeapYear(&y);

    return 0;
}

// Function definition
void checkLeapYear(int *year) {
    if ((*year % 400 == 0) || (*year % 4 == 0 && *year % 100 != 0))
        printf("%d is a leap year.\n", *year);
    else
        printf("%d is not a leap year.\n", *year);
}
