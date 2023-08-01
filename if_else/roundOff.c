#include<stdio.h>
 
int main()
{
    double final_cost = 12.3150;  // input a number from user 
    float num = final_cost - (int)final_cost;
    printf("%f\n", num);
    // printf("%d", num > .5);
    if(num > 0.5){
        printf("%d",(int)final_cost+1);
    }
    else{
        printf("%d",(int)final_cost);
    }
    return 0 ;
}