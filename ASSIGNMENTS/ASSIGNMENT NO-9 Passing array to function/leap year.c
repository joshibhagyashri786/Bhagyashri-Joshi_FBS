#include <stdio.h>

void checkLeapYear(int y[], int n) 
{
    for(int i=0;i<n;i++) {
        if((y[i]%400==0)||(y[i]%4==0 && y[i]%100!=0))
            printf("%d is a leap year.\n", y[i]);
        else
            printf("%d is not a leap year.\n", y[i]);
    }
}

int main() {
    int y[3], i;
    printf("Enter 3 years: ");
    for(i=0;i<3;i++)
        scanf("%d",&y[i]);
    checkLeapYear(y,3);
}
