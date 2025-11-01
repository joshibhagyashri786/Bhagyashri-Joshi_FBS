#include <stdio.h>

// Function declaration
void checkEligibility(int age);

int main() {
    int a;

    printf("Enter your age: ");
    scanf("%d", &a);

    // Function call
    checkEligibility(a);

    return 0;
}

// Function definition
void checkEligibility(int age) {
    if (age >= 18)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote. Please wait %d more year(s).\n", 18 - age);
}
