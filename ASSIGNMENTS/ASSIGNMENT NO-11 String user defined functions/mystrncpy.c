#include <stdio.h>

void mystrncpy(char dest[], char src[], int n) {
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    dest[i] = '\0';  
}

int main() {
    char dest[100], src[100];
    int n;

    printf("Enter a string: ");
    gets(src);

    printf("Enter how many characters to copy: ");
    scanf("%d", &n);

    mystrncpy(dest, src, n);

    printf("%s", dest);

    return 0;
}
