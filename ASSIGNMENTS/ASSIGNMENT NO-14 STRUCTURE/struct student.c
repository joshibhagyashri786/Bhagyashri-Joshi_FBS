#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

void main() {
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.rollno);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
