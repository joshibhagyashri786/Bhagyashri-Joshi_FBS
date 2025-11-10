#include <stdio.h>
struct Time 
{
    int hour;
    int min;
    int sec;
};

// Function declarations
struct Time store();
void display(struct Time t);

void main() {
    struct Time t;
    t = store();      
    display(t);       
}

struct Time store() {
    struct Time t;
    printf("Enter hour: ");
    scanf("%d", &t.hour);

    printf("Enter minutes: ");
    scanf("%d", &t.min);

    printf("Enter seconds: ");
    scanf("%d", &t.sec);

    return t;   
}

void display(struct Time t) {
    printf("\n--- Time ---\n");
    printf("%02d:%02d:%02d\n", t.hour, t.min, t.sec);
}
