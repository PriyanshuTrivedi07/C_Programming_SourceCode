#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b;
    a.day = 30;
    a.month = 6;
    a.year = 2004;

    b.day = 30;
    b.month = 6;
    b.year = 200;
    // if(a == b) printf("the dates are same");  //<-----this will thrown an error, we can't do this  
    // else printf("the dates are different"); 

    //so to compare two struct datatypes    
    bool flag = true;
    if(a.day != b.day) flag = false;
    if(a.month != b.month) flag  = false;
    if(a.year != b.year) flag  = false;

    if(flag == true) printf("the dates are same");
    else printf("the dates are different");
    return 0 ;
}