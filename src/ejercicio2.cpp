/*
 * Laboratorio de Programación — EEST N.º 1 "Eduardo Ader"
 * Actividad 9 — Ejercicio 2: "El Bucle del Contador de Vidas"
 * Temas: Estructuras Repetitivas (Iteraciones).
 */

#include <iostream>

int main() {

    int vidas = 3;

    while (vidas > 0) {
        std::cout << "Jugador activo. Vidas restantes: " << vidas << std::endl;

        vidas = vidas - 1;
    }

    std::cout << "GAME OVER" << std::endl;

    return 0;
}
