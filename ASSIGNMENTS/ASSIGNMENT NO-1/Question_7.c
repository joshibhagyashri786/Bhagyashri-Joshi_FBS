#include <stdio.h>
int main(){
    float b,da,ta,hra;
    scanf("%f",&b);
    da=b*(b<=5000?0.10:0.15);
    ta=b*(b<=5000?0.20:0.25);
    hra=b*(b<=5000?0.25:0.30);
    printf("Total=%.2f",b+da+ta+hra);
}

