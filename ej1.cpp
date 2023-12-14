#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct Estudiante {
char nombre [50];
int edad;
float promedio;
};
void mostrarestudiante(Estudiante est){
cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << endl;
}