#include <stdio.h>

#include <locale.h>

int main () {
    if (setlocale(LC_ALL, "") == NULL) {
        printf("Aviso: nao foi possivel aplicar o locale.\n");
    }

    printf("Programacao em C: configuração.\n");

    return 0;
}