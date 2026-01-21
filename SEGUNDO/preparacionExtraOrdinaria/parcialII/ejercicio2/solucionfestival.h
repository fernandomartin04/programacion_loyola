#ifndef _SOLUCIONFESTIVAL_H_
#define _SOLUCIONFESTIVAL_H_

#include<iostream>
#include<list>
#include"sala.h"

using namespace std;

class SolucionFestival
{
    private:
        list<Sala> salas;
        int tiempo_total;
        int numero_salas;

    public:
        SolucionFestival(int n = 0)
        {
            for(int i = 0; i < n; i++)
                salas.push_back(Sala(i));

            setTiempoTotal(0);
            setNumeroSalas(n);
        }

        SolucionFestival(SolucionFestival const & s)
        {
            *this = s;
        }

        list<Sala> getSalas() const { return salas; }
        int getTiempoTotal() const { return tiempo_total; }
        int getNumeroSalas() const { return numero_salas; }

        Sala & getSala(int id)
        {
            list<Sala>::iterator it = salas.begin();
            while(it != salas.end())
            {
                if(it->getId() == id)
                    return *it;
                it++;
            }
        }

        void setSalas(list<Sala> const & s) { salas = s; }
        void setTiempoTotal(int t) { tiempo_total = t; }
        void setNumeroSalas(int n) { numero_salas = n; }

        SolucionFestival & operator=(SolucionFestival const & s);
        bool operator>(SolucionFestival const & s) const;

        void mostrar() const;

        void actualizarTiempoTotal();
        
        // TODO b) addCortoInSala
        void addCortoInSala(int id, Corto const & c);
        // TODO c) deleteCortoInSala
        void deleteCortoInSala(int id, Corto const & c);
};

#endif
