#include <stdio.h>

struct Time {
    int hour, min, sec;
};

void store(struct Time *t) {        // pass by address
    printf("Enter hour, min, sec: ");
    scanf("%d %d %d", &t->hour, &t->min, &t->sec);
}

void display(struct Time t) {       // pass by value
    printf("\nTime: %02d:%02d:%02d\n", t.hour, t.min, t.sec);
}

void main() {
    struct Time t1;

    store(&t1);     // pass by address
    display(t1);    // pass by value
}
