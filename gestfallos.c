#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura Asistencia
struct Asistencia {
    char fecha[11];
    char materia[50];
    char estado[20]; // Puede ser "asistió", "falta" o "tardanza"
};

// Estructura Estudiante
struct Estudiante {
    int id;
    char nombre[50];
    struct Asistencia asistencias[100]; // Capacidad para 100 asistencias
    int numAsistencias; // Número actual de asistencias
};

// Funciones de validación
int validarFecha(const char *fecha) {
    // Implementa la lógica de validación de fecha según tus requisitos
    // Por ejemplo, puedes verificar si la fecha tiene el formato correcto.
    if (strlen(fecha) != 10) {
        return 0; // Formato de fecha inválido
    }
    return 1; // Fecha válida
}

int validarMateria(const char *materia) {
    // Implementa la lógica de validación de materia según tus requisitos
    // Por ejemplo, puedes verificar si la materia está registrada.
    if (strlen(materia) == 0) {
        return 0; // Materia inválida
    }
    return 1; // Materia válida
}

int validarEstado(const char *estado) {
    // Implementa la lógica de validación de estado según tus requisitos
    // Por ejemplo, puedes verificar si el estado es válido.
    if (strcmp(estado, "asistió") != 0 && strcmp(estado, "falta") != 0 && strcmp(estado, "tardanza") != 0) {
        return 0; // Estado inválido
    }
    return 1; // Estado válido
}
// Función para registrar la asistencia de un estudiante
int registrarAsistencia(struct Estudiante *estudiante, const char *fecha, const char *materia, const char *estado) {
    if (validarFecha(fecha) && validarMateria(materia) && validarEstado(estado)) {
        if (estudiante->numAsistencias < 100) {
            struct Asistencia nuevaAsistencia;
            strcpy(nuevaAsistencia.fecha, fecha);
            strcpy(nuevaAsistencia.materia, materia);
            strcpy(nuevaAsistencia.estado, estado);

            estudiante->asistencias[estudiante->numAsistencias++] = nuevaAsistencia;
            return 1; // Asistencia registrada con éxito
        } else {
            return -1; // No hay espacio para más asistencias
        }
    } else {
        return 0; // Error en el registro de asistencia
    }
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
