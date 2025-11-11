#include <stdio.h>
void main() 
{
    int start, end, i, j;

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++) {
        printf("\nFactors of %d: ", i);
        for(j = 1; j <= i; j++) {
            if(i % j == 0)
                printf("%d ", j);
        }
    }
}
