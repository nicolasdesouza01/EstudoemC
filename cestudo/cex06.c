#include <stdio.h>
#include <string.h>

#define NOME 20


struct Cadastro {
    char nome[NOME];
    int idade;
    float altura;
};

int main () {
    struct Cadastro c1 = {
        "Nicolas", 20, 1.72f};

        printf("Nome: %s\n", c1.nome);
        printf("Idade: %d\n", c1.idade);
        printf("Altura: %.2f\n", c1.altura);



    return 0;
}