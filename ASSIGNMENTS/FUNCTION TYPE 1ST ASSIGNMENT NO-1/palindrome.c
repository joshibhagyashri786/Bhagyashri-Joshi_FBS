#include <stdio.h>

// Function declaration
void isPalindrome();

void main() {
    // Function call
    isPalindrome();
}

// Function definition
void isPalindrome() {
    int n, rev = 0, t;

    printf("Enter 3-digit number: ");
    scanf("%d", &n);

    t = n;
    while (t != 0) {
        rev = rev * 10 + t % 10;
        t /= 10;
    }

    if (n == rev)
        printf("%d is palindrome.\n", n);
    else
        printf("%d is not palindrome.\n", n);
}
