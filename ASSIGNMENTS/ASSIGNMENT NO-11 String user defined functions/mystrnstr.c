#include <stdio.h>

int mystrnstr(char str[], char sub[], int n) 
{
    int i, j;
    for (i = 0; str[i] != '\0' && i < n; i++) {
        for (j = 0; sub[j] != '\0' && (i + j) < n; j++) {
            if (str[i + j] != sub[j])
                break;
        }
        if (sub[j] == '\0')
            return i;  
    }
    return -1;  
}

int main() {
    char str[100], sub[100];
    int n;

    gets(str);
    gets(sub);
    scanf("%d", &n);

    int pos = mystrnstr(str, sub, n);

    if (pos == -1)
        printf("Not found");
    else
        printf("Found at position %d", pos);

    return 0;
}
