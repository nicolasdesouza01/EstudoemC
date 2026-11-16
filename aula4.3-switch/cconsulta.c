#include <stdio.h>

int main () {
    int ficha = 0;

    printf("Qual consulta você se aplica: \n");
    printf("Infantil (Digite 1)\n");
    printf("Adulto (digite 2)\n");
    printf("Emergência (Digite 3)\n");
    scanf("%d", &ficha);
    
    switch (ficha)
    {
    case 1:
        printf("Você escolheu Infantil, Aguarde!");
        break;

        case 2:
        printf("Você escolheu Adulto, Aguarde!");
        break;
        
        case 3:
        printf("Você escolheu Emergência, Socorro a caminho!");
        break;
    
    default:
        printf("Escolha uma opção válida!");
        break;
    }
    
    return 0;
}