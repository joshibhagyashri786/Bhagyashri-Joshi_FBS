#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    printf("%c is %s.\n", c, (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                              c=='A'||c=='E'||c=='I'||c=='O'||c=='U') ? "vowel" : "consonant");
}

