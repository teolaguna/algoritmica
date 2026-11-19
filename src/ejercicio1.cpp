/*
 * Laboratorio de Programación — EEST N.º 1 "Eduardo Ader"
 * Actividad 9 — Ejercicio 1: "El Sensor de Aprobación"
 * Temas: Variables, Constantes y Condicionales.
 */

#include <iostream>

int main() {
    
    const double NOTA_MINIMA = 6.0;
   
    double nota1 = 0.0;
    double nota2 = 0.0;

    double promedio = 0.0;

    std::cout << "Ingrese la nota del Primer Cuatrimestre: ";
    std::cin >> nota1;

    std::cout << "Ingrese la nota del Segundo Cuatrimestre: ";
    std::cin >> nota2;

    promedio = (nota1 + nota2) / 2.0;

    std::cout << "Nota 1: " << nota1 << std::endl;
    std::cout << "Nota 2: " << nota2 << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;

    if (promedio >= NOTA_MINIMA) {
        std::cout << "APROBADO" << std::endl;
    } else {
        std::cout << "A INTENSIFICACIÓN" << std::endl;
    }

    return 0;
}
