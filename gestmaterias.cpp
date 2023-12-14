#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Estructura Estudiante con un constructor
struct Estudiante {
    int edad;
    float promedio;
    string nombre;
    vector<string> materias;  // Lista de materias en las que está inscrito

    // Constructor para inicializar la estructura
    Estudiante(int edad, float promedio, const string& nombre) : edad(edad), promedio(promedio), nombre(nombre) {}
};

// Funciones como métodos de la estructura
void mostrarEstudiante(const Estudiante& est) {
    cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << endl;

    // Mostrar las materias
    cout << "Materias inscritas: ";
    for (const auto& materia : est.materias) {
        cout << materia << " ";
    }
    cout << endl;
}

void agregarMateria(Estudiante& est, const string& nuevaMateria) {
    est.materias.push_back(nuevaMateria);
}

void eliminarMateria(Estudiante& est, const string& materiaAEliminar) {
    // Utilizar la función erase y remove_if para eliminar la materia
    est.materias.erase(remove_if(est.materias.begin(), est.materias.end(),
                                 [&](const string& materia) { return materia == materiaAEliminar; }),
                       est.materias.end());
}

int main() {
    // Utilizar el constructor para inicializar el estudiante
    Estudiante estudiante1(16, 9.8, "Juan");

    // Agregar materias
    agregarMateria(estudiante1, "Matemáticas");
    agregarMateria(estudiante1, "Física");
    agregarMateria(estudiante1, "Historia");

    // Mostrar información del estudiante
    mostrarEstudiante(estudiante1);

    // Eliminar una materia
    eliminarMateria(estudiante1, "Física");

    // Mostrar información después de eliminar materia
    mostrarEstudiante(estudiante1);

    return 0;
}