#include <stdio.h>

int mystrrchr(char str[], char ch) 
{
    int i = 0, pos = -1;

    while (str[i] != '\0') {
        if (str[i] == ch)
            pos = i;   
        i++;
    }

    return pos;  
}

int main() {
    char str[100], ch;

    gets(str);
    scanf("%c", &ch);

    int pos = mystrrchr(str, ch);

    if (pos == -1)
        printf("Character not found");
    else
        printf("Last found at position %d", pos);

    return 0;
}
