#include <stdio.h>

struct Alumno {
    char nombre[50];
    int edad;
    int año;
};

int main() {
    struct Alumno alumnos[3];
    
    for(int i = 0; i < 3; i++) {
        printf("\nAlumno %d\n", i + 1);

        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);

        printf("Edad: ");
        scanf("%d", &alumnos[i].edad);

        printf("Año: ");
        scanf("%d", &alumnos[i].año);
    }

    printf("\n=== DATOS ORIGINALES ===\n");

    for(int i = 0; i < 3; i++) {
        printf("\nAlumno %d\n", i + 1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Año: %d\n", alumnos[i].año);
    }
    printf("\n=== MODIFICAR DATOS ===\n");

    for(int i=0; i<3; i++) {
        printf("\nAlumno %d\n", i + 1);

        printf("Nuevo nombre: ");
        scanf("%s", alumnos[i].nombre);

        printf("Nueva edad: ");
        scanf("%d", &alumnos[i].edad);

        printf("Nuevo año: ");
        scanf("%d", &alumnos[i].año);
    }
    printf("\n=== DATOS MODIFICADOS ===\n");

    for(int i=0; i<3; i++) {
        printf("\nAlumno %d\n", i + 1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Año: %d\n", alumnos[i].año);
    }

    return 0;
}
