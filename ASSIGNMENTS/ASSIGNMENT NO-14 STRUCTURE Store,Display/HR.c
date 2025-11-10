#include <stdio.h>
struct HR 
{
    int id;
    char name[50];
    int salary;       
    int commission;
};

// Function declarations
struct HR store();
void display(struct HR h);

void main() {
    struct HR h1;

    h1 = store();    
    display(h1);      
}
struct HR store() {
    struct HR h;

    printf("Enter HR ID: ");
    scanf("%d", &h.id);

    printf("Enter HR Name: ");
    scanf("%s", h.name);

    printf("Enter Salary: ");
    scanf("%d", &h.salary);

    printf("Enter Commission: ");
    scanf("%d", &h.commission);

    return h;   
}

void display(struct HR h) {
    printf("\n--- HR Details ---\n");
    printf("ID: %d\n", h.id);
    printf("Name: %s\n", h.name);
    printf("Salary: %d\n", h.salary);
    printf("Commission: %d\n", h.commission);
}
