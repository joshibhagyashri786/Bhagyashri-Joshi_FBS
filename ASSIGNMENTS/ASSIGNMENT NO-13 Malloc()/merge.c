#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr, *brr, *crr;
    int i;

    arr = (int*)malloc(5 * sizeof(int));
    brr = (int*)malloc(5 * sizeof(int));
    crr = (int*)malloc(10 * sizeof(int));

    printf("Enter 5 elements for first array:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter 5 elements for second array:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &brr[i]);

    for(i = 0; i < 5; i++)
        crr[i] = arr[i];
    for(i = 0; i < 5; i++)
        crr[i + 5] = brr[i];

    printf("\nMerged array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", crr[i]);

    return 0;
}
