#include <stdio.h>

int mystrcasecmp(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        char c1 = s1[i];
        char c2 = s2[i];

        if (c1 >= 'A' && c1 <= 'Z')
            c1 = c1 + 32;
        if (c2 >= 'A' && c2 <= 'Z')
            c2 = c2 + 32;

        if (c1 != c2)
            return (c1 > c2) ? 1 : -1;

        i++;
    }

    if (s1[i] == s2[i])
        return 0;
    return (s1[i] > s2[i]) ? 1 : -1;
}

int main() {
    char s1[100], s2[100];

    gets(s1);
    gets(s2);

    int result = mystrcasecmp(s1, s2);

    if (result == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
