#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

void main() {
    struct Distance d;

    printf("Enter feet: ");
    scanf("%d", &d.feet);

    printf("Enter inches: ");
    scanf("%f", &d.inch);

    printf("\n--- Distance ---\n");
    printf("%d feet %.2f inches\n", d.feet, d.inch);
}
