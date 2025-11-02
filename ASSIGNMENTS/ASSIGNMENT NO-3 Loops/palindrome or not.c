#include <stdio.h>

int main() 
{
    int n, rev = 0, r, num;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;  

    while(num > 0) {
        r = num % 10;           
        rev = rev * 10 + r;     
        num = num / 10;       
    }

    if(rev == n)
        printf("%d is a Palindrome number\n", n);
    else
        printf("%d is not a Palindrome number\n", n);

    return 0;
}
