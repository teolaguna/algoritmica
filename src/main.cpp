/*
 * Laboratorio de Programación — EEST N.º 1 "Eduardo Ader"
 * Actividad 9: "Pensar antes de programar"
 * Ejercicio 0 (Ejemplo guiado): "Hola Mundo" personalizado con cálculo de edad.
 *
 */

#include <iostream>
#include <string>

int main() {
    // Declaración de variables
    std::string nombre;
    int anioNacimiento = 0;
    int edad = 0;

    const int ANIO_ACTUAL = 2026;

    // Entrada de datos
    std::cout << "Ingrese su nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingrese su año de nacimiento: ";
    std::cin >> anioNacimiento;

    // Proceso
    edad = ANIO_ACTUAL - anioNacimiento;

    // Salida
    std::cout << "Hola " << nombre
              << ", tu edad estimada en " << ANIO_ACTUAL
              << " es: " << edad << " años." << std::endl;

    return 0;
}
