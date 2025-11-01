#include <stdio.h>

void check(int a[], int n)
{
    for(int i=0;i<n;i++) {
        if(a[i]>=18)
            printf("Person %d: Eligible\n", i+1);
        else
            printf("Person %d: Wait %d years\n", i+1, 18-a[i]);
    }
}

int main() {
    int age[3], i;
    printf("Enter 3 ages: ");
    for(i=0;i<3;i++)
        scanf("%d",&age[i]);
    check(age,3);
}
