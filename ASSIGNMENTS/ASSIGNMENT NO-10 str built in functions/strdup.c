#include <stdio.h>
#include <string.h>

int main() 
{
    char str[50];
    printf("Enter a string: ");
    gets(str);       

    char *copy = strdup(str);   

    printf("Original: %s\n", str);
    printf("Duplicate: %s", copy);

    return 0;
}
