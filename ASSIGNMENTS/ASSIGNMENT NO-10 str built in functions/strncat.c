#include <stdio.h>
#include <string.h>
int main() 
{
    char s1[50]="Good", s2[50]="Morning";
    strncat(s1, s2, 4);
    printf("After concat: %s", s1);
}
