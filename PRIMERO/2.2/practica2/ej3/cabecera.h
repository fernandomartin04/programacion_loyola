#ifndef CABECERA_H
#define CABECERA_H
#include <iostream>
using namespace std;

class Ascensor {
    private:
        int plantaActual;
        bool puertaAbierta;
    public:
        Ascensor(int plantaActual = "0", puertaAbierta = false;) {
            this->plancaActual=plancaActual;
            this->puertaAbierta=puertaAbierta;
        }

        string getPlantaActual() const;
        void seleccionarPlanta(int planta);

        void abrirPuerta();
        void cerrarPuerta();

        bool isPuertaAbierta() const;
        bool isSobrecargado() const; 
};

#endif