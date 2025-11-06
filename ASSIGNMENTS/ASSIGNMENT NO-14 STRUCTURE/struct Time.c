#include <stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
};

void main() {
    struct Time t;

    printf("Enter hour: ");
    scanf("%d", &t.hour);

    printf("Enter minutes: ");
    scanf("%d", &t.min);

    printf("Enter seconds: ");
    scanf("%d", &t.sec);

    printf("\n--- Time ---\n");
    printf("%02d:%02d:%02d\n", t.hour, t.min, t.sec);
}
