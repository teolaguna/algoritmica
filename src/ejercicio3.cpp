/*
 * Laboratorio de Programación — EEST N.º 1 "Eduardo Ader"
 * Actividad 9 — Ejercicio 3: "Registro de Jugador en Memoria"
 * Temas: Estructuras / Agrupaciones (struct).
 */

#include <iostream>
#include <string>


struct Jugador {
    std::string nickname;  
    int nivel;             
    bool esVIP;            
};

int main() {

    Jugador jugador;

    int esVIPEntrada = 0;  

    std::cout << "Ingrese el nickname: ";
    std::getline(std::cin, jugador.nickname);

    std::cout << "Ingrese el nivel: ";
    std::cin >> jugador.nivel;

    std::cout << "¿Es VIP? (1 = Verdadero / 0 = Falso): ";
    std::cin >> esVIPEntrada;

    jugador.esVIP = (esVIPEntrada != 0);

    if (jugador.esVIP) {
        std::cout << "Bienvenido al Servidor VIP, "
                  << jugador.nickname << std::endl;
    } else {
        std::cout << "Bienvenido al Servidor Estándar, "
                  << jugador.nickname << std::endl;
    }

    std::cout << "---- Bloque RAM del objeto Jugador ----" << std::endl;
    std::cout << "nickname : " << jugador.nickname << std::endl;
    std::cout << "nivel    : " << jugador.nivel << std::endl;
    std::cout << "esVIP    : " << (jugador.esVIP ? "Verdadero" : "Falso")
              << std::endl;

    return 0;
}
