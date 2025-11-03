#include <stdio.h>

int mystrncasecmp(char a[], char b[], int n) 
{
    int i;
    for (i = 0; i < n && a[i] && b[i]; i++) {
        char x = (a[i] >= 'A' && a[i] <= 'Z') ? a[i] + 32 : a[i];
        char y = (b[i] >= 'A' && b[i] <= 'Z') ? b[i] + 32 : b[i];
        if (x != y) return (x > y) ? 1 : -1;
    }
    return 0;
}

int main() {
    char s1[100], s2[100];
    int n;
    gets(s1);
    gets(s2);
    scanf("%d", &n);
    printf(mystrncasecmp(s1, s2, n) == 0 ? "Equal" : "Not equal");
    return 0;
}
