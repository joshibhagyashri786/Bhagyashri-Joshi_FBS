#include <stdio.h>

void calculate(int a, int b, char op)
{
    if(op=='+') printf("Result: %d", a+b);
    else if(op=='-') printf("Result: %d", a-b);
    else if(op=='*') printf("Result: %d", a*b);
    else if(op=='%' && b!=0) printf("Result: %d", a%b);
    else printf("Invalid or divide by zero!");
}

int main() {
    int a,b; char op;
    printf("Enter a, b and operator (+,-,*,%%): ");
    scanf("%d %d %c",&a,&b,&op);
    calculate(a,b,op);
}
