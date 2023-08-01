#include<stdio.h>
//syntax for typedef :  
//      keyword  old_datatype  new_datatype;
typedef float realNumber;  
typedef char ch;
// typedef main imp;  //we can't do this , it will throw an error

//the concept of 'typedef' is important in Structures

int main()
{
    int x;
    // float y = 3.14334;
    // now , if we want make our datatype of name 'realNumber' (instead of float) , then we can achieve this by using 'typedef'
    //so
    realNumber y = 3.1432;
    printf("%f",y);
    return 0 ;
}