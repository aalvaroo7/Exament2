#include <iostream>
#include <string>
using namespace std;
struct Estudiante {
    int edad;
    float promedio;
    string nombre;
};
void mostrarestudiante(Estudiante est){
cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << endl;
}
int main(){
struct Estudiante estudiante1;
    estudiante1.edad = 16;
    estudiante1.promedio = 9.8;
    estudiante1.nombre = "Juan"; // Asignando un valor al campo "nombre"
}