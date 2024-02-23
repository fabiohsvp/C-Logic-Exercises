#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaCinema = 20;
    int horaAtual = 20;

    if(horaAtual > horaCinema + 30){
        printf("Passou do tempo limite! Não pode entrar!");
    }else if (horaAtual < horaCinema - 30){
        printf("O cinema ainda não abriu!");
    }else{
        printf("O horario esta certo! Pode entrar!");
    }

    return 0;
}
