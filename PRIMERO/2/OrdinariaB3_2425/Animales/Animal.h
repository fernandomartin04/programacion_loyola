#pragma once

#include <array>
#include <iostream>
#include <string>
#include "CaracteristicasFisicas.h"
using namespace std;

class Animal {
private:
    string nombre_comun;
    int nivel_amenaza;
    CaracteristicasFisicas caracteristicas_fisicas;

public:
    // Aqui solo falta definir tipo
    static array<string, 5> nombre_amenaza;
    friend ostream& operator<<(ostream &os, Animal &a);
    friend istream& operator>>(istream &is, Animal &a);

    Animal();

    string getNombreComun();
    void setNombreComun(string nombre);

    int getNivelAmenaza();
    void setNivelAmenaza(int nivel);

    CaracteristicasFisicas getCaracteristicasFisicas();
    void setCaracteristicasFisicas(CaracteristicasFisicas cf);
};