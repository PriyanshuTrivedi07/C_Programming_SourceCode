#include <stdio.h>
#include <string.h>
int main()
{
    // char str[] = "Raghav Garg is best";
    // printf("%s",str);
    // puts(str);
    // puts("hello string");
    char str[34];
    // scanf("%[^\n]s", str);
    gets(str);
    printf("your input is : %s", str);

    return 0;
}
