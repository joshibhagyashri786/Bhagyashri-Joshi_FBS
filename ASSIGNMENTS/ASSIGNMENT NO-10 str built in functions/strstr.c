#include <stdio.h>
#include <string.h>
int main() 
{
    char s[50]="Hello World";
    char *p = strstr(s, "World");
    printf("Substring found: %s", p);
}
