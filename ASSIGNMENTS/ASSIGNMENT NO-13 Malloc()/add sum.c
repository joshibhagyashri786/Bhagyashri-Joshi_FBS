#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr, *brr, *crr;
    int i;

    arr = malloc(5 * sizeof(int));
    brr = malloc(5 * sizeof(int));
    crr = malloc(5 * sizeof(int));

    printf("Enter 5 numbers for first array:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter 5 numbers for second array:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &brr[i]);

    printf("Sum of both arrays:\n");
    for(i = 0; i < 5; i++) {
        crr[i] = arr[i] + brr[i];
        printf("%d ", crr[i]);
    }

    return 0;
}
