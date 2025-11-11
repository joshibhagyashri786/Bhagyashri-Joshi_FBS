#include <stdio.h>

float sellprice(float cost, float discount)
{
    float sp;
    if(discount > 0) {
        if(discount <= 50)
            sp = cost - (cost * discount / 100);
        else
            sp = cost - (cost * 50 / 100);
    } else
        sp = cost;
    return sp;
}

void main() {
    float cost, discount;
    printf("Enter cost price: ");
    scanf("%f", &cost);
    printf("Enter discount: ");
    scanf("%f", &discount);

    printf("Selling Price = %.2f", sellprice(cost, discount));
}
