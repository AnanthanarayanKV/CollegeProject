#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<stdbool.h>

int generateRand();
int compInput(int a);
void options(int y);
int getInput();
void logic(int a, int b);
//1st parameter is player and 2nd is computer 

int p1 = 0,c1 = 0;

int main()
{    
    int player,Computer,i = 0;
    printf("\n\nSo the game is 5 rounds and whoever has the most points will will the game.\nLet the game begin\n\n");
    
    do
    {
        printf("\n\nEnter from the options below\n1 - Rock\n2 - Paper\n3 - Scissors\n:>");
        scanf("%d",&player);

        printf("You ");
        options(player);

        Computer = compInput(generateRand());

        printf("\nComputer ");
        options(compInput(generateRand()));

        logic(player,Computer);


        // printf("\nDo you want to continue : 1 - Continue or 2 - Exit :");
        // scanf("%d",&ch);

        // if (ch==1)
        // {
        //     ifTrue = true;
        // }
        // else if(ch==2)
        // {
        //     ifTrue = false;
        // }
        // else
        // {
        //     printf("\nWrong input\nTerminating......");
        //     ifTrue = false;
        // }
        i++;

    }while (i<=5);

    printf("5 Rounds are over and, you scored %d points and computer scored %d points",p1,c1);

    if (p1>c1)
    {
        printf("\n\aPlayer has more overall points, Player winss!!\a");
    }
    else if (c1>p1)
    {
        printf("\n\aComputer has more overall points, Computer winss!!\a\nBetter luck next time");
    }
    else
    {
        printf("\n\aBoth player and computer have %d points, Its a tie\a", p1);
    }
    
    

    
    return 0;
}

int generateRand()
{
    int x;
    srand(time(NULL));
    x = rand()%100;

    return x;
}

int compInput(int a)
{
    int c;

    if(a<=33)
    {
        c = 1;
    }
    else if ((a>33)&&(a<=66))
    {
        c = 2;
    }
    else
    {
        c = 3;
    } 

    return c;
}

void options(int y)
{
    switch (y)
    {
        case 1:
        printf("selected Rock");
        break;
        
        case 2:
        printf("selected Paper");
        break;
        
        case 3:
        printf("selected Scissors");
        break;

    
    default:
        printf("\nWrong input\nProgram will b\n");
        break;
    }
}


//main logic processing
void logic(int a,int b)
{
    //Computer wins
    if((a == 1)&&(b==2))
    {
        printf("\nComputer got a point!!\n");
        c1++;
    }
    else if((a == 2)&&(b==3))
    {
        printf("\nComputer got a point!!\n");
        c1++;
    }
    else if((a == 3)&&(b==1))
    {
        printf("\nComputer got a point!!\n");
        c1++;
    }

    //Computer wins
    else if((a == 1)&&(b==3))
    {
        printf("\nPlayer got a point!!\n");
        p1++;
        
    }
    else if((a == 2)&&(b==1))
    {
        printf("\nPlayer got a point!!\n");
        p1++;
    }
    else if((a == 3)&&(b==1))
    {
        printf("\nPlayer got a point!!\n");
        p1++;
    }
    else
    {
        printf("\nIt's a tie!\n");
        
    }
}

/* 
    a winning
    rock,1 - scissor,3
    paper,2 - rock -1
    scissor,3 - rock-1
    
    b winning
    rock,1 - paper,2
    paper,2 - scissor,3
    scissor,3 - rock,1
*/

/*Project made by Group11
==========================
Ananthanarayan KV -68
*/