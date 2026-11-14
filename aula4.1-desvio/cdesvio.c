#include <stdio.h>
#include <string.h>

int main () {
    char nome[50] = "";
    int idade = 0;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if (strcmp(nome, "nicolas") == 0 && idade > 17) {
        printf("Olá Nicolas");
    }


    return 0;

}