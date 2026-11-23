#include <stdio.h>

int main () {
    int lidos [6];
    int mut3 [6];
    int qtd_mut3 = 0;
    int i = 0;

    for (i = 0; i < 6; i ++) {
        printf("Digite um número: \n");
        scanf("%d", &lidos[i])

        if (lidos[i] % 3 == 0) {
            mut3[qtd_mut3] = lidos[i];
            qtd_mut3++;
        }
    }

    printf("A Quantidade total de múltiplos de 3 é: %d\n", qtd_mut3);
    
    
    for (i = 0; i < qtd_mut3; i++) {
        printf("%d ", mut3[i]);
    }
    printf("\n");

    return 0;
}