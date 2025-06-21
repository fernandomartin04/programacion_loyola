#include "Animal.h"

Animal::Animal() {
    nombre_comun = "";
    nivel_amenaza = 0;
}

string Animal::getNombreComun() {
     return nombre_comun;
    }
void Animal::setNombreComun(string nombre) {
    nombre_comun = nombre;
}

int Animal::getNivelAmenaza(){
    return nivel_amenaza;
}
void Animal::setNivelAmenaza(int nivel) {
    nivel_amenaza = nivel;
}

CaracteristicasFisicas Animal::getCaracteristicasFisicas() {
     return this->caracteristicas_fisicas; 
    }

    void Animal::setCaracteristicasFisicas(CaracteristicasFisicas cf) {
    caracteristicas_fisicas = cf;
}
