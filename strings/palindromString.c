// WAP to find the given string is a palindrom or not
#include <stdio.h>
#include <string.h>
int main()
{
    char str[44];
    puts("Enter a string : ");
    gets(str);

    // size
    int k = 0, size = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    // reverse
    int flag = 0;
    int i = 0, j = size - 1;
    while (i < j)
    {
        if (str[i] == str[j])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if (flag != 0)
    {
        puts("\nYes,it is a palindrome");
    }
    else
    {
        puts("\nNot a palindrome");
    }

    // printing the reversed string
    //  puts("The reversed string is : ");
    //  puts(str);

    return 0;
}
