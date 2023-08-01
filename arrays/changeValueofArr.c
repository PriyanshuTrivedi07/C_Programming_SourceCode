#include <stdio.h>

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 8; i++)
    {
        if (i % 2 != 0)
        { // odd indeces
            arr[i] = arr[i] * 2;
        }
        else
        { // even indexes
            arr[i] = arr[i] + 10;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}
