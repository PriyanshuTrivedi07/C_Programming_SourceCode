#include<stdio.h>
#include<string.h>
int main()
{
    char str[44];
    puts("Enter a string : ");
    gets(str);
    // puts("Your string is : ");
    // puts(str);
    
    // size
    int k = 0, size = 0;
    while(str[k]!='\0'){
        size++;
        k++;
    }

    //reverse
    int i = 0, j = size-1;
    while (i<j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    //printing the reversed string
    puts("The reversed string is : ");
    puts(str);
    
    // int size = 0;
    // for(int i=0; str[i]!='\0';i++){
    //     size++;
    // }
    // printf("the size of string is : %d", size);
    
    
    return 0 ;
}
