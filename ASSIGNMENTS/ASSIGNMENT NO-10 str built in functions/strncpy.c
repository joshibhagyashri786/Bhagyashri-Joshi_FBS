#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Computer", s2[50];

    strncpy(s2, s1, 4);   
    s2[4] = '\0';         

    printf("Copied part: %s", s2);
    return 0;
}
