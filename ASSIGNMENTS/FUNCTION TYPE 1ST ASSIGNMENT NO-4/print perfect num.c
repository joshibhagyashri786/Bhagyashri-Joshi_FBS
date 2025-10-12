#include <stdio.h>

void printPerfect();   // function declaration

void main()
{
    printPerfect();    // function call
}

void printPerfect()    // function definition
{
    int n, i, j, sum;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Perfect numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++)
    {
        sum = 0;

        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
                sum += j;
        }

        if (sum == i)
            printf("%d ", i);
    }
}
