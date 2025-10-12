#include <stdio.h>

void printStrong();   // function declaration

void main()
{
    printStrong();    // function call
}

void printStrong()    // function definition
{
    int n, num, temp, rem, i, fact, sum; 

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d are:\n", n);

    for (num = 1; num <= n; num++)
    {
        temp = num;
        sum = 0;

        while (temp != 0)
        {
            rem = temp % 10;

            fact = 1;
            for (i = 1; i <= rem; i++)
                fact = fact * i; 

            sum += fact;
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }
}
