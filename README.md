# Explicacion de codigo

## Implementación de la estructura Estudiante

define una estructura (struct) llamada estudiante que representa la información de un estudiante, incluyendo la edad, el promedio y el nombre. Luego, el código define una función imprimirEstudiante que toma un objeto de tipo estudiante como parámetro y imprime sus atributos en la consola.

Veamos el código paso a paso:

Estructura estudiante:


struct estudiante {
    int edad;
    float promedio;
    string nombre;
};
Aquí se define la estructura estudiante que tiene tres miembros: edad de tipo entero (int), promedio de tipo flotante (float) y nombre de tipo cadena de caracteres (string).

Función imprimirEstudiante:


void imprimirEstudiante(estudiante est) {
    cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << fixed << setprecision(2) << est.promedio << endl;
}
Esta función toma un objeto de tipo estudiante como parámetro y imprime sus atributos en la consola. Utiliza cout para imprimir los valores de nombre, edad y promedio, con el formato adecuado para el promedio (dos decimales fijos).

Función main:


int main() {
    struct estudiante estudiante1;
    estudiante1.edad = 16;
    estudiante1.promedio = 9.8;
    estudiante1.nombre = "Juan";
    return 0;
}
En la función main, se declara una variable estudiante1 de tipo estudiante. Luego, se asignan valores a sus miembros (edad, promedio y nombre). Finalmente, la función retorna 0, indicando que el programa se ejecutó sin errores.

Es importante mencionar que el código no incluye una llamada a la función imprimirEstudiante, por lo que no se visualizará la información del estudiante en la consola. Para imprimir la información, deberías llamar a esta función en el main o en cualquier otra parte del código, por ejemplo:


int main() {
    struct estudiante estudiante1;
    estudiante1.edad = 16;
    estudiante1.promedio = 9.8;
    estudiante1.nombre = "Juan";

    imprimirEstudiante(estudiante1);

    return 0;
}
Así, al ejecutar el programa, se imprimirá la información del estudiante Juan en la consola.

## Gestión de las materias

Este código en C++ define una estructura llamada Estudiante que contiene información sobre un estudiante, incluyendo su nombre, edad, promedio y una lista de materias en las que está inscrito. Luego, se proporcionan funciones para agregar, eliminar y mostrar las materias del estudiante, así como una función para mostrar todos los datos relevantes del estudiante. A continuación, se explica el código paso a paso:

Definición de la estructura Estudiante:


struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
};
La estructura Estudiante tiene cuatro miembros: nombre (string), edad (entero), promedio (flotante) y materias (vector de strings).

Funciones para manejar materias:

void agregarMateria(Estudiante &e, const std::string &materia): Agrega una materia al vector de materias del estudiante.
void eliminarMateria(Estudiante &e, const std::string &materia): Elimina una materia del vector de materias del estudiante.
void mostrarMaterias(const Estudiante &e): Muestra en la consola la lista de materias del estudiante.
Función mostrarEstudiante:


void mostrarEstudiante(const Estudiante &e) {
    std::cout << "Nombre: " << e.nombre << std::endl;
    std::cout << "Edad: " << e.edad << std::endl;
    std::cout << "Nota media: " << e.promedio << std::endl;
    mostrarMaterias(e);
}
Esta función muestra en la consola el nombre, la edad, el promedio y las materias del estudiante, utilizando las funciones previamente definidas.

Función main:


int main() {
    Estudiante estudiante = {"Lydia Sanchez", 20, 8.5};
    agregarMateria(estudiante, "Calculo I");
    agregarMateria(estudiante, "Algebra Lineal");
    mostrarEstudiante(estudiante);
    return 0;
}
En la función main, se crea una instancia de Estudiante llamada estudiante e se inicializa con valores específicos. Luego, se agregan dos materias al estudiante ("Calculo I" y "Algebra Lineal") utilizando la función agregarMateria. Finalmente, se llama a la función mostrarEstudiante para imprimir todos los datos del estudiante, incluyendo las materias.

Este código muestra un ejemplo simple de cómo utilizar una estructura para representar información de un estudiante y cómo manipular esa información utilizando funciones específicas.

## Registro asistencia

Este código en C++ define dos estructuras (Asistencia y Estudiante) y una clase (RegistroAsistencia) para gestionar la asistencia de un grupo de estudiantes. A continuación, se explica el código paso a paso:

Estructura Asistencia:


