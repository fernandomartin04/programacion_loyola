#include "coche.h"
#include "moto.h"
#include <iostream>
using namespace std;

int main() {
    Vehiculo::nombre_empresa = "Toyota";

    Vehiculo* vehiculos[2];

    vehiculos[0] = new Coche("0667HML", 16, 1200);
    vehiculos[1] = new Moto("9531FDV", 22, 200000, 1);

    for (int i=0; i<2; i++) {
        cout << "Coste del vehiculo: " << vehiculos[i]->calcularCoste() << endl;
    }

    for (int i=0; i<2; i++) {
        
        delete vehiculos[i];
    }

    return 0;
}