#include <stdio.h>

int main() 
{
    int n, i, num, r, sum;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for(i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        while(num > 0) {
            r = num % 10;
            sum = sum + (r * r * r); 
            num = num / 10;
        }

        if(sum == i)
            printf("%d\n", i);
    }

    return 0;
}
