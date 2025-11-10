#include <stdio.h>
struct Student 
{
    int rollno;
    char name[50];
    float marks;
};

// Function declarations
struct Student store();
void display(struct Student s);

void main() {
    struct Student s1;

    s1 = store();     
    display(s1);      
}

struct Student store() {
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.rollno);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    return s;   
}

void display(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
