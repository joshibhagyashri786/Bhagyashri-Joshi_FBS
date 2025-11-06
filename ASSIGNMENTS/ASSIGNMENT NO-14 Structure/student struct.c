#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
};

void store(struct student *s) {    // pass by address
    printf("Enter roll no, name, marks: ");
    scanf("%d %s %f", &s->rollno, s->name, &s->marks);
}

void display(struct student s) {   // pass by value
    printf("\nRoll No: %d\nName: %s\nMarks: %.2f\n", s.rollno, s.name, s.marks);
}

void main() {
    struct student s1;

    store(&s1);    // pass by address
    display(s1);   // pass by value
}
