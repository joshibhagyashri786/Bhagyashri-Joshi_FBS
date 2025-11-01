#include <stdio.h>

void convertTime(int a[], int n) 
{
    for(int i=0;i<n;i++)
        printf("%d min = %d hr %d min\n", a[i], a[i]/60, a[i]%60);
}

int main() {
    int a[3], i;
    printf("Enter 3 minute values: ");
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    convertTime(a,3);
}
