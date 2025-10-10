#include <stdio.h>

int main() {
    float l, w;
    printf("Enter length and width: ");
    scanf("%f %f", &l, &w);
    printf("Perimeter = %.2f\n", 2 * (l + w));
    return 0;
}

