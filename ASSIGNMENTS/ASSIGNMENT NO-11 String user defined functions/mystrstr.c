#include <stdio.h>

int mystrstr(char str[], char sub[])
{
    int i, j, k;

    for (i = 0; str[i] != '\0'; i++) {
        j = i;
        k = 0;

        while (str[j] == sub[k] && sub[k] != '\0') {
            j++;
            k++;
        }

        if (sub[k] == '\0')
            return i;  
    }
    return -1;
}

int main() {
    char str[100], sub[100];
    gets(str);
    gets(sub);

    int pos = mystrstr(str, sub);

    if (pos == -1)
        printf("Not found");
    else
        printf("Found at position %d", pos);

    return 0;
}
