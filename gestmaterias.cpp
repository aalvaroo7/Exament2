#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Definición estructura de estudiante

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
};

// Añadimos funciones para manejar materias

void agregarMateria(Estudiante &e, const std::string &materia) {
    e.materias.push_back(materia);
}

void eliminarMateria(Estudiante &e, const std::string &materia) {
    auto it = std::find(e.materias.begin(), e.materias.end(), materia);
    if (it != e.materias.end()) {
        e.materias.erase(it);
    }
}

void mostrarMaterias(const Estudiante &e) {
    std::cout << "Materias de " << e.nombre << ":" << std::endl;
    for (const auto &materia : e.materias) {
        std::cout << " - " << materia << std::endl;
    }
}

// Ahora agregamos funcion donde se muestran los datos del estudiante

void mostrarEstudiante(const Estudiante &e) {
    std::cout << "Nombre: " << e.nombre << std::endl;
    std::cout << "Edad: " << e.edad << std::endl;
    std::cout << "Nota media: " << e.promedio << std::endl;
    mostrarMaterias(e);
}

int main() {
    // Volvemos a crear y a inicializar una instancia de Estudiante

    Estudiante estudiante = {"Lydia Sanchez", 20, 8.5};

    // Agregamos materias al estudiante

    agregarMateria(estudiante, "Calculo I");
    agregarMateria(estudiante, "Algebra Lineal");

    // Y por último mostramos los datos del estudiante
    mostrarEstudiante(estudiante);

        return 0;
}