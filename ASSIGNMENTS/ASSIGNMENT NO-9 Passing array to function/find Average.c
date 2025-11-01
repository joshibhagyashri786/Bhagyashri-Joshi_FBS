#include <stdio.h>

void findAverage(float arr[], int size);

int main()
{
    float arr[5];
    int i;

    printf("Enter five numbers: ");
    for(i = 0; i < 5; i++)
        scanf("%f", &arr[i]);

    // Passing array to function
    findAverage(arr, 5);

    return 0;
}

void findAverage(float arr[], int size) {
    float sum = 0, avg;
    int i;

    for(i = 0; i < size; i++)
        sum += arr[i];

    avg = sum / size;

    printf("Average of five numbers = %.2f\n", avg);
}
