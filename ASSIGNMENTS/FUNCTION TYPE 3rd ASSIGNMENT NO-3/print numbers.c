#include <stdio.h>

// Function declaration
void printNumbers(int start, int end);

int main() {
    int start = 1, end = 10;

    // Function call
    printNumbers(start, end);

    return 0;
}

// Function definition
void printNumbers(int start, int end) {
    for(int i = start; i <= end; i++) {
        printf("%d ", i);
    }
    printf("\n");
}
