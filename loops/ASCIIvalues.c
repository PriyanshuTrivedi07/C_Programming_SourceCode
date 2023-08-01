#include<stdio.h>
 
int main()
{
    int i = 65; //and for small alphabets loop goes from 97 to 122
    while(i<=90){
        printf("The ASCII value of %c is %d\n", i,i);
        i++;
    }
    // char ch = 'a';
    // printf("%d",(int)ch);
    return 0 ;
}
