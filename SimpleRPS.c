#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int r = rand()%100;
    int player,i=0;
    
    printf("There will be five rounds...\n");

    do{
        printf("\n\nThis is round no:%d...",(i+1));
        printf("\nThis is a rock paper scissor game\nSelect one");
        printf("\n\t1 = Rock\n\t2 = Paper\n\t3 = Scissor\n:");
        scanf("%d",&player);

        if((r<33)&&(player==2))
            printf("\nPlayer won!\n");

        else if(((r>=33)&&(r<66))&&(player==3))
            printf("\nPlayer won!\n");

        else if((r>=66)&&(player==1))
            printf("\nPlayer won!\n");

        
        else if((r<33)&&(player==3))
            printf("\nComputer won!\n");

        else if(((r>=33)&&(r<66))&&(player==1))
            printf("\nComputer won!\n");

        else if((r>=66)&&(player==2))
            printf("\nComputer won!\n");

        else
            printf("\nIts a tie....\n");


        i++;
    }while (i<5);
    

    return 0;
}