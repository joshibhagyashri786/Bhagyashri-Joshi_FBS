#include <stdio.h>
void main() 
{
    int base, exp, i, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    for(i = 1; i <= exp; i++) {
        result = result * base;
    }

    printf("%d^%d = %d", base, exp, result);
}
