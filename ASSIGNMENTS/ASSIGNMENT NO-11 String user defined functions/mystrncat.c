#include <stdio.h>

void mystrncat(char dest[], char src[], int n) 
{
    int i = 0, j = 0;

    while (dest[i] != '\0')
        i++;

    while (j < n && src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0'; 
}

int main() {
    char dest[100], src[100];
    int n;

    gets(dest);
    gets(src);
    scanf("%d", &n);

    mystrncat(dest, src, n);

    printf("%s", dest);

    return 0;
}
