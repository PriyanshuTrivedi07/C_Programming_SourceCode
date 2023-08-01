#include <stdio.h>

int main()
{
    int arr[8] = {0, 1, 2, 3, 5, 6, 7, 8};
    for (int x = 0; x <= 8; x++)
    {
        int check = 0; // 0 means not present
        for (int i = 0; i < 8; i++)
        {
            if (arr[i] == x)
            {
                check = 1;
                break;
            }
        }
    }

    // for(int i=0; i<=8; i++){
    //     for(int j=0; j<8; j++){
    //         if(i==arr[j]){
    //             break;
    //         }
    //         else{
    //             printf("%d",i);
    //         }
    //     }
    // }
    return 0;
}
