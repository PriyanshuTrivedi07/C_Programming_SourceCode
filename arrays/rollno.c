#include <stdio.h>

int main()
{
    int marks[10] = {45, 23, 67, 23, 91, 34, 87, 67, 80, 30};
    printf("The Roll no. of students having less than 35 marks are : ");
    for(int i=0; i<10; i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
        // printf("%d ",marks[i]);
    }
    return 0;
}
