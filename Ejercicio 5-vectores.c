#include <stdio.h>

void sumaYPromedio(int v[], int N, int *suma, float *promedio) {
    int i;
    *suma = 0;
    for (i=0; i<10; i++) {
        *suma += v[i];
    }
    *promedio = (float)*suma / 10;
}
int main() {
    int vector[10];
    int i, j, aux;
    int suma;
    float promedio;

    printf("Ingrese %d valores:\n", 10);
    for (i=0; i<10; i++) {
        printf("Posicion %d: ", i);
        scanf("%d", &vector[i]);
    }
    for (i=0; i<10-1; i++) {
        for (j=0; j<10-1-i; j++) {
            if (vector[j] < vector[j + 1]) {
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
    printf("\nVector ordenado de mayor a menor:\n");
    for (i=0; i<10; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
    sumaYPromedio(vector, 10, &suma, &promedio);
    printf("\nSuma: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);
    
return 0;
}
