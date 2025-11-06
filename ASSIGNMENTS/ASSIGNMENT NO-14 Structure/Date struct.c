#include <stdio.h>

struct Date {
    int day, month, year;
};

void store(struct Date *d) {          // pass by address
    printf("Enter day, month, year: ");
    scanf("%d %d %d", &d->day, &d->month, &d->year);
}

void display(struct Date d) {         // pass by value
    printf("\nDate: %02d-%02d-%d\n", d.day, d.month, d.year);
}

void main() {
    struct Date d1;

    store(&d1);      // pass by address
    display(d1);     // pass by value
}
