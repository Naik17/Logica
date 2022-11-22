#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;

    printf("Qual seu nome?\n");
    scanf("%s",nome);

    printf("E qual e seu sobrenome?\n");
    scanf("%s",sobrenome);

    printf("\nOK %s %s Seja bem vindo, E qual seria sua idade?\n",nome,sobrenome);
    scanf("%d",&idade);

    printf("\nEntao %s %s tem %d anos mas qual e seu ano de nacimento?\n",nome,sobrenome,idade);
    scanf("%d",&ano_nascimento);

    printf("\n%s %s voce nasceu no ano de %d e tem atualmente %d",nome,sobrenome,ano_nascimento,idade);

    return 0;
}
