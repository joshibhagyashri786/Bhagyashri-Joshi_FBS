#include <stdio.h>
struct Admin
{
    int id;
    char name[50];
    int salary;
    int allowance;
};

struct Admin store();
void display(struct Admin a);

void main() {
    struct Admin a1;
    
    a1 = store();   
    display(a1);    
}

struct Admin store() {
    struct Admin a;
    
    printf("Enter Admin ID: ");
    scanf("%d", &a.id);

    printf("Enter Admin Name: ");
    scanf("%s", a.name);

    printf("Enter Salary: ");
    scanf("%d", &a.salary);

    printf("Enter Allowance: ");
    scanf("%d", &a.allowance);

    return a;   
}

void display(struct Admin a) {
    printf("\n--- Admin Details ---\n");
    printf("ID: %d\n", a.id);
    printf("Name: %s\n", a.name);
    printf("Salary: %d\n", a.salary);
    printf("Allowance: %d\n", a.allowance);
}
