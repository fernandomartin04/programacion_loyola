#include "cabecera.h"

string Luz::getColor() const {
    return color;
}
void Luz::iniciarSemaforo() {
    this->color="Verde";
}
void Luz::cambioDeColor() {
    if(color=="Verde") {
        this->color="Amarillo";
    }
    else {
        if(color=="Amarillo") this->color="Rojo";
        else this->color="Verde";
    }
}


