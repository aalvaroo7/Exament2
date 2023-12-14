#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Asistencia
struct Asistencia {
    char fecha[11];  // Considerando "YYYY-MM-DD" más el carácter nulo
    char materia[50];
    char estado[20];  // Puede ser "asistió", "falta" o "tardanza"
};
