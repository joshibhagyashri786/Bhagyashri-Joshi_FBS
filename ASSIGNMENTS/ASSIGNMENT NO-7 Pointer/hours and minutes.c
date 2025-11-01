#include <stdio.h>

void convertTime(int *totalMinutes);

int main() {
    int minutes;

    printf("Enter total minutes: ");
    scanf("%d", &minutes);

    convertTime(&minutes);

    return 0;
}

void convertTime(int *totalMinutes) {
    int hours, remainingMinutes;

    hours = (*totalMinutes) / 60;
    remainingMinutes = (*totalMinutes) % 60;

    printf("%d minutes = %d hour(s) and %d minute(s)\n", *totalMinutes, hours, remainingMinutes);
}
