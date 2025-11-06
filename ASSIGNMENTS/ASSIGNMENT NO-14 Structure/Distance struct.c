#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

void store(struct Distance *d) {        // pass by address
    printf("Enter feet and inches: ");
    scanf("%d %f", &d->feet, &d->inch);
}

void display(struct Distance d) {       // pass by value
    printf("\nDistance: %d feet %.2f inches\n", d.feet, d.inch);
}

void main() {
    struct Distance d1;

    store(&d1);     // pass by address
    display(d1);    // pass by value
}
