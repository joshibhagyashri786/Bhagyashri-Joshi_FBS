#include <stdio.h>

// Function declaration
int findSum(int start, int end);

int main() {
    int start, end, sum;

    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    // Function call
    sum = findSum(start, end);

    printf("Sum of numbers from %d to %d = %d\n", start, end, sum);

    return 0;
}

// Function definition
int findSum(int start, int end) {
    int i, sum = 0;
    for (i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}
