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