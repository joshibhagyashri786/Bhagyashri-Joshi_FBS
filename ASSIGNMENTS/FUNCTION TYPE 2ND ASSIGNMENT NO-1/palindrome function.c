#include <stdio.h>

// Function declaration
int isPalindrome(int n);

int main() {
    int n;

    printf("Enter 3-digit number: ");
    scanf("%d", &n);

    // Function call
    if (isPalindrome(n))
        printf("%d is palindrome.\n", n);
    else
        printf("%d is not palindrome.\n", n);

    return 0;
}

// Function definition
int isPalindrome(int n) {
    int rev = 0, t;
    for (t = n; t != 0; t /= 10)
        rev = rev * 10 + t % 10;

    return (n == rev);
}
