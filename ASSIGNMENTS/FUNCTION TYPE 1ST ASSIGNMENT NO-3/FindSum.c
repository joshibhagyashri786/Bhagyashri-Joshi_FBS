#include <stdio.h>

// Function declaration
void findSum();

void main() {       
    findSum();       // Function call
}

// Function definition
void findSum() {
    int start, end, i, sum = 0;

    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        sum += i;
    }

    printf("Sum of numbers from %d to %d = %d\n", start, end, sum);
}
