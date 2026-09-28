#include <stdio.h>

int main() {
    int vector[5] = {10, 20, 30, 40, 50};
    int posicion;

    printf("Vector de 5 elementos.\n");
    printf("Ingrese la posicion que desea consultar (0 a 4): ");
    scanf("%d", &posicion);

    if (posicion>=0 && posicion<5) {
        printf("El valor almacenado en vector[%d] es: %d\n",
               posicion, vector[posicion]);
    } else {
        printf("Posicion invalida.\n");
    }
    return 0;
}
