# algoritmica

Repositorio individual de la **Actividad 9 — “Pensar antes de programar”** de la materia
**Laboratorio de Programación** de la EEST N.º 1 “Eduardo Ader” (Vicente López, 5° año, 2026).

La actividad consiste en resolver en papel —con diagrama de flujo y prueba de escritorio—
cuatro ejercicios de razonamiento lógico y luego llevarlos a código.

## Objetivo

Desacoplar el razonamiento lógico del lenguaje de programación. Antes de escribir código,
un programador debe ser capaz de:

1. Diseñar la secuencia algorítmica con **diagramas de flujo universales**.
2. Simular la memoria RAM y el procesador en papel mediante la **prueba de escritorio** (*dry run*).
3. Entender que las **variables, condicionales, bucles, vectores y estructuras** son conceptos
   abstractos, independientes de cualquier IDE o entorno.

## Ejercicios

| # | Nombre | Conceptos |
|---|--------|-----------|
| 0 | Hola Mundo con cálculo de edad *(ejemplo guiado)* | Variables, constantes, entrada/salida |
| 1 | El sensor de aprobación | Variables, constantes (`NOTA_MINIMA = 6`) y condicionales |
| 2 | El bucle del contador de vidas | Estructuras repetitivas (`while`) |
| 3 | Registro de jugador en memoria | Estructuras / agrupaciones (`struct`) |
| 4 | Control de inventario con arreglos | Vectores y recorrido (`stock[5]`) |

## Estructura del repositorio

```
/algoritmica/
├── .gitignore        ← exclusión de binarios (*.exe, *.out, .vscode/)
├── LICENSE           ← licencia MIT escolar
├── README.md         ← esta portada
├── docs/
│   └── InformeEEST1_LPR2026_ACT09_LagunaTeo_v1.0.0.docx   ← informe APA v7
├── src/
│   ├── main.cpp
│   ├── ejercicio1.cpp
│   ├── ejercicio2.cpp
│   ├── ejercicio3.cpp
│   └── ejercicio4.cpp
└── capturas/
    └── matriz_ejecucion_*.png   ← capturas de ejecución en consola
```

### Entradas de prueba

| Programa | Entrada |
|----------|---------|
| `main.exe` | nombre y año de nacimiento (p. ej. `Ana` / `1990`) |
| `ejercicio1.exe` | Caso A: `4 8` → **APROBADO** · Caso B: `3 5` → **A INTENSIFICACIÓN** |
| `ejercicio2.exe` | sin entrada (parte de `vidas = 3`) |
| `ejercicio3.exe` | `Rothbard` / `5` / `1` → **Bienvenido al Servidor VIP** |
| `ejercicio4.exe` | sin entrada (vector `12, 0, 5, 30, 0` → alertas en posiciones 1 y 4) |

## Licencia

Distribuido bajo la licencia [MIT](LICENSE).
