#include "problema.h"

// Definiciones de color para este archivo
#define RESET   "\033[0m"
#define ROJO    "\033[31m"
#define VERDE   "\033[32m"

// Helper: Convierte secuencia de 0s y 1s en lista de tamaños de bloques
vector<int> obtenerBloques(const vector<int>& linea) {
    vector<int> bloques;
    int contador = 0;
    for (int val : linea) {
        if (val == 1) {
            contador++;
        } else {
            if (contador > 0) {
                bloques.push_back(contador);
                contador = 0;
            }
        }
    }
    if (contador > 0) {
        bloques.push_back(contador);
    }
    return bloques;
}

bool Problema::esLineaValida(const vector<int>& linea, const vector<int>& pistas, bool esParcial) {
    vector<int> bloques = obtenerBloques(linea);

    // 1. VALIDACIÓN DE CANTIDAD DE BLOQUES
    // Si hay más bloques de los permitidos, es inválido.
    if (bloques.size() > pistas.size()) return false;

    // Si la línea está completa (no parcial), debe tener EXACTAMENTE los bloques pedidos.
    if (!esParcial && bloques.size() != pistas.size()) return false;

    // 2. VALIDACIÓN DE CADA BLOQUE
    for (size_t i = 0; i < bloques.size(); i++) {
        // Un bloque está "cerrado" si:
        // - No es el último bloque encontrado.
        // - Es el último, pero la línea termina en 0 (espacio).
        // - La línea no es parcial (estamos al final).
        bool esUltimo = (i == bloques.size() - 1);
        bool terminaEnBlanco = (linea.back() == 0);
        bool bloqueCerrado = !esUltimo || terminaEnBlanco || !esParcial;

        if (bloqueCerrado) {
            // Bloque cerrado: debe coincidir exactamente con la pista.
            if (bloques[i] != pistas[i]) return false;
        } else {
            // Bloque abierto (último y en construcción):
            // No puede superar el tamaño de la pista.
            if (bloques[i] > pistas[i]) return false;
        }
    }

    return true;
}



bool Problema::validarParcial(const Solucion& s, int fila, int col) {
    // Validamos la fila hasta la columna actual
    vector<int> lineaF;
    for (int j = 0; j <= col; j++) {
        lineaF.push_back(s.tablero[fila][j].valor);
    }
    // Es parcial si no hemos llegado al final de la fila
    bool filaEsParcial = (col < columnas - 1);
    if (!esLineaValida(lineaF, filasP[fila].bloques, filaEsParcial)) return false;

    // Validamos la columna hasta la fila actual
    vector<int> lineaC;
    for (int i = 0; i <= fila; i++) {
        lineaC.push_back(s.tablero[i][col].valor);
    }
    // Es parcial si no hemos llegado al final de la columna
    bool colEsParcial = (fila < filas - 1);
    if (!esLineaValida(lineaC, columnasP[col].bloques, colEsParcial)) return false;

    return true;
}

void Problema::actualizaMejorSolucion(Estado *e) {
    soluciones.push_back(*(e->sol));
}

void Problema::bt(Estado *e) {
    // Si ya encontramos solucion, paramos (poda global)
    if (!soluciones.empty()) return; 

    if (e->esFinal()) {
        actualizaMejorSolucion(e);
        return;
    }

    int fila = e->posicion / this->columnas;
    int col  = e->posicion % this->columnas;

    vector<int> alts = e->getAlternativas();

    for (int valor : alts) {
        e->avanza(valor);

        // Validamos solo lo que acabamos de poner
        if (validarParcial(*(e->sol), fila, col)) {
            bt(e);
            if (!soluciones.empty()) return; 
        }

        e->retrocede(valor);
    }
}

void Problema::ejecutaBacktracking() {
    soluciones.clear();
    solucionBase = Solucion(filas, columnas);
    Estado e(&solucionBase); 
    
    bt(&e);

    if (soluciones.empty()) {
        cout << ROJO << "No se encontro solucion (Revisa las pistas).\n" << RESET;
    } else {
        cout << VERDE << "Solucion encontrada:\n" << RESET;
        soluciones[0].imprimir();
    }
}
