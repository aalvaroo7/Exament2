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
int main(){
    struct Estudiante estudiante1;
    estudiante1.edad = 16;
    estudiante1.promedio = 9.8;
    estudiante1.nombre = "Juan"; // Asignando un valor al campo "nombre"
}