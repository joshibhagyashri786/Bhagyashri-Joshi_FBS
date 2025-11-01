#include <stdio.h>

// Function declaration
void checkPalindrome(int *num);

int main() {
    int n;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    checkPalindrome(&n);

    return 0;
}

void checkPalindrome(int *num) {
    int original, reverse = 0, digit;
    int temp = *num;  

    original = *num;

    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if (original == reverse)
        printf("%d is a palindrome number.\n", *num);
    else
        printf("%d is not a palindrome number.\n", *num);
}
