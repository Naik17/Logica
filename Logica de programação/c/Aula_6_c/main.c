#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [256];
    int idade;

    printf("Ola! Qual seu nome?\n");
    scanf("%s",nome);

    printf("\nQual sua idade?\n");
    scanf("%d",&idade);

    printf("Nome: %s\nIdade: %d",nome,idade);

    printf("\nAguarde enquanto lemos seus dados ....");

    printf("\nA primeira letra do seu nome e: %c",nome[0]);

    if(idade >= 18){
        printf("\nVoce e Adulto!");
    }else if(idade >= 12){
        printf("\nVoce e Adolescente!");
    }else{
        printf("\nVoce e Crianca!");
    }



    return 0;
}
