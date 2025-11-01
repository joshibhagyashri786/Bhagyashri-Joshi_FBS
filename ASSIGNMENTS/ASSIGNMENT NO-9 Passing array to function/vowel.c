#include <stdio.h>

void checkVowelOrConsonant(char ch[], int n)
{
    for(int i=0;i<n;i++) {
        char c = ch[i];
        char lower = (c >= 'A' && c <= 'Z') ? c + 32 : c;

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u')
                printf("%c is a vowel.\n", c);
            else
                printf("%c is a consonant.\n", c);
        } else
            printf("%c is not an alphabet.\n", c);
    }
}

int main() {
    char ch[5];
    int i;
    printf("Enter 5 characters: ");
    for(i=0;i<5;i++)
        scanf(" %c",&ch[i]);
    checkVowelOrConsonant(ch,5);
}
