#include <stdio.h>

int main() 
{
    int n, r, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int num = n;  

    while(num > 0) {
        r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }

    if(sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    return 0;
}
