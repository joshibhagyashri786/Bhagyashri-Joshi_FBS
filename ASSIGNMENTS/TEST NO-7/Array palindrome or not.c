#include <stdio.h>

int check(int a[], int n) 
{
    int i;
    for (i = 0; i < n/2; i++) {
        if (a[i] != a[n-1-i])
            return 0;   
    }
    return 1;           
}

int main() {
    int a[10], n, i;

    printf("Size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if (check(a, n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
