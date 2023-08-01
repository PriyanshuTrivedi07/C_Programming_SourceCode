#include <stdio.h>

int main()
{
    // struct pokemon{
    //     int hp;
    //     int speed;
    //     int attack;
    // };
    // struct pokemon pikachu;
    // pikachu.attack = 60;
    // pikachu.hp = 50;
    // pikachu.speed = 100;

    struct player //our data type
    {
        //attributes
        int player_id;
        float salary;
        int jersey_num;
    }virat,dhoni; //if we declare our variables here then we do not need to declare our variable one by one 

    //data of 3 players
    struct player rohit;
    rohit.player_id = 11;
    rohit.salary = 5000.00;
    // rohit.jersey_num = 45;  //we can also take input any value from the user 
    printf("Enter jersey number of rohit sharma : ");
    scanf("%d",&rohit.jersey_num);

    
    virat.player_id = 22;
    virat.salary = 6000.00;
    virat.jersey_num = 18;

    
    dhoni.player_id = 33;
    dhoni.salary = 7000.00;
    dhoni.jersey_num = 7;

    // printf("%d\n",dhoni.jersey_num);
    // printf("%d\n",Virat.jersey_num);
    printf("You Entered : %d\n",rohit.jersey_num);
    return 0;
}
