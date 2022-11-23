#include <stdio.h>
#include <stdlib.h>

int main()
{

    //strcmp(strg1, strg2) == 0
    //Pedra, papel ou tesoura!
    char player[256];
    char player2[256];

    printf("Player 1, Sua vez...\n");
    scanf("%s",&player);

    printf("\nPlayer 2, Sua vez...\n");
    scanf("%s", &player2);

    printf("\nAguarde, estamos calculando o resultado....\n");
    if(strcmp(player,"pedra") == 0){
            if(strcmp(player2,"pedra") == 0){
                printf("Empate!");
            }else if(strcmp(player2,"papel") == 0){
                printf("Vitoria do Player 2 !");
            }else if(strcmp(player2,"tesoura") == 0){
                printf("Vitoria do Player 1 !");
            }else{
            printf("Player 2 jogou uma escolha invalida!");

    }

    }else if(strcmp(player,"papel") == 0){
           if(strcmp(player2,"pedra") == 0){
                printf("Vitoria do Player 1 !");
            }else if(strcmp(player2,"papel") == 0){
                printf("Empate!");
            }else if(strcmp(player2,"tesoura") == 0){
                printf("Vitoria do Player 2 !");
            }else{
            printf("Player 2 jogou uma escolha invalida!");

    }

    }else if(strcmp(player,"tesoura") == 0){
           if(strcmp(player2,"pedra") == 0){
                printf("Vitoria do Player 2 !");
            }else if(strcmp(player2,"papel") == 0){
                printf("Vitoria do Player 1 !");
            }else if(strcmp(player2,"tesoura") == 0){
                printf("Empate!");
            }else{
            printf("Player 2 jogou uma escolha invalida!");

    }

    }else{
    printf("Player 1 jogou uma escolha invalida!");

    }

    return 0;
}
