#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    int nsp = 1;
    int nst = n-1;
    int val = 65;
    for(int i=1; i<=2*n-1; i++){
        printf("%c",val);
        val++;
    }
    printf("\n");
    for(int i=1; i<=n-1; i++){
        int a = 65;
        //loop for printing Stars
        for(int j=1; j<=nst; j++){
            printf("%c",a);
            a++;
        }
        
        // loop for printing spaces
        for(int k=1; k<=nsp; k++){
            printf(" ");
            a++;
        }

        //loop for printing Stars again
        for(int j=1; j<=nst; j++){
            printf("%c",a);
            a++;
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0 ;
}
