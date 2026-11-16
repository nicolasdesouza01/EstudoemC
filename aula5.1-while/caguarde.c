#include <stdio.h>

int main () {
    int fav = 0;
    int cont = 0;

    printf("Quantos números você quer que apareça: [números inteiros]");
    scanf("%d", &fav);

    while (fav > cont) {
        printf("Aguarde(%d)...\n", cont+1);
        cont++;
    }

    printf("Todos os números contados!");

    return 0;
}