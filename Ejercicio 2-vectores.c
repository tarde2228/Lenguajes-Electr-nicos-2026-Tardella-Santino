#include <stdio.h>
int main() {
    int vector[5];
    int i, suma = 0;
    float promedio;
  
    printf("Ingrese %d datos para el vector:\n", 5);
    for (i=0; i<5; i++) {
        printf("Posicion %d: ", i);
        scanf("%d", &vector[i]);
        suma += vector[i]; 
    }
    printf("\nLa suma de los datos es: %d\n", suma);

    promedio = (float)suma / 5;
    printf("El promedio de los datos es: %.2f\n", promedio);
    return 0;
}
