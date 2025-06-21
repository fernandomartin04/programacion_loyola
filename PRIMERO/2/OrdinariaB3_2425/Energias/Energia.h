#pragma once

#include <iostream>
#include <string>
#include<array>
#include "DatosGeneracion.h"
using namespace std;

class Energia {
private:
    string nombre_energia;
    int grupo;
    DatosGeneracion datos_generacion;

public:
    // Aqui solo falta definir tipo
    static array<string, 5> nombre_grupos;
    friend ostream& operator<<(ostream &os, Energia &e);
    friend istream& operator>>(istream &is, Energia &e);

    Energia();

    string getNombreEnergia();
    void setNombreEnergia(string nombre);

    int getGrupo();
    void setGrupo(int grupo);

    DatosGeneracion getDatosGeneracion();
    void setDatosGeneracion(DatosGeneracion dg);
};