struct Asistencia {
    string fecha;
    string materia;
    string estado; // Puede ser "asistió", "falta" o "tardanza"
};
La estructura Asistencia tiene tres miembros que representan la fecha, la materia y el estado de la asistencia.

Estructura Estudiante con un constructor:


struct Estudiante {
    int id; // Identificador único para cada estudiante
    int edad;
    float promedio;
    string nombre;
    vector<Asistencia> asistencias; // Lista de asistencias del estudiante

    // Constructor para inicializar la estructura
    Estudiante(int id, int edad, float promedio, const string& nombre) : id(id), edad(edad), promedio(promedio), nombre(nombre) {}
};
La estructura Estudiante tiene varios miembros, incluyendo un vector de asistencias. Se proporciona un constructor que inicializa los miembros de la estructura.

Clase RegistroAsistencia:


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
La clase RegistroAsistencia contiene dos funciones estáticas. La función registrarAsistencia registra la asistencia de un estudiante creando una nueva instancia de Asistencia y agregándola al vector de asistencias del estudiante. La función mostrarAsistencia muestra en la consola la información de asistencia para un estudiante.

Función main:


int main() {
    // Crear estudiantes
    Estudiante estudiante1(1, 20, 9.5, "Juan");
    Estudiante estudiante2(2, 22, 8.7, "Maria");

    // Registrar asistencias
    RegistroAsistencia::registrarAsistencia(estudiante1, "2023-01-10", "Matemáticas", "asistió");
    RegistroAsistencia::registrarAsistencia(estudiante1, "2023-01-12", "Física", "falta");
    RegistroAsistencia::registrarAsistencia(estudiante2, "2023-01-10", "Matemáticas", "tardanza");
    RegistroAsistencia::registrarAsistencia(estudiante2, "2023-01-12", "Física", "asistió");

    // Mostrar asistencias
    RegistroAsistencia::mostrarAsistencia(estudiante1);
    RegistroAsistencia::mostrarAsistencia(estudiante2);

    return 0;
}
En la función main, se crean dos instancias de Estudiante (estudiante1 y estudiante2). Luego, se registran asistencias para estos estudiantes utilizando la clase RegistroAsistencia y se muestra la información de asistencia en la consola.

En resumen, este código demuestra cómo utilizar estructuras y clases en C++ para modelar la información de asistencia de estudiantes, permitiendo el registro y la visualización de la misma.

## Gestion de fallos


Este código en C++ demuestra el uso de excepciones personalizadas para gestionar errores específicos relacionados con el registro de asistencia de estudiantes. Aquí tienes una explicación paso a paso:

Definición de Excepciones Personalizadas:
Se han definido tres clases de excepciones personalizadas que heredan de std::invalid_argument. Estas excepciones son FechaInvalidaException, MateriaInvalidaException, y EstadoInvalidoException. Cada una tiene un constructor que recibe un mensaje y lo pasa al constructor de la clase base (std::invalid_argument).

Estructura Asistencia:
La estructura Asistencia representa la información relacionada con la asistencia de un estudiante, incluyendo la fecha, la materia y el estado (asistió, falta o tardanza).

Estructura Estudiante:
La estructura Estudiante representa la información de un estudiante, incluyendo un identificador (id), nombre y un vector de asistencias (asistencias).

Clase RegistroAsistencia:
La clase RegistroAsistencia contiene funciones estáticas para registrar y mostrar la asistencia de un estudiante. Además, incluye funciones privadas de validación con excepciones personalizadas (validarFecha, validarMateria y validarEstado).

registrarAsistencia: Registra la asistencia de un estudiante después de validar la fecha, la materia y el estado utilizando funciones privadas. Si la validación falla, lanza una excepción con un mensaje específico.

mostrarAsistencia: Muestra en la consola la información de asistencia para un estudiante.

Funciones de validación (validarFecha, validarMateria, validarEstado): Realizan la validación correspondiente y lanzan excepciones personalizadas en caso de errores.

Función main:
En el main, se crea un estudiante (estudiante1) y se intenta registrar asistencias utilizando la clase RegistroAsistencia. Si ocurre algún error, se capturan las excepciones y se imprime un mensaje de error correspondiente.

Este código proporciona un ejemplo de cómo usar excepciones personalizadas para manejar errores específicos en un programa que registra la asistencia de estudiantes. Las excepciones permiten una gestión más detallada de los errores, proporcionando mensajes específicos sobre la naturaleza del problema.

