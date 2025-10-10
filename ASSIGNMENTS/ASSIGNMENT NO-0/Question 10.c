#include <stdio.h>
int main() {
    float a, b, c, d, e, total, percent;
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    total = a + b + c + d + e;
    percent = total / 5;
    printf("Total=%.2f\nPercentage=%.2f%%", total, percent);
}

