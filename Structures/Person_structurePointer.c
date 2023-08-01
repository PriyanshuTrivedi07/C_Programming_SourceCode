#include<stdio.h>
#include<string.h>
typedef struct person{
    int age;
    float weight;
}person;

int main()
{
    person p1;
    p1.age = 35;
    p1.weight = 56;

    person* x = &p1; //pointing to structure 'p1'

    //now if we want to change the value of 'p1.age' using our pointer 'x' , we can write 
//    *x.age = 40; // this will throw an error. "we have to use paranthesis"
    (*x).age = 41; // now we succesfully changed the value using pointer
    //OR
    x->age = 43;// " (*x)something == x->something "
    printf("%d",p1.age);
    //we can initialize as well as modify the value of any attribute using pointer;
    return 0 ;
}