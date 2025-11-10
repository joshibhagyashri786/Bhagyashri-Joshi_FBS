#include <stdio.h>
struct Product 
{
    int id;
    char name[50];
    int quantity;
    int price;   
};

// Function declarations
struct Product store();
void display(struct Product p);

void main() {
    struct Product p1;

    p1 = store();     
    display(p1);      
}

struct Product store() {
    struct Product p;

    printf("Enter Product ID: ");
    scanf("%d", &p.id);

    printf("Enter Product Name: ");
    scanf("%s", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price: ");
    scanf("%d", &p.price);

    return p;   
}

void display(struct Product p) {
    printf("\n--- Product Details ---\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Quantity: %d\n", p.quantity);
    printf("Price: %d\n", p.price);
}
