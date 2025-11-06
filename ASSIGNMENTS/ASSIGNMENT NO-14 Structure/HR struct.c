#include <stdio.h>

struct HR {
    int id;
    char name[20];
    float salary, commission;
};

void store(struct HR *h) {       // pass by address
    printf("Enter id, name, salary, commission: ");
    scanf("%d %s %f %f", &h->id, h->name, &h->salary, &h->commission);
}

void display(struct HR h) {      // pass by value
    printf("\nID: %d\nName: %s\nSalary: %.2f\nCommission: %.2f\n",
           h.id, h.name, h.salary, h.commission);
}

void main() {
    struct HR h1;

    store(&h1);     // pass by address
    display(h1);    // pass by value
}
