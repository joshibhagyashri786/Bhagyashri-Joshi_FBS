#include <stdio.h>

struct SalesManager {
    int id;
    char name[20];
    float salary, incentive, target;
};

void store(struct SalesManager *s) {     // pass by address
    printf("Enter id, name, salary, incentive, target: ");
    scanf("%d %s %f %f %f", &s->id, s->name, &s->salary, &s->incentive, &s->target);
}

void display(struct SalesManager s) {    // pass by value
    printf("\nID: %d\nName: %s\nSalary: %.2f\nIncentive: %.2f\nTarget: %.2f\n",
           s.id, s.name, s.salary, s.incentive, s.target);
}

void main() {
    struct SalesManager s1;

    store(&s1);     // pass by address
    display(s1);    // pass by value
}
