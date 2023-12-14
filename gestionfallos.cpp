#include <iostream>
#include <stdexcept>
#include <vector>
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
private:
    // Funciones de validación con excepciones personalizadas
    static bool validarFecha(const std::string& fecha) {
        // Implementa la lógica de validación de fecha según tus requisitos
        // Por ejemplo, puedes verificar si la fecha tiene el formato correcto.
        if (fecha.length() != 10) {
            throw FechaInvalidaException("Formato de fecha inválido");
        }
        return true; // Cambiar según la implementación real
    }
    static bool validarMateria(const std::string& materia) {
        // Implementa la lógica de validación de materia según tus requisitos
        // Por ejemplo, puedes verificar si la materia está registrada.
        if (materia.empty()) {
            throw MateriaInvalidaException("La materia no puede estar vacía");
        }
        return true; // Cambiar según la implementación real
    }
    static bool validarEstado(const std::string& estado) {
        // Implementa la lógica de validación de estado según tus requisitos
        // Por ejemplo, puedes verificar si el estado es válido.
        if (estado != "asistió" && estado != "falta" && estado != "tardanza") {
            throw EstadoInvalidoException("Estado de asistencia inválido");
        }
        return true; // Cambiar según la implementación real
    }
};
int main() {
    // Ejemplo de uso con excepciones personalizadas
    Estudiante estudiante1 = {1, "Juan", {}};

    try {
        RegistroAsistencia::registrarAsistencia(estudiante1, "2023-01-10", "Matemáticas", "asistió");
        RegistroAsistencia::registrarAsistencia(estudiante1, "2023-01-12", "Física", "falta");
        RegistroAsistencia::mostrarAsistencia(estudiante1);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << "\n";
    } catch (const FechaInvalidaException& e) {
        std::cerr << "Error de fecha: " << e.what() << "\n";
    } catch (const MateriaInvalidaException& e) {
        std::cerr << "Error de materia: " << e.what() << "\n";
    } catch (const EstadoInvalidoException& e) {
        std::cerr << "Error de estado: " << e.what() << "\n";
    }

    return 0;
}