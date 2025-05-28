// 0.1
#pragma once
#include "Persona.h"
#include "Cliente.h"
#include<string>

// 0.2
class Empleado : virtual public Persona{
    
// 0.2
    protected:
        int sueldo;
        static string nombre_empresa;
    public:
    
// 0.2
        Empleado();
        Empleado(string nombre, int sueldo);

// 0.2 
        Empleado & operator=(const Empleado & otro);

// 0.2
        bool cobrarACliente(Cliente& c);

// 0.2
        virtual string toString();
};