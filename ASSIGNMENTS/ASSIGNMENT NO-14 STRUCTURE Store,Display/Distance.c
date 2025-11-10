#include <stdio.h>
struct Distance
{
    int feet;
    int inch;   
};

// Function declarations
struct Distance store();
void display(struct Distance d);

void main() {
    struct Distance d1;

    d1 = store();     
    display(d1);      
}
struct Distance store() {
    struct Distance d;

    printf("Enter feet: ");
    scanf("%d", &d.feet);

    printf("Enter inches: ");
    scanf("%d", &d.inch);

    return d;   
}
void display(struct Distance d) {
    printf("\n--- Distance ---\n");
    printf("%d feet %d inches\n", d.feet, d.inch);
}
