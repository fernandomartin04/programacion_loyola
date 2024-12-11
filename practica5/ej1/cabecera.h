#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MAX_FILAS 30
#define MAX_COLUMNAS 30

struct Celda {
    int temperatura; // En grados Celsius
    int humedad;     // En porcentaje
    int viento;      // En km/h
};

// Funciones declaradas
void inicializarRegion(Celda region[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas);
void mostrarRegion(const Celda region[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas);
void copiarRegion(const Celda origen[MAX_FILAS][MAX_COLUMNAS], Celda destino[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas);
int calcularPromedioVecinos(const Celda region[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, int i, int j, char tipo);


