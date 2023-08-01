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

void func(pokemon p)
{
    printf("%d", p.hp);
}
void change(pokemon p)
{
    p.attack = 90;
    p.hp = 110;
    p.speed = 80;
}
int main()
{
//METHOD 1 OF INITIALIZING :
    /* pokemon pikachu; // variable

    pikachu.attack = 80;
    pikachu.speed = 70;
    pikachu.hp = 100;
    pikachu.tier = 'A'; */
//METHOD 2 OF INITIALISING : 
    pokemon pikachu = {80,70,100,'A',"pikachu"};

    change(pikachu);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);
    printf("%s\n", pikachu.name);
    // func(pikachu);
    return 0;
}