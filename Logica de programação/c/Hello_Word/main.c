#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora_cinema = 20;
    int hora_atual = 20;

    //POsso entrar no cinema?
    if(hora_cinema > hora_atual + 30){
        printf("Passou do tempo limite! N�o pode entrar");
    }else if(hora_atual < hora_cinema - 30){
        printf("Nem abriu a porta do cinema!");
    }else{
       printf("O hrario esta certo! Pode entrar!");
    }

    return 0;
}
