#include "Energia.h"

Energia::Energia() {
    nombre_energia = "";
    grupo = 0;
}

string Energia::getNombreEnergia() {
     return nombre_energia;
    }
void Energia::setNombreEnergia(string nombre) {
    nombre_energia = nombre;
}

int Energia::getGrupo(){
    return grupo;
}
void Energia::setGrupo(int grupo) {
    this->grupo = grupo;
}

DatosGeneracion Energia::getDatosGeneracion() {
     return this->datos_generacion; 
    }

void Energia::setDatosGeneracion(DatosGeneracion cf) {
    datos_generacion = cf;
}
