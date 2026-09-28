#include <stdio.h>

int main() {
    int matriz[3][2];
    int i, j;

    printf("Ingrese los datos de la matriz de %dx%d:\n", 3, 2);
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            printf("Fila %d, Columna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nMatriz almacenada:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
