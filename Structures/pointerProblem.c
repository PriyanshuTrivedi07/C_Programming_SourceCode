#include<stdio.h>
typedef int* pointer;
int main()
{
    int x = 5,y=2;
    // int y = 2;
    // int* a = &x , b = &y; //this will not run , throw error
    // int *a = &x , *b = &y; //<--- we can also write like this but 'typedef' is best method to tackle this problem
    //we can solve this using 'typedef'
    pointer a = &x, b = &y;
    // int* b = &y;
    printf("%p\n",a);
    printf("%p",b);
    return 0 ;
}