#include <stdio.h>

void swap(int a[])
{
    int temp;
    printf("\nBefore swapping: a[0] = %d, a[1] = %d", a[0], a[1]);

    temp = a[0];
    a[0] = a[1];
    a[1] = temp;

    printf("\nAfter swapping (inside function): a[0] = %d, a[1] = %d\n", a[0], a[1]);
}

int main() {
    int a[2];
    printf("Enter two numbers: ");
    scanf("%d %d", &a[0], &a[1]);

    swap(a);

    printf("After swapping in main: a[0] = %d, a[1] = %d\n", a[0], a[1]);
}
