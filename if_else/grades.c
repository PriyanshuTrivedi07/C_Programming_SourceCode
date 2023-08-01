#include<stdio.h>

int main()
{
    int marks ; 
    printf("Enter Marks : ");
    scanf("%d",&marks);

    if(marks >= 90 && marks <= 100){
        printf("Grade : Excellent ");
    }
    else if(marks >= 80 && marks < 90){
        printf("Grade : Very good ");
    }
    else if(marks >= 70 && marks < 80){
        printf("Grade : Good ");
    }
    else if(marks >= 60 && marks < 70){
        printf("Grade : Can do better ");
    }
    else if(marks >= 50 && marks < 60){
        printf("Grade : Average ");
    }
    else if(marks >= 40 && marks < 50){
        printf("Grade : Below Average ");
    }
    else {
        printf("OOPs! Fail :( .......");
    }
    return 0;
}