#ifndef _CORTO_H_
#define _CORTO_H_

#include<iostream>
#include<string>

using namespace std;

class Corto
{
    private:
        int id;
        int duracion;
        string nombre;

    public:
        Corto(int i = -1, int d = -1, string n = "")
        {
            setId(i);
            setDuracion(d);
            setNombre(n);
        }

        Corto(Corto const & c)
        {
            *this = c;
        }

        int getId() const { return id; }
        int getDuracion() const { return duracion; }
        string getNombre() const { return nombre; }

        void setId(int i) { id = i; }
        void setDuracion(int d) { duracion = d; }
        void setNombre(string n) { nombre = n; }

        Corto & operator=(Corto const & c);

        // TODO a) sobrecarga del operador <
        bool operator < (Corto const & c) const;

        void mostrar() const;
};

#endif
