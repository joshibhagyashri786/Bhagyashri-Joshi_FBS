#include <stdio.h>

void main() 
{
    int start, end, i;

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    printf("\nOdd numbers between %d and %d are:\n", start, end);
    for(i = start; i <= end; i++) {
        if(i % 2 != 0)
            printf("%d ", i);
    }
}
