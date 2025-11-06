#include <stdio.h>

struct Complex {
    float real, imag;
};

void store(struct Complex *c) {        // pass by address
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &c->real, &c->imag);
}

void display(struct Complex c) {       // pass by value
    printf("\nComplex Number: %.2f + %.2fi\n", c.real, c.imag);
}

void main() {
    struct Complex c1;

    store(&c1);     // pass by address
    display(c1);    // pass by value
}
