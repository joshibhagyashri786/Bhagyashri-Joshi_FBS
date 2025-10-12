#include <stdio.h>

// Function declaration
void isEligible();

void main() {
    // Function call
    isEligible();
}

// Function definition
void isEligible() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible");
    else
        printf("Not eligible");
}
