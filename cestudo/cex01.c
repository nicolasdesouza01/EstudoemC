#include <stdio.h>
    #define TAM_NOME 21

int main () {
    char nome[TAM_NOME];

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);

    printf("Seu nome é: %s\n", nome);
    printf("E a primeira letra é: %c\n", nome[0]);



    return 0;
}