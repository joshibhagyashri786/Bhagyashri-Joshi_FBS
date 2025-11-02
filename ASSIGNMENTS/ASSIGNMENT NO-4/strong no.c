#include <stdio.h>

int main() 
{
    int n, i, num, r, fact, j, sum;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d are:\n", n);

    for(i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        while(num > 0) {
            r = num % 10;

            fact = 1;
            for(j = 1; j <= r; j++)
                fact = fact * j;  

            sum = sum + fact;
            num = num / 10;
        }

        if(sum == i)
            printf("%d\n", i);
    }

    return 0;
}
