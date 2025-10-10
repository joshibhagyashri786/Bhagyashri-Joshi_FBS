#include <stdio.h>

// Function declaration
void printNumbers();

int main() {
    // Function call
    printNumbers();
    return 0;
}

// Function definition
void printNumbers() {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
}
