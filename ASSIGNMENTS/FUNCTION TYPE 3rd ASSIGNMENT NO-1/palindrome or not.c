#include <stdio.h>

// Function declaration
void checkPalindrome(int num);

int main() {
    int n;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    // Function call
    checkPalindrome(n);

    return 0;
}

// Function definition
void checkPalindrome(int num) {
    int original, reverse = 0, digit;

    original = num;

    while (num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);
}
