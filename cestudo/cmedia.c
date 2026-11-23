#include <stdio.h>

int main () {
    int v[8];
    int i = 0;
    int maior, menor = v[i];

    for (i = 0; i < 8; i++) {
        printf("Digite um número: ");
        scanf("%d", &v[i]);
        if (v[i] > maior) {
            maior = v[i];
        }
        if (v[i] < menor) {
            menor = v[i];
        }
    }


    printf("O maior número foi: %d\n", maior);
    printf("O menor número foi: %d", menor);
}