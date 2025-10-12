#include <stdio.h>

// Function declaration
void printNumbers();

void main() {      
    printNumbers(); // Function call
}

// Function definition
void printNumbers() {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
}
