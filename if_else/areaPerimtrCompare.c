#include<stdio.h>

int main()
{
    int length, breadth;
    printf("Enter the length of the rectangle : ");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle : ");
    scanf("%d",&breadth);
    int area = length * breadth;
    int perimeter = 2*(length + breadth);

    if(area < perimeter){
        printf("the perimeter is greater than area");
    }
    else if (area > perimeter){
        printf("the area is greater than perimeter");
    }
    else{
        printf("area and perimeter is equal");
    }
    return 0;
}