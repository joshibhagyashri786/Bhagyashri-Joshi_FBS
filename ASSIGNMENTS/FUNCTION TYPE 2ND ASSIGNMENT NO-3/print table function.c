#include <stdio.h>

// Function declaration
void printTable(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Function call
    printTable(n);

    return 0;
}

// Function definition
void printTable(int n) {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }
    printf("\n");
}
