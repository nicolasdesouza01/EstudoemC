#include <stdio.h>

int main() {
    int numeros[6];
    int i;
    int soma = 0;
    float media;

    for (i = 0; i < 6; i++) {
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = (float)soma / 6;

    printf("\nSoma total: %d\n", soma);
    printf("Media: %.2f\n", media);

    printf("Numeros maiores que a media:\n");
    for (i = 0; i < 6; i++) {
        if (numeros[i] > media) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    return 0;
}