#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome{265};
    int idade;

    printf("Ola! Qual seu nome?\n);
    scanf("%s",&nome);

    printf("\nQual sua idade?\n");
    scanf("%d",&idade);

    printf("Nome: %s\nIdade: %d\n",nome,idade);

    printf("\nAguarde enquanto lemos seus dados...");

    printf("A primeira letra do seu nome e: %c",nome{0});

    if(idade >= 18){
        printf("\nVoce e adulto!");
    }else if(idade >= 12){
        printf("\nVoce e Adolescente!");
    }else{
    printf("\nVoce e crianca!");

}
