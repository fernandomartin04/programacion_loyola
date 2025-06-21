#pragma once

#include <iostream>

using namespace std;

class DatosGeneracion {
private:
    float generacion;
    float emisiones;
    float rendimiento;

public:
    friend ostream& operator<<(ostream& os, DatosGeneracion& dg);
    friend istream& operator>>(istream& is, DatosGeneracion& dg);
    
    DatosGeneracion();

    float getGeneracion();
    float getEmisiones();
    float getRendimiento();

    void setGeneracion(float g);
    void setEmisiones(float e);
    void setRendimiento(float r);

};