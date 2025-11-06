#include <stdio.h>

struct Product {
    int id, quantity;
    char name[20];
    float price;
};

void store(struct Product *p) {        // pass by address
    printf("Enter id, name, quantity, price: ");
    scanf("%d %s %d %f", &p->id, p->name, &p->quantity, &p->price);
}

void display(struct Product p) {       // pass by value
    printf("\nID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n",
           p.id, p.name, p.quantity, p.price);
}

void main() {
    struct Product p1;

    store(&p1);     // pass by address
    display(p1);    // pass by value
}
