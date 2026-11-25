#include <stdio.h>
#define TAM_FRASE 51

int main () {
    char frase[TAM_FRASE];

    printf("Escreva uma frase aqui... ");
    fgets(frase,sizeof(frase), stdin);

    puts(frase);


    return 0;
}