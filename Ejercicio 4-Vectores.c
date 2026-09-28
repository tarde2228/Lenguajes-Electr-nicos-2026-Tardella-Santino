#include <stdio.h>

int main() {
    int vector1[5], vector2[5];
    int i;
  
    printf("Ingrese los 5 valores del Vector 1:\n");
    for(i=0; i<5; i++) {
        printf("Vector1[%d]: ", i);
        scanf("%d", &vector1[i]);
    }
    printf("\nIngrese los 5 valores del Vector 2:\n");
    for(i=0; i<5; i++) {
        printf("Vector2[%d]: ", i);
        scanf("%d", &vector2[i]);
    }
    printf("\n--- RESULTADOS ---\n");

    for(i=0; i<5; i++) {
        if(vector1[i] > vector2[i]) {
            printf("Posicion %d: %d es mayor y pertenece al Vector 1\n",
                   i, vector1[i]);
        }
        else if(vector2[i] > vector1[i]) {
            printf("Posicion %d: %d es mayor y pertenece al Vector 2\n",
                   i, vector2[i]);
        }
        else {
            printf("Posicion %d: Ambos tienen el mismo valor (%d)\n",
                   i, vector1[i]);
        }
    }
    return 0;
}
