#include <stdio.h>
int main()
 {
    int n, i, min, max, arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    min = max = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }

    printf("Min = %d\nMax = %d", min, max);
    return 0;
}
