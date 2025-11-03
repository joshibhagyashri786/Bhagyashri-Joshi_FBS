#include <stdio.h>
#include <string.h>
int main() 
{
    char a[50]="apple", b[50]="apricot";
    if(strncmp(a,b,2)==0) printf("First 2 chars same");
    else printf("Different");
}
