#include <stdio.h>

int main () {
    int i;
    int original[6];
    int qtd_pares [6];
    int qtd_impares[6];
    int cont_pares = 0;
    int cont_impares = 0;
    int cont = 0;
    
    int pares[6];
    int impares[6];

    for (i = 0; i < 6; i++) {
        cont = 0;
        printf("Digite um número: \n");
        scanf("%d", &cont);
        if (cont /2 == 0) {
            qtd_pares[6] += cont;
            cont_pares ++;
        }
        else {
            qtd_impares[6] += cont;
            cont_impares ++;
        }
    }

    for (i = 0; i < qtd_pares; i++) {
        printf("%d ", qtd_pares);
    }

        for (i = 0; i < qtd_impares; i++) {
        printf("%d ", qtd_impares);
    }

    

}