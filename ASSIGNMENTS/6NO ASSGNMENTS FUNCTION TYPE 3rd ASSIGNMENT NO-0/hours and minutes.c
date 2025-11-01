#include <stdio.h>

// Function declaration
void convertTime(int totalMinutes);

int main() {
    int minutes;

    printf("Enter total minutes: ");
    scanf("%d", &minutes);

    // Function call
    convertTime(minutes);

    return 0;
}

// Function definition
void convertTime(int totalMinutes) {
    int hours, remainingMinutes;

    hours = totalMinutes / 60;
    remainingMinutes = totalMinutes % 60;

    printf("%d minutes = %d hour(s) and %d minute(s)\n", totalMinutes, hours, remainingMinutes);
}
