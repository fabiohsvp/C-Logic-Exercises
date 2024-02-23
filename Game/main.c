#include <stdio.h>
#include <stdlib.h>

int main()
{
    //strcmp(strg1, strg2)==0
    //Pedra, papel ou tesoura.
    char player[256];
    char player2[256];

    printf("\nPlayer 1, sua vez...");
    scanf("%s", &player);

    printf("\nPlayer 2, sua vez...");
    scanf("%s", &player2);

    printf("\nAguarde, estamos calculando o resultado...\n");
    if(strcmp(player,"papel") == 0){

        if(strcmp(player2,"papel") == 0){
            printf("Empate!");
        }else if(strcmp(player2,"pedra") == 0){
            printf("O player 2 perdeu!");
        }else if(strcmp(player2,"tesoura") == 0){
            printf("O player 2 ganhou!");
        }else{
            printf("O player 2 jogou uma informacao invalida!");
        }

    }else if(strcmp(player,"tesoura") == 0){

        if(strcmp(player2,"papel") == 0){
            printf("O player 2 perdeu!");
        }else if(strcmp(player2,"pedra") == 0){
            printf("O player 2 ganhou!");
        }else if(strcmp(player2,"tesoura") == 0){
            printf("Empate!");
        }else{
            printf("O player 2 jogou uma informacao invalida!");
        }

    }else if(strcmp(player,"pedra") == 0){

        if(strcmp(player2,"papel") == 0){
            printf("O player 2 ganhou!");
        }else if(strcmp(player2,"pedra") == 0){
            printf("Empate!");
        }else if(strcmp(player2,"tesoura") == 0){
            printf("O player 2 perdeu!");
        }else{
            printf("O player 2 jogou uma informacao invalida!");
        }

    }else{
        printf("O player 1 jogou uma informacao invalida!");
    }

    return 0;
}
