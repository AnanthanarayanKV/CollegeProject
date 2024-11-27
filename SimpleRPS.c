#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int r = rand()%100;
    int player,i=0,p = 0,c = 0;
    
    printf("There will be three rounds...\n");

    do{
        printf("\nThis is round no:%d...",(i+1));
        printf("\nThis is a rock paper scissor game\nSelect one");
        printf("\n\t1 = Rock\n\t2 = Paper\n\t3 = Scissor\n:");
        scanf("%d",&player);

        if((r<33)&&(player==2)){
            printf("\nComputer selected Rock");
            printf("\nPlayer won!\n");
            p++;

        }
        else if(((r>=33)&&(r<66))&&(player==3)){
            printf("\nComputer selected Paper");
            printf("\nPlayer won!\n");
            p++;

        }

        else if((r>=66)&&(player==1)){
            printf("\nComputer selected Scissor");
            printf("\nPlayer won!\n");
            p++;
        }

        
        else if((r<33)&&(player==3)){
            printf("\nComputer selected Rock");
            printf("\nComputer won!\n");
            c++;

        }

        else if(((r>=33)&&(r<66))&&(player==1)){
            printf("\nComputer selected Paper");
            printf("\nComputer won!\n");
            c++;
        }

        else if((r>=66)&&(player==2)){
            printf("\nComputer selected Scissor");
            printf("\nComputer won!\n");
            c++;
        }

        else
            printf("\nIts a tie....\n");


        i++;
    }while (i<3);

    printf("\n Game ended and player won %d times and computer won %d times",p,c);
    

    return 0;
}