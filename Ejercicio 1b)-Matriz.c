#include <stdio.h>

int main() {
    int matriz[2][3][2];
    int p, i, j;

    printf("Ingrese los datos de la matriz de %dx%dx%d:\n", 2, 3, 2);
    for (p=0; p<2; p++) {
        for (i=0; i<3; i++) {
            for (j=0; j<2; j++) {
                printf("Plano %d, Fila %d, Columna %d: ", p, i, j);
                scanf("%d", &matriz[p][i][j]);
            }
        }
    }
    printf("\nMatriz almacenada:\n");
    for (p=0; p<2; p++) {
        printf("\nPlano %d:\n", p);
        for (i=0; i<3; i++) {
            for (j=0; j<2; j++) {
                printf("%d\t", matriz[p][i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

