#include <stdio.h>

void squareAndCube(int arr[], int n)
{
    for(int i=0;i<n;i++)
        printf("Square of %d = %d\nCube of %d = %d\n\n",
               arr[i], arr[i]*arr[i], arr[i], arr[i]*arr[i]*arr[i]);
}

int main() {
    int arr[3], i;
    printf("Enter 3 numbers: ");
    for(i=0;i<3;i++)
        scanf("%d",&arr[i]);
    squareAndCube(arr,3);
}
