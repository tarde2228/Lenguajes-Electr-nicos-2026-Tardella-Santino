#include <stdio.h>
int main() {
    int vector[5];
    int i;

    printf("Ingrese %d datos para el vector:\n", 5);
    for (i=0; i<5; i++) {
        printf("Posicion %d: ", i);
        scanf("%d", &vector[i]);
    }

    printf("\nDatos del vector:\n");
    for (i=0; i<5; i++) {
        printf("vector[%d] = %d\n", i, vector[i]);
    }
    return 0;
}
