#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    printf("%c is %s.\n", c, (c>='A' && c<='Z') ? "uppercase" : "lowercase");
}

