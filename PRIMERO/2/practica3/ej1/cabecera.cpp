#include "cabecera.h"

// Constructor
Paquete::Paquete(int id, int codigoDestino, string nombre_empresa, float peso) {
    this->id = id;
    this->codigoDestino = codigoDestino;
    this->nombre_empresa = nombre_empresa;
    this->peso = peso;
}

// Getter de codigoDestino
int Paquete::getCodigoDestino() const {
    return codigoDestino;
}

// Setter de codigoDestino
bool Paquete::setCodigoDestino(int codigoDestino) {
    if (codigoDestino > 9999) {
        this->codigoDestino = codigoDestino;
        return true;
    }
    return false;
}

// Getter de peso
float Paquete::getPeso() const {
    return peso;
}

// Setter de peso
void Paquete::setPeso(float peso) {
    if (peso > 0) {
        this->peso = peso;
    }
}

// Método toString para mostrar los datos del paquete
string Paquete::toString() const {
    return "ID: " + to_string(id) + ", Empresa: " + nombre_empresa + 
           ", Destino: " + to_string(codigoDestino) + ", Peso: " + to_string(peso) + " kg";
}
