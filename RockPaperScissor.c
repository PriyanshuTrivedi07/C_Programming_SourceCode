#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNum(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int main()
{
    typedef struct Player
    {
        char name[22];
        int choice;
        int point;
    } Player;
    Player p1;       // user
    Player computer; // computer as player2
    strcpy(computer.name, "Computer");
    printf("Enter your Name : ");
    gets(p1.name);
    printf("\nWelcome, %s.Let's Play RockPaperScissor Game.......\n", p1.name);
    printf("Your opponent : %s\n", computer.name);

    p1.point = 0, computer.point = 0;
    printf("\nChoose 0 for Rock , 1 for Paper & 2 for Scissor\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("Your Turn : ");
        scanf("%d", &p1.choice);
        computer.choice = generateRandomNum(3);
        printf("Computer's Turn = %d\n", computer.choice);

        if (p1.choice == 0)
        {
            if (computer.choice == 1)
            { // rock vs paper
                printf("You Lose :(\n");
                computer.point++;
            }
            else if (computer.choice == 2)
            { // rock vs scissor
                printf("You Win :) (+1)\n");
                p1.point++;
            }
            else
            { // rock vs rock
                printf("It's a Tie.\n");
            }
        }

        else if (p1.choice == 1)
        {
            if (computer.choice == 2)
            { // paper vs scissor
                printf("You Lose :(\n");
                computer.point++;
            }
            else if (computer.choice == 0)
            { // paper vs rock
                printf("You Win :) (+1)\n");
                p1.point++;
            }
            else
            { // paper vs paper
                printf("It's a Tie.\n");
            }
        }
        else
        {
            if (computer.choice == 0)
            { // scissor vs rock
                printf("You Lose :(\n");
                computer.point++;
            }
            else if (computer.choice == 1)
            { // scissor vs paper
                printf("You Win :) (+1)\n");
                p1.point++;
            }
            else
            { // scissor vs scissor
                printf("It's a Tie.\n");
            }
        }
    }
    printf("\nTotal Points : \n");

    printf("Your Points = %d\n", p1.point);
    printf("Computer's Points = %d\n", computer.point);
    printf("\nResult : \n");
    if (p1.point > computer.point)
    {
        printf("Congrats! %s, You Win.", p1.name);
    }
    else if (p1.point < computer.point)
    {
        printf("OOPS! %s, You Lose.");
    }
    else
    {
        printf("Both have the same Points");
    }
    return 0;
}

// 0 - Rock
// 1 - Paper
// 2 - Scissor

// rock vs paper  --  paper wins
// rock vs scissor -- rock wins
// paper vs scissor -- scissor wins
// rock vs rock -- Tie
// paper vs paper -- Tie
// scissor vs scissor -- Tie
