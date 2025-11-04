#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr, i, n = 5;

    arr = (int*)malloc(n * sizeof(int));  

    printf("Enter 5 elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed array: ");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}
