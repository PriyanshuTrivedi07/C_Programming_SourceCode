// AP : 1,3,5,7,9.....

#include<stdio.h>
 
int main()
{
    // int term ;
    // printf("Enter a number : ");
    // first method : 
    // scanf("%d", &term);
    // for(int i = 100; i>=0; i = i-3){
    //     printf("%d ", i);
    // }

    // second method : 
    int a = 100;
    for(int i = 1; a>0; i++){
        printf("%d ", a);
        a = a-3;
        // if(a < 0){
        //     break;
        // }
    }
    return 0 ;
}
