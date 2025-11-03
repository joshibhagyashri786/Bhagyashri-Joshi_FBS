#include <stdio.h>
#include <string.h>

int main() 
{
    char str[50] = "123abc";
    int count;

    count = strspn(str, "1234567890");  

    printf("Count = %d", count);
    return 0;
}
