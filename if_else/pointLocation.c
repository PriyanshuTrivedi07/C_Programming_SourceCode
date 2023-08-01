#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the co-ordinates of a point : ");
    scanf("%d %d",&x,&y);

    if(x==0 && y==0){
        printf("Lies on origin.");
    }
    else if(x == 0){
        printf("Lies on y-axis");
    }
    else if(y == 0){
        printf("Lies on x-axis");
    }
    else{
        printf("Doesn't lies on x-axis or y-axis");
    }
    return 0;
}