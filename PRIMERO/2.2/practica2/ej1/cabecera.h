#ifndef CABECERA_H
#define CABECERA_H
#include <iostream>
using namespace std;

class Rectangulo {
    private:
        float alto;
        double ancho;
    public:
        Rectangulo(float alto = 0.0, double ancho = 0.0) {
            this->alto=alto;
            this->ancho=ancho;
        }

        float getAlto() const;
        double getAncho() const;
        
        void setAlto(float nuevo_alto);
        void setAncho(double nuevo_ancho);

        void cambiarAltoAncho(float nuevo_alto, double nuevo_ancho);

};

#endif