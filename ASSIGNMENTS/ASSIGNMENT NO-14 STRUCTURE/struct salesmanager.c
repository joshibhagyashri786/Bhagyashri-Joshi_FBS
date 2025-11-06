#include <stdio.h>

struct SalesManager {
    int id;
    char name[50];
    float salary;
    float incentive;
    int target;
};

void main() {
    struct SalesManager sm;

    printf("Enter Sales Manager ID: ");
    scanf("%d", &sm.id);

    printf("Enter Sales Manager Name: ");
    scanf("%s", sm.name);

    printf("Enter Salary: ");
    scanf("%f", &sm.salary);

    printf("Enter Incentive: ");
    scanf("%f", &sm.incentive);

    printf("Enter Target: ");
    scanf("%d", &sm.target);

    printf("\n--- Sales Manager Details ---\n");
    printf("ID: %d\n", sm.id);
    printf("Name: %s\n", sm.name);
    printf("Salary: %.2f\n", sm.salary);
    printf("Incentive: %.2f\n", sm.incentive);
    printf("Target: %d\n", sm.target);
}
