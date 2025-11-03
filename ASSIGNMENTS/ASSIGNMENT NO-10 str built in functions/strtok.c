#include <stdio.h>
#include <string.h>
int main() 
{
    char s[50]="one two three";
    char *p = strtok(s, " ");
    while(p){
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }
}
