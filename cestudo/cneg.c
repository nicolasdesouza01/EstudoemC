#include <stdio.h>

int main () {
    int numeros [5];
    int cont = 0;
    int qtd_neg [5];
    int i = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf ("%d", &numeros[i]);

        if (numeros[i] < 0) {
            qtd_neg[cont] = numeros[i];
            cont++;
        }
    }
    
    printf("\nO total de números negativos foi: %d\n", cont);
    printf("E foi: ");

    for (i = 0; i < cont; i++) {
        printf("%d ", qtd_neg[i]);
    }
    printf("\n");

    return 0;


}