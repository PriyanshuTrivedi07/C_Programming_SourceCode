#include<stdio.h>
 
int main()
{
    char arr[] = "priyanshu Trivedi is best channel for coders ";
    char str[] = "physicsWallah";
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",arr[i]);
        // printf("%c",i[str]);
        // printf("%c", *(str + i));
        // printf("%s", *(i + str));
        i++;
    }
    
    return 0 ;
}
