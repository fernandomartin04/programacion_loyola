#include <iostream>
#include "cabecera.h"

using namespace std;

int main() {

    // Crear objetos y verificar que comparten el mismo nombre de empresa
    Paquete p1(10166);
    p1.setCodigoDestino(20225);

    cout << p1.toString() << endl;

    return 0;
}
