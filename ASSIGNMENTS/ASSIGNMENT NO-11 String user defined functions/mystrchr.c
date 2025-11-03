#include <stdio.h>

int mystrchr(char str[], char ch) 
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch)
            return i;   
        i++;
    }
    return -1;         
}

int main() {
    char str[100], ch;

    gets(str);
    scanf("%c", &ch);

    int pos = mystrchr(str, ch);

    if (pos == -1)
        printf("Character not found");
    else
        printf("Found at position %d", pos);

    return 0;
}
