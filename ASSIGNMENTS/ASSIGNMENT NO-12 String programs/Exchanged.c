#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    str[0] = str[0] + str[len - 1];
    str[len - 1] = str[0] - str[len - 1];
    str[0] = str[0] - str[len - 1];

    printf("New string: %s\n", str);

    return 0;
}
