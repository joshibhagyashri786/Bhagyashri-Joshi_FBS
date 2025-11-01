#include <stdio.h>
int main() 
{
    int arr[5], brr[5], crr[10], i, j;
    for(i=0;i<5;i++) scanf("%d",&arr[i]);
    for(i=0;i<5;i++) scanf("%d",&brr[i]);
    for(i=0;i<5;i++) crr[i]=arr[i];
    for(j=0;j<5;j++) crr[i+j]=brr[j];
    for(i=0;i<10;i++) printf("%d ",crr[i]);
}
