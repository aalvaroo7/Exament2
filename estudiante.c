#include <stdio.h>

// Definición de la estructura Estudiante
struct Estudiante
{
    char nombre[50];
    int edad;
    float promedio;
};
// Función para mostrar todos los campos de la estructura
void mostrarEstudiante(struct Estudiante est)
{
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}
int main()
{
    // Crear un estudiante
    struct Estudiante estudiante1 = {"Juan", 20, 9.5};

    // Llamar a la función para mostrar el estudiante
    mostrarEstudiante(estudiante1);

    return 0;
}