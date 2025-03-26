#include "cabecera.h"

string Paquete::nombre_empresa = "NombreRandom";  // Definición de la variable estática

Paquete::Paquete() {
    this->id = 0;
    this->codigoDestino = 0;
}

Paquete::Paquete(int id) {
    this->id = id;
    this->codigoDestino = -1;
}

Paquete::Paquete(int id, float peso) {
    // Inicializo
    //  los atributos con los valores proporcionados
    this->id = id;
    this->peso = peso;
}

int Paquete::getCodigoDestino() {
    return codigoDestino;
}

bool Paquete::setCodigoDestino(int codigoDestino) {
    if (codigoDestino > 9999 && codigoDestino < 100000) {
        this->codigoDestino = codigoDestino;
        return true;
    }
    return false;
}

string Paquete::toString() {
    return "ID: " + to_string(id) + ", Codigo Destino: " + to_string(codigoDestino) + ", Empresa: " + nombre_empresa;
}

/// Paquete común
// Primer punto
PaqueteComun::PaqueteComun() : Paquete() {
    this->peso = 0.0;
}

// Primer punto, segunda parte
PaqueteComun::PaqueteComun(int id) : Paquete(id) {
    this->peso = 0.0;
}

// Primer punto, tercera parte
PaqueteComun::PaqueteComun(int id, float peso) : Paquete(id) {
    this->peso = peso;
}

string PaqueteComun::toString() {
    return Paquete::toString() + ", Peso: " + to_string(peso) + "kg";
}
