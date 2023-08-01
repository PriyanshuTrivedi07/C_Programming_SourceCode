#include<stdio.h>

int main()
{
    double x1,y1 , x2,y2 , x3,y3 ;
    printf("Enter the cordinates of 3 points of a straight line\n");
    
    printf("x1 : ");
    scanf("%d", &x1);
    printf("y1 : ");
    scanf("%d", &y1);
    printf("x2 : ");
    scanf("%d", &x2);
    printf("y2 : ");
    scanf("%d", &y2);
    printf("x3 : ");
    scanf("%d", &x3);
    printf("y3 : ");
    scanf("%d", &y3);

    double m1 = (y2-y1)/(x2-x1);
    double m2 = (y3-y2)/(x3-x2);

    if(m1 == m2){
        printf("These co-ordinates can form a straight line.");
    }
    else{
        printf("Can't form a straight line.");
    }
    return 0;
}