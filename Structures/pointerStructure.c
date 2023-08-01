#include <stdio.h>
#include <string.h>

typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[22];
} pokemon; // datatype


int main()
{

    pokemon pikachu; // variable
    pokemon* x = &pikachu;
    pikachu.hp = 100;
    pikachu.attack = 80;
    pikachu.speed = 70;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");
    
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.tier);
    printf("%p\n", pikachu.name);

    printf("%p\n",x);
    
    return 0;
}