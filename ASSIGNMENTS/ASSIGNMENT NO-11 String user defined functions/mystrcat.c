#include <stdio.h>

void mystrcat(char dest[], char src[]) {
    int i = 0, j = 0;

    while (dest[i] != '\0')
        i++;

    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0'; 
}

int main() {
    char dest[100], src[100];

    printf("Enter first string: ");
    gets(dest);

    printf("Enter second string: ");
    gets(src);

    mystrcat(dest, src);

    printf("Joined string: %s", dest);

    return 0;
}
