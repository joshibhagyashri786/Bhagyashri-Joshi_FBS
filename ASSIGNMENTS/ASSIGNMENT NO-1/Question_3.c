#include <stdio.h>
int main() {
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    printf("%d is %s leap year.\n", y, (y%400==0 || (y%4==0 && y%100!=0)) ? "" : "not");
    return 0;
}

