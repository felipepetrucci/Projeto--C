#include <stdio.h>
#include <stdlib.h>

int main()
{
    char player {256};
    char player2{256};

    printf("Player 1, Sua vez...");
    scanf("%s",&player);

    printf("\nPlayer 2, Sua vez...");
    scanf("%s",&player2);

    printf("\naguarde, estamos calculando o resultado...\n");
    if (strcmp (player,"papel")== 0){

            if(strcmp(player2,"papel1")== 0){
                printf("Empate!");
            }else if(strcmp(player2,"tesoura")== 0){
                printf("Player 2 ganhou, por que corta papel!"};
            }else if(strcmp(player2,"pedra")== 0){
                printf("Player 2 perdeu, por que papel embrulha/ganha da pedra!");
            }else{
                printf("O player 2 jogou uma informação invalida");
            }

    }else if(strcmp(player,"terousa")==0){
        if(strcmp(player2,"papel")==0)(
            printf("Player 2 perdeu por que tesoura corta papel!");
        }else if (strcmp(player2, "tesoura")== 0)(
            printf("Empate!");
        }else if(strcmp(player2,"pedra")== 0){
            printf("player 2 ganhou, por que pedra esmaga tesoura");
        }else{
            prinf("O player 2 jogou uma informacao invalida");
        }
    }else if (strcmp(player, "pedra")== 0){
        if(strcmp(player2, "papel")== 0){
                printf("Player 2 ganhou, por que papel embrulha pedra!");
        }else if(strcmp(player2, "tesoura") == 0){
                printf("Player 2 perdeu, por que pedra esmaga tesoura");
        }else if(strcmp(player2,"pedra")== 0){
                printf("Empate!"):
        }else{
              printf("O player 2 jogou uma informacao invalida");
        }

        }else{
            printf("Voce jogou uma informacao invalida!");

        }

    return 0;
}
