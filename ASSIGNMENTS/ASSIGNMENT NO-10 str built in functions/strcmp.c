#include <stdio.h>
#include <string.h>

int main()
{
    char a[50], b[50];
    printf("Enter two strings:\n");
    gets(a);
    gets(b);
    if (strcmp(a, b) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    return 0;
}
