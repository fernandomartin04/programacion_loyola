#include<iostream>
#include"sala.h"

using namespace std;

Sala & Sala::operator=(Sala const & s)
{
    setId(s.getId());
    setCortos(s.getCortos());
    setTiempo(s.getTiempo());
    return *this;
}

void Sala::mostrar() const
{
    cout << "Sala: " << getId() << endl;
    cout << "Tiempo: " << getTiempo() << endl;
    cout << "Cortos:" << endl;

    list<Corto>::const_iterator it = cortos.begin();
    while(it != cortos.end())
    {
        it->mostrar();
        it++;
    }
}

void Sala::addCorto(Corto const & c)
{
    cortos.push_back(c);
    setTiempo(getTiempo() + c.getDuracion());
}

void Sala::deleteCorto(Corto const & c)
{
    cortos.pop_back();
    setTiempo(getTiempo() - c.getDuracion());
}
