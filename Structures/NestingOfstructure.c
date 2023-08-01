#include<stdio.h>
#include<string.h>
int main()
{
    struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[23];
    };
    struct legendary_pokemon{
        struct pokemon normal; //'pokemon'(structure) inside the 'legendary_pokemon' (structure)
        int ability[10]; //extra attribute
    };


    struct legendary_pokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    //accessing
    mewtwo.normal.hp = 150; 
    mewtwo.normal.attack = 140;
    mewtwo.normal.speed = 120;
    mewtwo.normal.tier = 'B';
    strcpy(mewtwo.normal.name,"Mewtwo");
    return 0 ;
}