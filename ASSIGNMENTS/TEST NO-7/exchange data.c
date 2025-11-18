#include <stdio.h>

void swapXY(int arr[], int x, int y) 
{
    int temp;
    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int main() {
    int arr[7] = {11, 23, 30, 4, 21, 45, 50};
    int x, y, i;

    printf("Enter Xth position: ");
    scanf("%d", &x);

    printf("Enter Yth position: ");
    scanf("%d", &y);

    x--;
    y--;

    swapXY(arr, x, y);

    printf("\nArray after swapping:\n");
    for (i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
