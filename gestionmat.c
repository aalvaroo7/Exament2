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
// Función para eliminar una materia
void eliminarMateria(struct Estudiante *est, const char *materiaAEliminar) {
    for (int i = 0; i < est->numMaterias; ++i) {
        if (strcmp(est->materias[i], materiaAEliminar) == 0) {
            // Encontramos la materia, la eliminamos moviendo las materias restantes
            for (int j = i; j < est->numMaterias - 1; ++j) {
                strcpy(est->materias[j], est->materias[j + 1]);
            }
            est->numMaterias--;
            return;
        }
    }
    printf("La materia no existe en la lista.\n");
}
int main() {
    // Crear un estudiante
    struct Estudiante estudiante1 = {16, 9.8, "Juan", {}, 0};

    // Agregar materias
    agregarMateria(&estudiante1, "Matemáticas");
    agregarMateria(&estudiante1, "Física");
    agregarMateria(&estudiante1, "Historia");

    // Mostrar información del estudiante
    mostrarEstudiante(&estudiante1);

    // Eliminar una materia
    eliminarMateria(&estudiante1, "Física");

    // Mostrar información después de eliminar materia
    mostrarEstudiante(&estudiante1);

    return 0;
}