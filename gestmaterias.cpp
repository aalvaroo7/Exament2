#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Estudiante {
    int edad;
    float promedio;
    string nombre;
};
void mostrarestudiante(Estudiante est) {
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
int main(){
    struct Estudiante estudiante1;
    estudiante1.edad = 16;
    estudiante1.promedio = 9.8;
    estudiante1.nombre = "Juan"; // Asignando un valor al campo "nombre"
}