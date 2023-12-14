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
// Clase RegistroAsistencia que administra las asistencias para un grupo de estudiantes
class RegistroAsistencia {
public:
    // Función para registrar la asistencia de un estudiante
    static void registrarAsistencia(Estudiante& estudiante, const string& fecha, const string& materia, const string& estado) {
        Asistencia nuevaAsistencia = {fecha, materia, estado};
        estudiante.asistencias.push_back(nuevaAsistencia);
    }

    // Función para mostrar la asistencia de un estudiante
    static void mostrarAsistencia(const Estudiante& estudiante) {
        cout << "Asistencia para el estudiante " << estudiante.nombre << " (ID: " << estudiante.id << "):" << endl;
        for (const auto& asistencia : estudiante.asistencias) {
            cout << "Fecha: " << asistencia.fecha << ", Materia: " << asistencia.materia << ", Estado: " << asistencia.estado << endl;
        }
        cout << endl;
    }
};