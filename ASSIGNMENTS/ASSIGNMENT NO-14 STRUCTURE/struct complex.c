#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void main() {
    struct Complex c;

    printf("Enter real part: ");
    scanf("%f", &c.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);

    printf("\n--- Complex Number ---\n");
    printf("%.2f + %.2fi\n", c.real, c.imaginary);
}
