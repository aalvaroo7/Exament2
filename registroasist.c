#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Asistencia
struct Asistencia {
    char fecha[11];  // Considerando "YYYY-MM-DD" más el carácter nulo
    char materia[50];
    char estado[20];  // Puede ser "asistió", "falta" o "tardanza"
};
// Definición de la estructura Estudiante
struct Estudiante {
    int id;      // Identificador único para cada estudiante
    int edad;
    float promedio;
    char nombre[50];
    struct Asistencia *asistencias;  // Lista de asistencias del estudiante
    int numAsistencias;              // Número de asistencias registradas
};
// Función para registrar la asistencia de un estudiante
void registrarAsistencia(struct Estudiante *estudiante, const char *fecha, const char *materia, const char *estado) {
    estudiante->asistencias = realloc(estudiante->asistencias, (estudiante->numAsistencias + 1) * sizeof(struct Asistencia));

    strcpy(estudiante->asistencias[estudiante->numAsistencias].fecha, fecha);
    strcpy(estudiante->asistencias[estudiante->numAsistencias].materia, materia);
    strcpy(estudiante->asistencias[estudiante->numAsistencias].estado, estado);

    estudiante->numAsistencias++;
}
// Función para mostrar la asistencia de un estudiante
void mostrarAsistencia(const struct Estudiante *estudiante) {
    printf("Asistencia para el estudiante %s (ID: %d):\n", estudiante->nombre, estudiante->id);
    for (int i = 0; i < estudiante->numAsistencias; ++i) {
        printf("Fecha: %s, Materia: %s, Estado: %s\n", estudiante->asistencias[i].fecha,
               estudiante->asistencias[i].materia, estudiante->asistencias[i].estado);
    }
    printf("\n");
}
int main() {
    // Crear estudiantes
    struct Estudiante estudiante1 = {1, 20, 9.5, "Juan", NULL, 0};
    struct Estudiante estudiante2 = {2, 22, 8.7, "Maria", NULL, 0};

    // Registrar asistencias
    registrarAsistencia(&estudiante1, "2023-01-10", "Matemáticas", "asistió");
    registrarAsistencia(&estudiante1, "2023-01-12", "Física", "falta");
    registrarAsistencia(&estudiante2, "2023-01-10", "Matemáticas", "tardanza");
    registrarAsistencia(&estudiante2, "2023-01-12", "Física", "asistió");

    // Mostrar asistencias
    mostrarAsistencia(&estudiante1);
    mostrarAsistencia(&estudiante2);

    // Liberar memoria de asistencias
    free(estudiante1.asistencias);
    free(estudiante2.asistencias);

    return 0;
}

