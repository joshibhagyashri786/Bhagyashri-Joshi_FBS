#include <stdio.h>

int main() 
{
    int n, num, r, fact, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;  

    while(num > 0) {
        r = num % 10;     
        fact = 1;
        for(i = 1; i <= r; i++)
            fact = fact * i;  
        sum = sum + fact;
        num = num / 10;
    }

    if(sum == n)
        printf("%d is a Strong number\n", n);
    else
        printf("%d is not a Strong number\n", n);

    return 0;
}
