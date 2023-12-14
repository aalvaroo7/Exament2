# Exament2

https://github.com/aalvaroo7/Exament2.git

## Preguntas de elección múltiple

Pregunta 1)

b) C utiliza printf y scanf mientras que C++ utiliza std::cout y std::cin.

En C++, se introdujo la biblioteca estándar (std) para proporcionar un conjunto de funciones y objetos en un espacio de nombres llamado "std". Por lo tanto, en C++, las funciones de entrada y salida estándar se encuentran en el espacio de nombres std, y se utilizan como std::cout para imprimir y std::cin para la entrada. Mientras que en C, las funciones printf y scanf son utilizadas para la salida e entrada estándar, respectivamente.

Pregunta 2)

a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.

En C++, un espacio de nombres (namespace) es una característica que permite agrupar entidades como clases, objetos, funciones y variables bajo un nombre. Esto ayuda a evitar conflictos de nombres y a organizar y estructurar el código de manera más clara. Los espacios de nombres son utilizados para evitar colisiones de nombres entre diferentes partes del código, especialmente cuando se están utilizando bibliotecas o se está trabajando en proyectos grandes.

Pregunta 3)

d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).

En programación orientada a objetos en C++, una clase es una plantilla para la creación de objetos. Define la estructura y el comportamiento de los objetos mediante la especificación de atributos (miembros de datos) y métodos (miembros de función). Una vez que has definido una clase, puedes crear instancias u objetos de esa clase, que heredan la estructura y el comportamiento definidos en la clase. La idea es encapsular datos y funciones relacionadas en un solo paquete, proporcionando así un enfoque organizado y modular para el diseño del programa.

Pregunta 4)

b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.

Los templates en C++ son una característica que permite la creación de funciones y clases genéricas. Esto significa que puedes escribir código que puede trabajar con diferentes tipos de datos sin tener que reescribir el código para cada tipo específico. Los templates son una forma de lograr la programación genérica en C++, y son ampliamente utilizados para escribir código que es independiente del tipo de datos con el que opera

## Preguntas de desarrollo de código

¿Que lenguaje elegir?

En este contexto, el equipo de desarrollo está buscando decidir qué lenguaje de programación, entre C y C++, es más adecuado para implementar el nuevo sistema de gestión académica para el "Centro Global de Estudios Avanzados" (CGEA). La información del estudiante se utilizará como parte de la estructura básica del sistema.

Para tomar una decisión informada, el equipo puede realizar una comparación detallada de las características y ventajas de ambos lenguajes. Aquí hay algunos aspectos clave a considerar:

Simplicidad y Elegancia:

C: Es un lenguaje más simple y minimalista. Si el proyecto no requiere características orientadas a objetos, C podría ser más directo.
C++: Es una extensión de C e incluye características adicionales, como la programación orientada a objetos. Si se necesitan estas características, C++ podría ser más apropiado.
Programación Orientada a Objetos (OOP):

C: No es un lenguaje orientado a objetos, por lo que no tiene las capacidades inherentes de la OOP.
C++: Ofrece soporte completo para la programación orientada a objetos. Si se planea utilizar la OOP en el sistema, C++ sería más beneficioso.
Facilidades de Gestión de Memoria:

C: Requiere una gestión manual de la memoria, lo que podría ser más propenso a errores.
C++: Aunque también permite la gestión manual, incluye características como constructores y destructores que facilitan la gestión automática de la memoria.
Librerías y Ecosistema:

C: Tiene un conjunto básico de librerías. Para tareas más específicas, podrían necesitarse librerías adicionales.
C++: Tiene un ecosistema más amplio de librerías y herramientas, lo que podría facilitar el desarrollo y la expansión futura del sistema.
Experiencia del Equipo de Desarrollo:

C: Si el equipo ya tiene experiencia significativa en C, podría acelerar el desarrollo.
C++: Si el equipo está familiarizado con la programación orientada a objetos y las características de C++, podría ser más eficiente en términos de desarrollo y mantenimiento.
Después de evaluar estos factores, el equipo puede llegar a una decisión informada basada en las necesidades específicas del proyecto, la experiencia del equipo y los objetivos a largo plazo para el sistema de gestión académica del CGEA.


## Pregunta 1)
Las principales diferencias entre los códigos en C++ y C son las siguientes:

Sintaxis de inicialización de estructuras:
En C++, se puede inicializar una estructura utilizando una lista de inicialización, como se muestra en la creación de estudiante1.
En C, la inicialización de estructuras se realiza asignando valores a cada campo en el orden en que aparecen en la definición de la estructura.
csharp
Copy code
// C++
Estudiante estudiante1 = {"Juan", 20, 9.5};
c
Copy code
// C
struct Estudiante estudiante1 = {"Juan", 20, 9.5};
Métodos en C++:
En C++, se puede definir una función miembro dentro de la propia estructura, como la función MostrarEstudiante() en el código C++.
En C, las funciones que operan en estructuras se definen por separado y toman la estructura como un parámetro.
csharp
Copy code
// C++
struct Estudiante
{
    // ...

    // Función miembro en C++
    void MostrarEstudiante()
    {
        // ...
    }
};
c
Copy code
// C
struct Estudiante
{
    // ...
};

// Función en C para mostrar el estudiante
void mostrarEstudiante(struct Estudiante est)
{
    // ...
}
Manejo de cadenas:
En C++, se utiliza el tipo std::string para la cadena de caracteres.
En C, se utiliza un array de caracteres (char[]) para representar cadenas.
csharp
Copy code
// C++
public struct Estudiante
{
    public string Nombre;
    // ...
};
c
Copy code
// C
struct Estudiante
{
    char nombre[50];
    // ...
};
Operadores de entrada/salida:
En C++, se utilizan funciones de la biblioteca estándar (std::cout, std::endl) para la entrada/salida.
En C, se utiliza la función printf para la salida.
csharp
Copy code
// C++
cout << "Nombre: " << est.Nombre << ", Edad: " << est.Edad << ", Promedio: " << est.Promedio << endl;
c
Copy code
// C
printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio)

## Pregunta 2)

Diferencias notables:

En C++, se utiliza la clase std::vector para manejar dinámicamente la lista de materias, mientras que en C se utiliza una matriz de caracteres fija (char materias[10][50]).
En C++, se utilizan funciones miembro para operar sobre la estructura, mientras que en C se utilizan funciones que toman la estructura como parámetro.
La implementación en C++ utiliza el constructor para inicializar la estructura al crear una instancia, lo cual no es posible en C.
El código en C++ aprovecha las funciones de la biblioteca estándar de C++, mientras que el código en C utiliza funciones de la biblioteca estándar de C (printf, strcpy, etc.).

## Pregunta 3)
Diferencias notables:

Cadenas de caracteres: Se usan arreglos de caracteres (char) en lugar de objetos de cadena de caracteres de C++ (std::string). Esto implica tener cuidado con la gestión del tamaño y asegurarse de que haya suficiente espacio en los arreglos.

Memoria dinámica: Se utiliza malloc y realloc para gestionar la memoria dinámica para las asistencias. En C++, la clase std::vector maneja esto automáticamente.

Funciones de cadenas: Se utilizan funciones de cadenas como strcpy para copiar cadenas de caracteres en lugar de simplemente asignarlas como en C++. Esto puede requerir una mayor atención para evitar desbordamientos de búfer.
