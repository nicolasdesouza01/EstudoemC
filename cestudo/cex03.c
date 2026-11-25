#include <stdio.h>
#include <string.h>

#define TAM 31

int main () {
    char comando[TAM];
    char copia[TAM];

    printf("Escreva seu nome: \n");
    fgets(comando,sizeof(comando), stdin);
    comando[strcspn(comando,"\n")] = '\0';

    strcpy(copia, comando);

    printf("Tamanho de copia é: %zu\n", strlen(copia));

    if (strcmp(copia, "ok") == 0) {
        strcat(copia, " recebido");
        puts (copia);
    } else {
        printf("Comando diferente de 'ok'.\n");
    }
    
    return 0;
    
}