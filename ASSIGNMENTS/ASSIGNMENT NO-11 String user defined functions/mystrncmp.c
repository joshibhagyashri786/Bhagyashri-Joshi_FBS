#include <stdio.h>

int mystrncmp(char s1[], char s2[], int n)
{
    int i = 0;

    while (i < n && s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] > s2[i]) ? 1 : -1;
        i++;
    }

    if (i == n)
        return 0;  

    return (s1[i] == s2[i]) ? 0 : ((s1[i] > s2[i]) ? 1 : -1);
}

int main() {
    char s1[100], s2[100];
    int n;

    gets(s1);
    gets(s2);
    scanf("%d", &n);

    int result = mystrncmp(s1, s2, n);

    if (result == 0)
        printf("Equal");
    else
        printf("Not equal");

    return 0;
}
