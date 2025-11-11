#include <stdio.h>

void main() 
{
    int start, end, i, sum = 0;

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i += 2) { 
        sum += i;
    }

    printf("Sum = %d", sum);
}
