#include<stdio.h>
#include<string.h>
int main()
{
    struct Person{
        char name[22];
        float salary;
        int age;
    }amit,anita;

    amit.age = 22;
    strcpy(amit.name,"Amit Trivedi");
    amit.salary = 10000.00;

    anita.age = 35;
    strcpy(anita.name, "Anita Trivedi");
    anita.salary = 32343;

    printf("%s\n",amit.name);
    printf("%d",anita.age);
    return 0 ;
}