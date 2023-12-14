#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura Estudiante
struct Estudiante {
    int edad;
    float promedio;
    char nombre[50];
    char materias[10][50];  // Matriz de cadenas para las materias
    int numMaterias;        // Número de materias actualmente inscritas
};
// Función para mostrar al estudiante
void mostrarEstudiante(const struct Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);

    // Mostrar las materias
    printf("Materias inscritas: ");
    for (int i = 0; i < est->numMaterias; ++i) {
        printf("%s ", est->materias[i]);
    }
    printf("\n");
}
// Función para agregar una materia
void agregarMateria(struct Estudiante *est, const char *nuevaMateria) {
    if (est->numMaterias < 10) {
        strcpy(est->materias[est->numMaterias], nuevaMateria);
        est->numMaterias++;
    } else {
        printf("No se pueden agregar más materias.\n");
    }
}