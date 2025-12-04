#include "estado.h"
#include "solucion.h"
#include "problema.h" 

Estado::Estado(Solucion *s, Problema *p) {
    this->sol = s;
    this->prob = p; 
    this->posicion = 0;
}

bool Estado::esFinal() {
    return this->posicion == (sol->filas * sol->columnas);
}

vector<int> Estado::getAlternativas() {
    vector<int> alternativas;
    
    int fila = posicion / sol->columnas;
    int col  = posicion % sol->columnas;

    int restriccion = prob->tableroInicial[fila][col];

    if (restriccion == -1) {
        alternativas.push_back(0);
        alternativas.push_back(1);
    } else {
        alternativas.push_back(restriccion);
    }
    return alternativas;
}

void Estado::avanza(int valor) {
    int fila = posicion / sol->columnas;
    int col  = posicion % sol->columnas;

    sol->tablero[fila][col].valor = valor;
    posicion++;
}

void Estado::retrocede(int /*valor*/) {
    posicion--;

    int fila = posicion / sol->columnas;
    int col  = posicion % sol->columnas;

    sol->tablero[fila][col].valor = 0;
}
