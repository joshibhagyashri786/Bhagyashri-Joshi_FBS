#include <stdio.h>

void findGreatest(int arr[], int size);

int main() 
{
    int arr[3];
    int i;

    printf("Enter three numbers: ");
    for(i = 0; i < 3; i++)
        scanf("%d", &arr[i]);

    findGreatest(arr, 3);

    return 0;
}

void findGreatest(int arr[], int size) {
    int i, max = arr[0];

    for(i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("The greatest number is: %d\n", max);
}
