#include <stdio.h>

void compararVectores(int v1[], int v2[], int tam) {
    int i;
    printf("\n--- RESULTADOS ---\n");
    for(i=0; i<tam; i++) {

        if(v1[i] > v2[i]) {
            printf("Posicion %d: %d es mayor y pertenece al Vector 1\n",
                   i, v1[i]);
        }
        else if(v2[i] > v1[i]) {
            printf("Posicion %d: %d es mayor y pertenece al Vector 2\n",
                   i, v2[i]);
        }
        else {
            printf("Posicion %d: Ambos tienen el mismo valor (%d)\n",
                   i, v1[i]);
        }
    }
}

int main() {

    int vector1[5], vector2[5];
    int i;

    printf("Ingrese los valores del Vector 1:\n");
    for(i=0; i<5; i++) {
        printf("Vector1[%d]: ", i);
        scanf("%d", &vector1[i]);
    }
    printf("\nIngrese los valores del Vector 2:\n");
    for(i=0; i<5; i++) {
        printf("Vector2[%d]: ", i);
        scanf("%d", &vector2[i]);
    }
    compararVectores(vector1, vector2, 5);
    return 0;
}
