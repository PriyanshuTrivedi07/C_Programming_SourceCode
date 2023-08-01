// #include<stdio.h>
// void func(int* a){ //using pointer to receive an address
//     *a = 6; // change the value of actual a using pointer
//     return;
// }
// int main()
// {
//     // int arr[4] = {1,6,1,5};
//     int a = 4;
//     printf("%d\n",a);
//     func(&a); // passing address of variable a ;
//     printf("%d",a);
//     return 0 ;
// }
#include<stdio.h>
//array always pass by refrence to a function
void func(int arr[]){//
    arr[1] = 10;
}
int main()
{
    int arr[4] = {1,6,1,5};
    printf("%d\n",arr[1]);
    func(arr[0]); //passing array
    printf("%d\n",arr[1]);
    return 0 ;
}

