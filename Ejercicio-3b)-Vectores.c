#include <stdio.h>

int main() {
    int vector[5] = {10, 20, 30, 40, 50};
    int opcion, posicion;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Ver un dato del vector\n");
        printf("2. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese la posicion que desea consultar (0 a 4): ");
                scanf("%d", &posicion);

                if(posicion >= 0 && posicion < 5) {
                    printf("vector[%d] = %d\n", posicion, vector[posicion]);
                } else {
                    printf("Posicion invalida.\n");
                }
                break;
            case 2:
                printf("Fin del programa.\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while(opcion != 2);
    return 0;
}
