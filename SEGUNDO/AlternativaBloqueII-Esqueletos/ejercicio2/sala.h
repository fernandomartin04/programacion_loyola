#ifndef _SALA_H_
#define _SALA_H_

#include<iostream>
#include<list>
#include"corto.h"

using namespace std;

class Sala
{
    private:
        int id;
        list<Corto> cortos;
        int tiempo;

    public:
        Sala(int i)
        {
            setId(i);
            cortos.clear();
            setTiempo(0);
        }

        int getId() const { return id; }
        list<Corto> getCortos() const { return cortos; }
        int getTiempo() const { return tiempo; }

        void setId(int i) { id = i; }
        void setCortos(list<Corto> const & c) { cortos = c; }
        void setTiempo(int t) { tiempo = t; }

        Sala & operator=(Sala const & s);

        void mostrar() const;

        void addCorto(Corto const & c);
        void deleteCorto(Corto const & c);
};

#endif

