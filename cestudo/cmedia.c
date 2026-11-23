#include <stdio.h>

int main() {
    int i;
    int original[6];
    int pares[6];
    int impares[6];
    int cont_pares = 0;
    int cont_impares = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &original[i]);

        if (original[i] % 2 == 0) {
            pares[cont_pares] = original[i];
            cont_pares++;
        } else {
            impares[cont_impares] = original[i];
            cont_impares++;
        }
    }

    printf("\nPares (%d): ", cont_pares);
    for (i = 0; i < cont_pares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nImpares (%d): ", cont_impares);
    for (i = 0; i < cont_impares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}