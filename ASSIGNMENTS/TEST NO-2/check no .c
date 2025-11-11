#include <stdio.h>

void main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("The number is Positive.\n");
    else if (num < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Neutral (Zero).\n");
}
