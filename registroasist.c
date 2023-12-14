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
