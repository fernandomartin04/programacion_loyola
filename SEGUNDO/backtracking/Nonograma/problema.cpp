#include "problema.h"

// Definiciones de color para este archivo
#define RESET   "\033[0m"
#define ROJO    "\033[31m"
#define VERDE   "\033[32m"
#define GRIS    "\033[90m"
#define AZUL    "\033[34m"
#define AMARILLO "\033[33m"

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

//Muestra el tablero actual con las restricciones fijas
void Problema::mostrarInfoInicial() {
    cout << "\n" << AZUL << "=== TABLERO INICIAL (RESTRICCIONES APLICADAS) ===" << RESET << "\n\n";

    // Cabecera simple de columnas (opcional, para referencia visual)
    cout << "     ";
    for(int k=0; k<columnas; k++) {
        cout << GRIS << (k%10) << "  " << RESET;
    }
    cout << "\n";

    cout << "     ";
    for(int k=0; k<columnas; k++) cout << "---";
    cout << "\n";

    for (int i = 0; i < filas; i++) {
        // Imprimir índice de fila minimalista
        cout << AMARILLO << setw(2) << i << " | " << RESET;
        
        // Imprimir fila del tablero inicial
        for (int j = 0; j < columnas; j++) {
            int val = tableroInicial[i][j];
            if (val == -1) cout << GRIS << " ? " << RESET;      // Desconocido
            else if (val == 0) cout << " . ";                  // Agua (Fijo)
            else if (val == 1) cout << VERDE << " # " << RESET;// Relleno (Fijo)
        }
        cout << "\n";
    }
    cout << "\n";
}

bool Problema::esLineaValida(const vector<int>& linea, const vector<int>& pistas, bool esParcial) {
    vector<int> bloques = obtenerBloques(linea);

    // 1. VALIDACIÓN DE CANTIDAD DE BLOQUES
    if (bloques.size() > pistas.size()) return false;

    // Si la línea está completa (no parcial), debe tener EXACTAMENTE los bloques pedidos.
    if (!esParcial && bloques.size() != pistas.size()) return false;

    // 2. VALIDACIÓN DE CADA BLOQUE
    for (size_t i = 0; i < bloques.size(); i++) {
        bool esUltimo = (i == bloques.size() - 1);
        bool terminaEnBlanco = (linea.back() == 0);
        bool bloqueCerrado = !esUltimo || terminaEnBlanco || !esParcial;

        if (bloqueCerrado) {
            if (bloques[i] != pistas[i]) return false;
        } else {
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
    bool filaEsParcial = (col < columnas - 1);
    if (!esLineaValida(lineaF, filasP[fila].bloques, filaEsParcial)) return false;

    // Validamos la columna hasta la fila actual
    vector<int> lineaC;
    for (int i = 0; i <= fila; i++) {
        lineaC.push_back(s.tablero[i][col].valor);
    }
    bool colEsParcial = (fila < filas - 1);
    if (!esLineaValida(lineaC, columnasP[col].bloques, colEsParcial)) return false;

    return true;
}

void Problema::actualizaMejorSolucion(Estado *e) {
    soluciones.push_back(*(e->sol));
}

void Problema::bt(Estado *e) {
    if (e->esFinal()) {
        actualizaMejorSolucion(e);
        return;
    }
    
    
    vector<int> alts = e->getAlternativas();

    int fila = e->posicion / this->columnas;
    int col  = e->posicion % this->columnas;

    for (int valor : alts) {
        e->avanza(valor);

        if (validarParcial(*(e->sol), fila, col)) {
            bt(e);
        }

        e->retrocede(valor);
    }
}

void Problema::ejecutaBacktracking() {
    soluciones.clear();
    solucionBase = Solucion(filas, columnas);
    
    Estado e(&solucionBase, this); 
    
    bt(&e);

    if (soluciones.empty()) {
        cout << ROJO << "No se encontro solucion (Revisa las pistas).\n" << RESET;
    } else {
        cout << VERDE << "Se han encontrado " << soluciones.size() << " soluciones:\n" << RESET;
        for(size_t i = 0; i < soluciones.size(); i++) {
            cout << AZUL << "Solución " << (i + 1) << ":" << RESET;
            soluciones[i].imprimir();
        }
    }
}
