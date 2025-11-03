#include <stdio.h>
#include <string.h>

int main() 
{
    char str[50];
    printf("Enter a string: ");
    gets(str);
    printf("Length = %lu\n", strlen(str));
    return 0;
}
