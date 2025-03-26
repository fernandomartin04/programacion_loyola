#pragma once
#include <string>
#include <iostream>
using namespace std;

class Paquete {
private:
    int id;
    int codigoDestino;
    static string nombre_empresa;

public:
    Paquete();
    Paquete(int id);
	Paquete(int id, float peso);
    int getCodigoDestino();
    bool setCodigoDestino(int codigoDestino);
    string toString();
};

class PaqueteComun : public Paquete {
private:
    float peso;
    static float precio_por_kilo;

public:
    PaqueteComun();
    PaqueteComun(int id);
    PaqueteComun(int id, float peso);
    float getPeso();
    string toString();
};
