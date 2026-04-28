#pragma once;
#include "Persona.h"

class Cliente : public virtual Persona {
    protected:
        int total_cuenta;
    public:
        Cliente();
        Cliente(string nombre);
        Cliente & operator+=(const int & cantidad);
        Cliente & operator-=(const int & cantidad);
        virtual int getTotalCuenta();
        virtual string toString();
        friend class Empleado;
}