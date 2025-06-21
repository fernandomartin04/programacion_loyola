#pragma once

#include <iostream>

using namespace std;

class CaracteristicasFisicas {
private:
    float altura;
    float longitud;
    float peso;

public:
    friend ostream& operator<<(ostream& os, CaracteristicasFisicas& cf);
    friend istream& operator>>(istream& is, CaracteristicasFisicas& cf);
    
    CaracteristicasFisicas();

    float getAltura();
    float getLongitud();
    float getPeso();

    void setAltura(float a);
    void setLongitud(float l);
    void setPeso(float p);

};