#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    }pokemon;
    pokemon a,b,c;
    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name, "Blastoise");

    //now if we want to make a 'pokemon b' with exact same values of 'pokekmon a' then instead of writing five different lines , we can do this same thing in one liner
    b = a; //structed a 'pokemon b' with exact same values of 'pokemon a' 
    //here 'b' is a DEEP COPY of 'a' which means if we change a value in 'b' then it will not reflect change in 'a'
    //for ex: 
    b.attack = 200; //only the attack of 'b' will change
    printf("%d",b.attack);
    printf("%d",a.attack);


    return 0 ;
}