#include <stdio.h>

// Function declaration
void swap(int *a, int *b);

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("\nAfter swapping in main: x = %d, y = %d\n", x, y);

    return 0;
}

// Function definition
void swap(int *a, int *b) {
    int temp;

    printf("\nBefore swapping (inside function): a = %d, b = %d", *a, *b);

    temp = *a;
    *a = *b;
    *b = temp;

    printf("\nAfter swapping (inside function):  a = %d, b = %d\n", *a, *b);
}
