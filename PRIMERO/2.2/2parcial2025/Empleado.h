#pragma once
#include "Persona.h"
#include "Cliente.h"

class Cliente : virtual public Persona {
    protected:
        int sueldo;
        static string nombre_empresa;
    public:
        Empleado();
        Empleado(string nombre, int sueldo);
        Empleado & operator=(const Empleado& otro);
        bool cobrarACliente(Cliente & c);
        virtual string toString();
}