#include<stdio.h>

int main()
{
    float cost_price , selling_price;
    printf("Enter cost price : ");
    scanf("%f" , &cost_price);
    printf("Enter selling price : ");
    scanf("%f" , &selling_price);

    if(selling_price > cost_price){
        float profit = selling_price - cost_price;
        printf("profit of Rs %.2f", profit);
    }
    else if (selling_price < cost_price){
        float loss = cost_price - selling_price;
        printf("loss of Rs %.2f", loss);
    }
    return 0;
}