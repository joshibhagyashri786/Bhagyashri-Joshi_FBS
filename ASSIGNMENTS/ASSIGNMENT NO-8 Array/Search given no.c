#include <stdio.h>
int main() 
{
    int a[5], n, i;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    scanf("%d",&n);
    for(i=0;i<5;i++)
        if(a[i]==n){ printf("Found"); return 0; }
    printf("Not Found");
}
