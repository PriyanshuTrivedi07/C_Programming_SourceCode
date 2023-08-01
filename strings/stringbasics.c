#include<stdio.h>
 
int main()
{
    // char ch = 'a';
    // char c = '\0';
    // char h = 'b';
    // printf("%c\n",ch);
    // printf("%c\n",c);
    // printf("%c\n",h);
    char arr[] = {'h','e','l','l','o','3', '3' ,'\0'};
    // for(int i=0;i<6;i++){
    //     printf("%c",arr[i]);
    // }
    int i=0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    
    return 0 ;
}
