#include<stdio.h> 
//      cr = current row;                 cc = current column;            er = ending row;                ec = ending column
int mazepath2(int n, int m){
    int rightways = 0;
    int downways = 0 ;
    if(n==1 && m==1) return 1;
    if(n==1){ // can only go right
        rightways += mazepath2(n,m-1);
    }
    if(m==1){//can only go down
        downways += mazepath2(n-1,m);
    }
    if(n>1 && m>1){
        rightways += mazepath2(n,m-1);
        downways += mazepath2(n-1,m);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int n; // rows
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    int m; // columns
    printf("Enter no. of columns : ");
    scanf("%d",&m);
    int no_of_ways = mazepath2(n,m);
    printf("%d", no_of_ways);
    return 0 ;
}
