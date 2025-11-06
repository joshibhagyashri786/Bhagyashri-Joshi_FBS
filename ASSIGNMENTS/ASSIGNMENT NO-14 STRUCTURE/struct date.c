#include <stdio.h>

struct Date {
    int date;
    int month;
    int year;
};

void main() {
    struct Date d;

    printf("Enter date (dd): ");
    scanf("%d", &d.date);

    printf("Enter month (mm): ");
    scanf("%d", &d.month);

    printf("Enter year (yyyy): ");
    scanf("%d", &d.year);

    printf("\n--- Date ---\n");
    printf("%02d-%02d-%04d\n", d.date, d.month, d.year);
}
