#include <stdio.h>

struct Admin {
    int id;
    char name[20];
    float salary;
};

void store(struct Admin *a) {        // pass by address
    printf("Enter id, name, salary: ");
    scanf("%d %s %f", &a->id, a->name, &a->salary);
}

void display(struct Admin a) {       // pass by value
    printf("\nID: %d\nName: %s\nSalary: %.2f\n", a.id, a.name, a.salary);
}

void main() {
    struct Admin a1, a2;

    printf("Enter details of Admin 1:\n");
    store(&a1);      // pass by address

    printf("Enter details of Admin 2:\n");
    store(&a2);      

    printf("\n--- Admin Details ---\n");
    display(a1);     // pass by value
    display(a2);     
}
