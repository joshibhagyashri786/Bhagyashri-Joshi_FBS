#include <stdio.h>
int main() {
    int n, r, rev = 0, t;
    printf("Enter 3-digit number: ");
    scanf("%d", &n);
    for(t = n; t; t /= 10) rev = rev * 10 + t % 10;
    printf("%d is %s palindrome.\n", n, (n == rev) ? "" : "not");
    return 0;
}

