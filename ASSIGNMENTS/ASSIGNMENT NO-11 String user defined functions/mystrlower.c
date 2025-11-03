#include <stdio.h>

void mystrlower(char str[])
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets

    mystrlower(str);

    printf("Lowercase: %s", str);

    return 0;
}
