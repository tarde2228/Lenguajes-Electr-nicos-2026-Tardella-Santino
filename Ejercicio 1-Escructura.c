#include <stdio.h>

struct Alumno {
    char nombre[50];
    int edad;
    int año;
};

int main() {
    struct Alumno alumno = {"Juan", 18, 1};

    printf("=== DATOS ORIGINALES ===\n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Edad: %d\n", alumno.edad);
    printf("Año: %d\n", alumno.año);

    printf("\n=== MODIFICAR DATOS ===\n");

    printf("Nuevo nombre: ");
    scanf("%s", alumno.nombre);

    printf("Nueva edad: ");
    scanf("%d", &alumno.edad);

    printf("Nuevo año: ");
    scanf("%d", &alumno.año);

    printf("\n=== DATOS MODIFICADOS ===\n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Edad: %d\n", alumno.edad);
    printf("Año: %d\n", alumno.año);

    return 0;
}
