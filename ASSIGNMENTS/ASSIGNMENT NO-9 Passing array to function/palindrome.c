#include <stdio.h>

void checkPalindrome(int arr[], int n)
{
    for(int i=0;i<n;i++) {
        int temp=arr[i], rev=0, d;
        while(temp>0) {
            d=temp%10;
            rev=rev*10+d;
            temp/=10;
        }
        if(arr[i]==rev)
            printf("%d is palindrome\n", arr[i]);
        else
            printf("%d is not palindrome\n", arr[i]);
    }
}

int main() {
    int arr[3], i;
    printf("Enter 3 numbers: ");
    for(i=0;i<3;i++)
        scanf("%d",&arr[i]);
    checkPalindrome(arr,3);
}
