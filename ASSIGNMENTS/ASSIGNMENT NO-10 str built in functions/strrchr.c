#include <stdio.h>
#include <string.h>
int main() 
{
    char s[50]="banana";
    char *p = strrchr(s,'n');
    printf("Last 'n' found at: %s", p);
}
