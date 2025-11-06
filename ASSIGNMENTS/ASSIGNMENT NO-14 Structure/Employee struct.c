#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

void store(struct Employee *e) {     // pass by address
    printf("Enter id, name, salary: ");
    scanf("%d %s %f", &e->id, e->name, &e->salary);
}

void display(struct Employee e) {    // pass by value
    printf("\nID: %d\nName: %s\nSalary: %.2f\n", e.id, e.name, e.salary);
}

void main() {
    struct Employee e1;

    store(&e1);     // pass by address
    display(e1);    // pass by value
}
