#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    char sobrenome[256];
    int anoNascimento;
    int idade;

    printf("Qual seu nome?\n");
    scanf("%s",nome);

    printf("\nE qual a sua idade %s?\n",nome);
    scanf("%d",&idade);

    printf("\nMuito bom %s. Voce tem %d anos.",nome, idade);

    return 0;
}
