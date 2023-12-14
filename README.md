# Explicacion del codigo

## Estructura estudiante

Este código en C se centra en la definición y manipulación de una estructura llamada Estudiante. Aquí hay una explicación paso a paso:

Definición de la estructura Estudiante:


struct Estudiante
{
    char nombre[50];
    int edad;
    float promedio;
};
Se define una estructura llamada Estudiante que tiene tres miembros: nombre (una cadena de caracteres de hasta 50 caracteres), edad (un entero) y promedio (un número de punto flotante).

Función mostrarEstudiante:


void mostrarEstudiante(struct Estudiante est)
{
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}
Se define una función llamada mostrarEstudiante que toma un objeto de tipo Estudiante como argumento e imprime sus campos en la consola con un formato específico.

Función main:


int main()
{
    // Crear un estudiante
    struct Estudiante estudiante1 = {"Juan", 20, 9.5};

    // Llamar a la función para mostrar el estudiante
    mostrarEstudiante(estudiante1);

    return 0;
}
En la función main, se crea una instancia de Estudiante llamada estudiante1 e inicializa sus campos con valores específicos. Luego, se llama a la función mostrarEstudiante para imprimir los detalles del estudiante en la consola.

En resumen, este programa en C define una estructura Estudiante, crea una instancia de esta estructura y utiliza una función para imprimir sus campos en la consola. Es un ejemplo básico de cómo trabajar con estructuras en C.

## Gestion materias

Este código en C define una estructura llamada Estudiante que incluye información sobre un estudiante, como su edad, promedio, nombre, y una lista de materias. Además, se proporcionan funciones para mostrar información del estudiante, agregar materias a su lista y eliminar materias de la lista. Aquí está una explicación paso a paso:

Definición de la Estructura Estudiante:


struct Estudiante {
    int edad;
    float promedio;
    char nombre[50];
    char materias[10][50];  // Matriz de cadenas para las materias
    int numMaterias;        // Número de materias actualmente inscritas
};
La estructura Estudiante tiene cinco miembros: edad, promedio, nombre, materias (una matriz de cadenas para las materias) y numMaterias (el número de materias actualmente inscritas).

Función mostrarEstudiante:


void mostrarEstudiante(const struct Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);

    // Mostrar las materias
    printf("Materias inscritas: ");
    for (int i = 0; i < est->numMaterias; ++i) {
        printf("%s ", est->materias[i]);
    }
    printf("\n");
}
La función mostrarEstudiante toma un puntero a una estructura Estudiante como parámetro e imprime su información, incluyendo el nombre, edad, promedio y las materias inscritas.

Función agregarMateria:


void agregarMateria(struct Estudiante *est, const char *nuevaMateria) {
    if (est->numMaterias < 10) {
        strcpy(est->materias[est->numMaterias], nuevaMateria);
        est->numMaterias++;
    } else {
        printf("No se pueden agregar más materias.\n");
    }
}
La función agregarMateria agrega una nueva materia a la lista de materias del estudiante si hay espacio disponible (hasta un máximo de 10 materias).

Función eliminarMateria:


void eliminarMateria(struct Estudiante *est, const char *materiaAEliminar) {
    for (int i = 0; i < est->numMaterias; ++i) {
        if (strcmp(est->materias[i], materiaAEliminar) == 0) {
            // Encontramos la materia, la eliminamos moviendo las materias restantes
            for (int j = i; j < est->numMaterias - 1; ++j) {
                strcpy(est->materias[j], est->materias[j + 1]);
            }
            est->numMaterias--;
            return;
        }
    }
    printf("La materia no existe en la lista.\n");
}
La función eliminarMateria busca la materia especificada en la lista de materias del estudiante y la elimina si se encuentra. Si no se encuentra, imprime un mensaje indicando que la materia no existe.

Función main:


int main() {
    // Crear un estudiante
    struct Estudiante estudiante1 = {16, 9.8, "Juan", {}, 0};

    // Agregar materias
    agregarMateria(&estudiante1, "Matemáticas");
    agregarMateria(&estudiante1, "Física");
    agregarMateria(&estudiante1, "Historia");

    // Mostrar información del estudiante
    mostrarEstudiante(&estudiante1);

    // Eliminar una materia
    eliminarMateria(&estudiante1, "Física");

    // Mostrar información después de eliminar materia
    mostrarEstudiante(&estudiante1);

    return 0;
}
En la función main, se crea un estudiante (estudiante1), se le agregan algunas materias y luego se muestra su información. Posteriormente, se elimina una materia y se muestra la información actualizada del estudiante. Este es un ejemplo simple de cómo usar una estructura en C para representar información de un estudiante y manipular esa información mediante funciones.

## Gestion de fallos

