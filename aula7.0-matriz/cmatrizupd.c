#include <stdio.h>

#define LIN 3

#define COL 3

int main () { 
    int i;
    int j;
    // Forma de declarar padrão e de fácil compreensão

    // int mat[3][3];

    // mat[0][0] = 1;
    // mat[0][1] = 2;
    // mat[0][2] = 3;

    // mat[1][0] = 4;
    // mat[1][1] = 5;
    // mat[1][2] = 6;

    // mat[2][0] = 7;
    // mat[2][1] = 8;
    // mat[2][2] = 9;

    // Forma de declarar aprimorada
    int mat[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};

    printf("Imprima a primeira linha: \n");

    printf("%d, %d, %d \n", mat[0][0], mat[0][1], mat[0][2]);


    printf("\nPrimeira linha automática: \n");

    for (i = 0; i < LIN; i ++) {
        printf("%d ", mat[0][i]);
    }
    

    printf("\nAgora tudo automático: \n");

    for (i = 0; i<LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}