#include <stdio.h>

int main()
{
    int h, m, s, total;

    printf("Enter hours: ");
    scanf("%d", &h);
    printf("Enter minutes: ");
    scanf("%d", &m);
    printf("Enter seconds: ");
    scanf("%d", &s);

    total = (h * 3600) + (m * 60) + s;

    printf("Total seconds = %d\n", total);

    return 0;
}
