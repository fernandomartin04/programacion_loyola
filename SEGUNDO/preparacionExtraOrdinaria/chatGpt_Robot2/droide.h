#ifndef DROIDE_H
#define DROIDE_H
#include<vector>
#include <iostream>
using namespace std;

class Droide {
    private:
        int id;
        int bateria;
        int potencia;

    public:
        Droide(int id=0, int bateria=0, int potencia=0) {
            this->id=id;
            this->bateria=bateria;
            this->potencia=potencia;
        }

        int getId() const {return id;}
        int getBateria() const {return bateria;}
        int getPotencia() const {return potencia;}

        void setId(int id) {this->id=id;}
        void setBateria(int bateria) {this->bateria=bateria;}
        void setPotencia(int potencia) {this->potencia=potencia;}
        
        void mostrar();
};

int potenciaTriple(Droide *v, int i, int n);

#endif