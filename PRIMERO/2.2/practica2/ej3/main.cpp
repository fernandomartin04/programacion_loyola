#include "cabecera.h"

int main() {
    Ascensor a1;

    cout << "Planta inicial: " << a1.getPlantaActual() << endl;

    // Abrir puerta
    if (a1.abrirPuerta())
        cout << "Puerta abierta" << endl;

    // Cerrar puerta
    if (a1.cerrarPuerta())
        cout << "Puerta cerrada" << endl;

    // Ir a planta 5
    a1.seleccionarPlanta(5);
    cout << "Nueva planta: " << a1.getPlantaActual() << endl;

    // Estado puerta
    if (a1.isPuertaAbierta())
        cout << "La puerta esta abierta" << endl;
    else cout << "La puerta esta cerrada" << endl;

    return 0;

}