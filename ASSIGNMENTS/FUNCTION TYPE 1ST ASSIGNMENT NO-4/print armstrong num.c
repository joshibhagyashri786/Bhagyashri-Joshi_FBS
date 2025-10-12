#include <stdio.h>

void printArmstrong();   // function declaration

void main()
{
    printArmstrong();    // function call
}

void printArmstrong()    // function definition
{
    int n, num, temp, rem, digits, i, mul;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for (num = 1; num <= n; num++)
    {
        temp = num;
        digits = 0;

        while (temp != 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;
        int sum = 0;

        while (temp != 0)
        {
            rem = temp % 10;
            mul = 1;

            for (i = 1; i <= digits; i++)
                mul = mul * rem;   

            sum = sum + mul;
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }
}
