// program to find difference b/w the sum of elements at even indices to the sum of elements at odd indices
#include <stdio.h>

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int even_sum = 0, odd_sum = 0;
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0) //if even indices
        {
            even_sum = even_sum + arr[i];
        }
        else //if odd indices
        { 
            odd_sum = odd_sum + arr[i];
        }
    }
    printf("%d", even_sum - odd_sum);
    return 0;
}
