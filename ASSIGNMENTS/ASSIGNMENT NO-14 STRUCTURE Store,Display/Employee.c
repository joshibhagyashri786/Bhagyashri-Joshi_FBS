#include <stdio.h>
struct Employee 
{
    int id;
    char name[50];
    int salary;   
};
// Function declarations
struct Employee store();
void display(struct Employee e);

void main() {
    struct Employee e1;

    e1 = store();      
    display(e1);      
}

struct Employee store() {
    struct Employee e;

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee salary: ");
    scanf("%d", &e.salary);

    return e;   
}

void display(struct Employee e) {
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %d\n", e.salary);
}
