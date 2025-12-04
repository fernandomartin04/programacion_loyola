#include "estado.h"
#include "solucion.h"
#include "problema.h"

// Constructor
Estado::Estado(Solucion *s) {
    this->sol = s;
    this->posicion = 0;
}

bool Estado::esFinal() {
    return this->posicion == (sol->filas * sol->columnas);
}

vector<int> Estado::getAlternativas() {
    vector<int> alternativas;

    // Alternativas: 0 (en blanco) y 1 (pintado)
    alternativas.push_back(0);
    alternativas.push_back(1);

    return alternativas;
}

void Estado::avanza(int valor) {
    int fila = posicion / sol->columnas;
    int col  = posicion % sol->columnas;

    sol->tablero[fila][col].valor = valor;
    posicion++;
}

void Estado::retrocede(int /* valor */) {
    posicion--;

    int fila = posicion / sol->columnas;
    int col  = posicion % sol->columnas;

    sol->tablero[fila][col].valor = 0;
}
