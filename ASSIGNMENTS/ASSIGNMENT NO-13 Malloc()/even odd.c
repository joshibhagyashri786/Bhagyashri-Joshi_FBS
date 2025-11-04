#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *a;
    int i;
    
    a = malloc(5 * sizeof(int));

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("\nEven and Odd numbers:\n");
    for(i = 0; i < 5; i++) {
        if(a[i] % 2 == 0)
            printf("%d even\n", a[i]);
        else
            printf("%d odd\n", a[i]);
    }

    return 0;
}
