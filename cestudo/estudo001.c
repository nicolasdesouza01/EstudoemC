#include <stdio.h>

int main() {
    int decisao = 0;

    do {
        printf("\n-- Bem-Vindo(a) ao sistema --\n");
        printf("1 - Abrir Config\n");
        printf("2 - Fotos\n");
        printf("3 - Testar contagem (Exemplo de FOR, BREAK e CONTINUE)\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &decisao);

        if (decisao == 1) {
            printf("Voce entrou nas configuracoes!\n");
        } 
        else if (decisao == 2) {
            printf("Voce acessou fotos!\n");
        } 
        else if (decisao == 3) {
            printf("Iniciando contagem de 1 a 10 (pulando o 5 e parando no 8):\n");
            
            for (int i = 1; i <= 10; i++) {
                if (i == 5) {
                    continue;
                }
                if (i == 8) {
                    break;
                }
                printf("%d ", i);
            }
            printf("\nContagem finalizada!\n");
        } 
        else if (decisao == 4) {
            printf("Saindo do sistema...\n");
        } 
        else {
            printf("Opcao invalida!\n");
            while (getchar() !='\n')
            continue;
        }

    } while (decisao != 4);

    return 0;
}