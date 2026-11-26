#include <stdio.h>

#define LIN 3

#define COL 3

int main () {
    int soma = 0;
    int valori = 0;
    int valorj = 0;
    int i;
    int j;

    int mat[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};

    for (i = 0; i<LIN; i++) {
        for (j = 0; j < COL; j++) {
            if (i == j) {
                soma += mat[i][j];
            }
        }
    printf("\n");
    }

    printf("%d", soma);

            // printf("%d ", mat[i][j]);
    return 0;
}