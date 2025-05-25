
// 0.1
#pragma once
#include "Cliente.h"
#include "Empleado.h"

// 0.3
class ClienteEmpleado : public Cliente, public Empleado{
    private:
    // 0.1
        static float descuento;
    public:
    // 0.1
        ClienteEmpleado();

// 0.1
        int getTotalCuenta();

// 0.2
        virtual string toString();

};