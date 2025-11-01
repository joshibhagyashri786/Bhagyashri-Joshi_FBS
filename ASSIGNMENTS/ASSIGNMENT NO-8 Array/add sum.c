#include <stdio.h>
int main() 
{
    int arr[5], brr[5], crr[5], i;
    for(i=0;i<5;i++) scanf("%d",&arr[i]);
    for(i=0;i<5;i++) scanf("%d",&brr[i]);
    for(i=0;i<5;i++) crr[i]=arr[i]+brr[i];
    for(i=0;i<5;i++) printf("%d ",crr[i]);
}
