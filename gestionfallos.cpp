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