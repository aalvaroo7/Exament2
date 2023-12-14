#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Estructura Asistencia
struct Asistencia {
    string fecha;
    string materia;
    string estado; // Puede ser "asistió", "falta" o "tardanza"
};
// Estructura Estudiante con un constructor
struct Estudiante {
    int id; // Identificador único para cada estudiante
    int edad;
    float promedio;
    string nombre;
    vector<Asistencia> asistencias; // Lista de asistencias del estudiante

    // Constructor para inicializar la estructura
    Estudiante(int id, int edad, float promedio, const string& nombre) : id(id), edad(edad), promedio(promedio), nombre(nombre) {}
};