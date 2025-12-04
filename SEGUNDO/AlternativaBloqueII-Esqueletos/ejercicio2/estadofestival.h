#ifndef _ESTADOFESTIVAL_H_
#define _ESTADOFESTIVAL_H_

#include<iostream>
#include"solucionfestival.h"

using namespace std;

class EstadoFestival
{
    private:
        SolucionFestival sol;
        int nCortos_asignados;
        int nCortos_totales;

    public:
        EstadoFestival(int nsalas, int ncortos)
        {
            sol = SolucionFestival(nsalas);
            setNCortosAsignados(0);
            setNCortosTotales(ncortos);
        }

        SolucionFestival getSolucion() const { return sol; }
        int getNCortosAsignados() const { return nCortos_asignados; }
        int getNCortosTotales() const { return nCortos_totales; }

        void setSolucion(SolucionFestival const & s){ sol = s; }
        void setNCortosAsignados(int n){ nCortos_asignados = n; }
        void setNCortosTotales(int n){ nCortos_totales = n; }
        
        // TODO d) avanza
        void avanza(int id, Corto const & c);
        // TODO e) retrocede
        void retrocede(int id, Corto const & c);
        // TODO f) getAlternativas
        list<int> getAlternativas();
        // TODO g) getMejorAlternativa
        int getMejorAlternativa();
        // TODO h) esFinal
        bool esFinal();
};

#endif
