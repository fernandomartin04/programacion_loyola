#pragma once
#include "Cliente.h"
#include "EMpleado.h"

class ClienteEmpleado : public Cliente, public Empleado {
    private:
        static float descuento;
    public:
        int getTotalCuenta();
        string toString();
}