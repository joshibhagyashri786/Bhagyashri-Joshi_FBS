#include <stdio.h>
struct SalesManager 
{
    int id;
    char name[50];
    int salary;      
    int incentive;   
    int target;
};

// Function declarations
struct SalesManager store();
void display(struct SalesManager sm);

void main() {
    struct SalesManager sm1;

    sm1 = store();      
    display(sm1);       
}

struct SalesManager store() {
    struct SalesManager sm;

    printf("Enter Sales Manager ID: ");
    scanf("%d", &sm.id);

    printf("Enter Sales Manager Name: ");
    scanf("%s", sm.name);

    printf("Enter Salary: ");
    scanf("%d", &sm.salary);

    printf("Enter Incentive: ");
    scanf("%d", &sm.incentive);

    printf("Enter Target: ");
    scanf("%d", &sm.target);

    return sm;   
}

void display(struct SalesManager sm) {
    printf("\n--- Sales Manager Details ---\n");
    printf("ID: %d\n", sm.id);
    printf("Name: %s\n", sm.name);
    printf("Salary: %d\n", sm.salary);
    printf("Incentive: %d\n", sm.incentive);
    printf("Target: %d\n", sm.target);
}
