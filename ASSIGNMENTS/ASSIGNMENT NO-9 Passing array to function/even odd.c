#include <stdio.h>

void checkEvenOdd(int arr[], int size);

int main() 
{
    int arr[5], i;

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    checkEvenOdd(arr, 5);

    return 0;
}

void checkEvenOdd(int arr[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        if(arr[i] % 2 == 0)
            printf("%d is even\n", arr[i]);
        else
            printf("%d is odd\n", arr[i]);
    }
}
