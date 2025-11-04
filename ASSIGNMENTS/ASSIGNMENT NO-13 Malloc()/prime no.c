#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n = 5, i, j, *a;

    a = (int*)malloc(n * sizeof(int));

    printf("Enter 5 numbers: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Prime numbers are: ");
    for(i = 0; i < n; i++) {
        for(j = 2; j < a[i]; j++)
            if(a[i] % j == 0)
                break;
        if(j == a[i] && a[i] > 1)
            printf("%d ", a[i]);
    }

    return 0;
}
