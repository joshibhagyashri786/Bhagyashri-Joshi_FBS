#include <stdio.h>
struct Complex 
{
    int real;
    int imaginary;
};
struct Complex store();
void display(struct Complex c);

void main() {
    struct Complex c1;

    c1 = store();     
    display(c1);      
}
struct Complex store() {
    struct Complex c;

    printf("Enter real part: ");
    scanf("%d", &c.real);

    printf("Enter imaginary part: ");
    scanf("%d", &c.imaginary);

    return c;   
}

void display(struct Complex c) {
    printf("\n--- Complex Number ---\n");
    printf("%d + %di\n", c.real, c.imaginary);
}
