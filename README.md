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

