# Programación Bajo Plataformas Abiertas — Laboratorio 5

# Laboratorio 5 — Lista enlazada (C)

Descripción
- Proyecto en C que implementa una lista enlazada simple con operaciones básicas: insertar (inicio, final, posición), eliminar, buscar, imprimir y liberar memoria.
- Estructura:
  - src/main.c — programa de prueba / interfaz mínima.
  - src/lista.c — implementación de la lista.
  - include/lista.h — declaraciones y tipos públicos.
  - Makefile — reglas para compilar y limpiar.

Requisitos
- gcc, make
- Linux (comandos indicados asumen shell bash)

Compilar
Desde la raíz del repositorio:
```sh
cd laboratorio_5
make
# Genera el ejecutable: laboratorio_5/main
```

Ejecutar
- Ejecutar desde la carpeta del laboratorio:
```sh
./main
```
- O desde la raíz del repositorio:
```sh
./laboratorio_5/main
```
(Revisar src/main.c para los detalles del comportamiento/entradas esperadas.)

Limpiar
```sh
make clean
# o desde la raíz:
make -C laboratorio_5 clean
```
