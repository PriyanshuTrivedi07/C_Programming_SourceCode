#include<stdio.h> 
//      cr = current row;                 cc = current column;            er = ending row;                ec = ending column
int mazepath(int cr, int cc, int er , int ec){
    int rightways = 0;
    int downways = 0;
    if(cr == er && cc == ec) return 1;
    if(cr == er){ // only right ways call
        rightways += mazepath(cr, cc+1, er,ec);
    }
    if(cc == ec){//only down ways call
        downways += mazepath(cr+1, cc, er, ec);
    }
    if(cr<er && cc<ec){// we can go both down/right
        rightways += mazepath(cr, cc+1, er,ec);
        downways += mazepath(cr+1, cc, er, ec);
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
    int no_of_ways = mazepath(1,1,n,m);
    printf("%d", no_of_ways);
    return 0 ;
}
