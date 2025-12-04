#ifndef _PROBLEMAFESTIVAL_H_
#define _PROBLEMAFESTIVAL_H_

#include<iostream>
#include"estadofestival.h"

using namespace std;

class ProblemaFestival
{
    private:
        list<Corto> cortos_disponibles;
        int numero_salas;
        int numero_cortos;
        SolucionFestival mejorSol;

    public:
        ProblemaFestival(list<Corto> const & l, int n)
        {
            setCortosDisponibles(l);
            setNumeroSalas(n);
            setNumeroCortos(l.size());
        }

        list<Corto> getCortosDisponibles() const { return cortos_disponibles; }
        int getNumeroSalas() const { return numero_salas; }
        int getNumeroCortos() const { return numero_cortos; }
        SolucionFestival getMejorSolucion() const { return mejorSol; }

        void setCortosDisponibles(list<Corto> const & l) { cortos_disponibles = l; }
        void setNumeroSalas(int n) { numero_salas = n; }
        void setNumeroCortos(int n) { numero_cortos = n; }
        void setMejorSolucion(SolucionFestival const & s) { mejorSol = s; }

        // TODO i) ejecutaBacktracking
        SolucionFestival ejecutaBacktracking();
        // TODO j) bt
        void bt(EstadoFestival & e);
        // TODO k) ejecutaVoraz
        SolucionFestival ejecutaVoraz();
        // TODO l) vorazR
        void vorazR(EstadoFestival & e);
        // TODO m) actualizarMejorSolucion
        void actualizarMejorSolucion(EstadoFestival & e);
};

#endif
