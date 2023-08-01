#include <stdio.h>

int main()
{
    int no_ofStars, lines;
    printf("Enter the no. of stars you want to print : ");
    scanf("%d", &no_ofStars);
    printf("Enter the no. of lines : ");
    scanf("%d", &lines);
    for (int i = 1; i <= lines; i++)
    { // outer loop --> no. of lines
        for (int j = 1; j <= no_ofStars; j++)
        { // inner loop --> no. of stars in each line
            printf("*");
        }
        printf("\n"); // har line k baad ek enter marne k liye hai
    }
    return 0;
}
