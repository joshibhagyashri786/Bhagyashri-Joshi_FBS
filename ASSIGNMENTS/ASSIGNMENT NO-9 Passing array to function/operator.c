#include <stdio.h>

void calculate(int num[], char op[], int n) 
{
    for(int i=0; i<n; i++) {
        if(op[i]=='+') printf("Result: %d\n", num[0]+num[1]);
        else if(op[i]=='-') printf("Result: %d\n", num[0]-num[1]);
        else if(op[i]=='*') printf("Result: %d\n", num[0]*num[1]);
        else if(op[i]=='%' && num[1]!=0) printf("Result: %d\n", num[0]%num[1]);
        else printf("Invalid or divide by zero!\n");
    }
}

int main() {
    int num[2];
    char op[1];
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num[0], &num[1]);
    
    printf("Enter operator (+,-,*,%%): ");
    scanf(" %c", &op[0]);
    
    calculate(num, op, 1);
}
