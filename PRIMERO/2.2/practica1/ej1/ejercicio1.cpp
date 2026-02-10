#include "ejercicio1.h"
void rastrearLLamadas() {
    static int contador = 1;
    cout << "Llamada número: " << contador << endl;
    contador++;
}