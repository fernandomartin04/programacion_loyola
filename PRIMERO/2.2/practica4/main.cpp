#include <iostream>
using namespace std;
#include "defensor.h"
#include "atacante.h"
#include "carrilero.h"

int main() {
    Jugador* equipo[11];

    equipo[0] = new Defensor("Defensor1", 2, 10);
    equipo[1] = new Defensor("Defensor2", 3, 12);
    equipo[2] = new Defensor("Defensor3", 4, 8);
    equipo[3] = new Defensor("Defensor4", 5, 15);
    equipo[4] = new Defensor("Defensor5", 6, 9);
    equipo[5] = new Atacante("Atacante1", 7, 20);
    equipo[6] = new Atacante("Atacante2", 8, 18);
    equipo[7] = new Atacante("Atacante3", 9, 22);
    equipo[8] = new Carrilero("Carrilero1", 10, 15, 12);
    equipo[9] = new Carrilero("Carrilero2", 11, 10, 14);
    equipo[10] = new Carrilero("Carrilero3", 12, 12, 10);

    for (int i = 0; i < 11; i++) {
        cout << equipo[i]->toString() << endl;
        cout << "Valoración: " << equipo[i]->calcularValoracion() << endl;
    }

    for (int i = 0; i < 11; i++) {
        delete equipo[i];
    }


    return 0;
}