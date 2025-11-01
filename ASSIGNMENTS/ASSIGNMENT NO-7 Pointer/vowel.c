#include <stdio.h>

// Function declaration
void checkVowelOrConsonant(char *ch);

int main() {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);  

    checkVowelOrConsonant(&c);

    return 0;
}

void checkVowelOrConsonant(char *ch) {
    if ((*ch >= 'a' && *ch <= 'z') || (*ch >= 'A' && *ch <= 'Z')) {
        
        char lower = (*ch >= 'A' && *ch <= 'Z') ? *ch + 32 : *ch;

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            printf("%c is a vowel.\n", *ch);
        else
            printf("%c is a consonant.\n", *ch);
    } else {
        printf("%c is not an alphabet.\n", *ch);
    }
}
