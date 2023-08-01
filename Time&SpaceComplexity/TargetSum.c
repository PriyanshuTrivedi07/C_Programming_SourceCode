//  Given an array of integer numbers that is already sorted in non-decresing order, find two numbers such that they add upto a specific target

#include <stdio.h>

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 3;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("%d %d\n", arr[i],arr[j]);
            }
            break;
        }
    }
    return 0;
}