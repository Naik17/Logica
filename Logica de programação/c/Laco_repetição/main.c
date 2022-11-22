#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1;
    int limite = 10;


    while(contador <= limite){
            printf("Iniciado o Primeiro Loop!\n");
        if(contador ==  5){
        int contador_2 = 6;
        while(contador_2 > 0){
                printf("Iniciado o Sengundo Loop!\n");
            contador_2 --;
        }
     }
    contador++;
    }


    return 0;
}
