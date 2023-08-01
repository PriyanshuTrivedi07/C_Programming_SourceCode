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
    // pokemon pikachu;
    // pokemon charizard;
    //if we want to make 10 or 100 pokekmon like this then we can make the array of structre pokemon
    pokemon arr[10]; //arr[0] , arr[1] , ....... arr[9]
    //now we can set the values
    //first pokemon
    arr[0].attack = 59;
    arr[0].hp = 56;
    arr[0].speed = 99;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "Charizard");
    
    //second pokemon
    arr[1].attack = 39;
    arr[1].hp = 90;
    arr[1].speed = 120;
    arr[1].tier = 'S';
    strcpy(arr[1].name, "Mewtwo");

    //third pokemon
    arr[2].attack = 50;
    arr[2].hp = 30;
    arr[2].speed = 95;
    arr[2].tier = 'B';
    strcpy(arr[2].name, "Pikachu");

    for(int i=0;i<3;i++){
        printf("Name : %s\n",arr[i].name);
        printf("Attack : %d\n",arr[i].attack);
        printf("Hp : %d\n",arr[i].hp);
        printf("Speed : %d\n",arr[i].speed);
        printf("Tier : %c\n",arr[i].tier);
        printf("\n");
    }

    return 0 ;
}