#include <stdio.h>

void mystrrev(char str[])
{
    int i = 0, j = 0;

    while (str[j] != '\0')
        j++;
    j--;  

    while (i < j) {
        str[i] = str[i] + str[j];
        str[j] = str[i] - str[j];
        str[i] = str[i] - str[j];
        i++;
        j--;
    }
}

int main() {
    char str[100];

    gets(str);
    mystrrev(str);
    printf("%s", str);

    return 0;
}
