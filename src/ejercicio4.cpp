/*
 * Laboratorio de Programación — EEST N.º 1 "Eduardo Ader"
 * Actividad 9 — Ejercicio 4: "Control de Inventario con Arreglos"
 * Temas: Vectores (arreglos) y Recorrido.
 *
 */

#include <iostream>

int main() {
    int stock[5] = {12, 0, 5, 30, 0};

    int i = 0;

    std::cout << "Indice: ";
    for (i = 0; i < 5; i++) {
        std::cout << "[" << i << "] ";
    }
    std::cout << std::endl;

    std::cout << "Stock : ";
    for (i = 0; i < 5; i++) {
        std::cout << "[" << stock[i] << "] ";
    }
    std::cout << std::endl;

    i = 0;
    while (i < 5) {
        if (stock[i] == 0) {
            std::cout << "ALERTA: Sin stock en la posición " << i << std::endl;
        }

        i = i + 1; 
    }

    std::cout << "Fin del recorrido: se analizaron 5 posiciones." << std::endl;

    return 0;
}
