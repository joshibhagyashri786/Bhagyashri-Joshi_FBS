#include <stdio.h>

// Function declaration
void printTable();

void main() {       
    printTable();   // Function call
}

// Function definition
void printTable() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }
    printf("\n");
}
