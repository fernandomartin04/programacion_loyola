// 0.1
#pragma once
// 0.1
#include "Persona.h"
#include<string>

class Empleado;

// 0.2
class Cliente : virtual public Persona{
// 0.1
    protected:
        int total_cuenta;
    public:
// 0.1
        Cliente();
        Cliente(string nombre);

// 0.2
        Cliente& operator+=(const int & cantidad);
        Cliente& operator-=(const int & cantidad);

// 0.3
        virtual int getTotalCuenta();
        virtual string toString();

// 0.3
        friend class Empleado;

};