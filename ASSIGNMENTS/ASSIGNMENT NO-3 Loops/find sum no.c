#include <stdio.h>

int main() 
{
    int start, end, i, sum = 0;

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++)
        sum = sum + i;

    printf("Sum = %d\n", sum);

    return 0;
}
