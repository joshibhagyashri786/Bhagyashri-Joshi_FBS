#include <stdio.h>

// Function declaration
int isEligible(int age);

int main() {
    int a;

    printf("Enter age: ");
    scanf("%d", &a);

    // Function call
    if (isEligible(a))
        printf("Eligible");
    else
        printf("Not eligible");

    return 0;
}

// Function definition
int isEligible(int age) {
    if (age >= 18)
        return 1;   // Eligible
    else
        return 0;   // Not eligible
}
1