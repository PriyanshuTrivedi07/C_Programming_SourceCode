//1
//A B
//1 2 3
//A B C D
//1 2 3 4

#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter the no. of lines : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a = 65;
        for(int j=1; j<=i; j++){
            if(i%2 == 0){
                printf("%c ", a);
                a++;
            }
            else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0 ;
}
