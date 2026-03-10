#ifndef EMPLEADO_H
#define EMPLEADO_H

class Empleado {
    protected:
        string nombre;
        int id;
        static string nombre_empresa;

    public:
        ~Empleado();
        Empleado();    
        Empleado(string nombre, int id);

        virtual float calcularSalario();
};

#endif