#include <stdio.h>

// Function declaration
void sumOfRange(int start, int end);

int main() {
    int start, end;

    printf("Enter start value: ");
    scanf("%d", &start);

    printf("Enter end value: ");
    scanf("%d", &end);

    // Function call
    sumOfRange(start, end);

    return 0;
}

// Function definition
void sumOfRange(int start, int end) {
    int sum = 0;
    for(int i = start; i <= end; i++) {
        sum += i;
    }
    printf("Sum of numbers from %d to %d = %d\n", start, end, sum);
}
