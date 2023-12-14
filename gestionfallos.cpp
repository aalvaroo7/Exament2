#include <iostream>
#include <vector>
#include <stdexcept>

// Excepción personalizada para errores de fecha
class FechaInvalidaException : public std::invalid_argument {
public:
    FechaInvalidaException(const std::string& mensaje) : std::invalid_argument(mensaje) {}
};
// Excepción personalizada para errores de materia
class MateriaInvalidaException : public std::invalid_argument {
public:
    MateriaInvalidaException(const std::string& mensaje) : std::invalid_argument(mensaje) {}
};
// Excepción personalizada para errores de estado
class EstadoInvalidoException : public std::invalid_argument {
public:
    EstadoInvalidoException(const std::string& mensaje) : std::invalid_argument(mensaje) {}
};
// Estructura Asistencia
struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado; // Puede ser "asistió", "falta" o "tardanza"
};
// Estructura Estudiante
struct Estudiante {
    int id;
    std::string nombre;
    std::vector<Asistencia> asistencias;
};
// Clase RegistroAsistencia
class RegistroAsistencia {
public:
    // Función para registrar la asistencia de un estudiante
    static void registrarAsistencia(Estudiante& estudiante, const std::string& fecha, const std::string& materia, const std::string& estado) {
        if (validarFecha(fecha) && validarMateria(materia) && validarEstado(estado)) {
            Asistencia nuevaAsistencia = {fecha, materia, estado};
            estudiante.asistencias.push_back(nuevaAsistencia);
        } else {
            throw std::invalid_argument("Error en el registro de asistencia");
        }
    }
    // Función para mostrar la asistencia de un estudiante
    static void mostrarAsistencia(const Estudiante& estudiante) {
        std::cout << "Asistencia para el estudiante " << estudiante.nombre << " (ID: " << estudiante.id << "):\n";
        for (const auto& asistencia : estudiante.asistencias) {
            std::cout << "Fecha: " << asistencia.fecha << ", Materia: " << asistencia.materia << ", Estado: " << asistencia.estado << "\n";
        }
        std::cout << "\n";
    }