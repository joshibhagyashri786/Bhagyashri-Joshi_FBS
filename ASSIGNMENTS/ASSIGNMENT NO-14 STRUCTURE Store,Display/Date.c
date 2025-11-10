#include <stdio.h>
struct Date 
{
    int date;
    int month;
    int year;
};

// Function declarations
struct Date store();
void display(struct Date d);

void main() {
    struct Date d1;

    d1 = store();     
    display(d1);      
}
struct Date store() {
    struct Date d;

    printf("Enter date (dd): ");
    scanf("%d", &d.date);

    printf("Enter month (mm): ");
    scanf("%d", &d.month);

    printf("Enter year (yyyy): ");
    scanf("%d", &d.year);

    return d;   
}

void display(struct Date d) {
    printf("\n--- Date ---\n");
    printf("%02d-%02d-%04d\n", d.date, d.month, d.year);
}
