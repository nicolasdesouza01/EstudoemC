#include <stdio.h>

int main () {
    int idade = 0;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if (idade > 17) {
        printf("Você é maior de idade");
    } else {
        printf("Você é menor de idade");
    }

    return 0;
}