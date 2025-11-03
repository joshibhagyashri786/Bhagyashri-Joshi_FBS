#include <stdio.h>

int mystrcmp(char s1[], char s2[]) 
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] > s2[i] ? 1 : -1;
        i++;
    }
    if (s1[i] == s2[i])
        return 0;
    return s1[i] > s2[i] ? 1 : -1;
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    int r = mystrcmp(s1, s2);

    if (r == 0)
        printf("Equal");
    else if (r > 0)
        printf("First greater");
    else
        printf("Second greater");

    return 0;
}
