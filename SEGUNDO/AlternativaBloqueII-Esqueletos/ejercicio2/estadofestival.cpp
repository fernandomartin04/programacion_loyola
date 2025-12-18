#include<iostream>
#include"estadofestival.h"

using namespace std;
        
// TODO d) avanza
void EstadoFestival::avanza(int id, Corto const & c)
{
    sol.addCortoInSala(id, c);
    setNCortosAsignados(getNCortosAsignados() + 1);
}
// TODO e) retrocede
void EstadoFestival::retrocede(int id, Corto const & c)
{
    sol.deleteCortoInSala(id, c);
    setNCortosAsignados(getNCortosAsignados() - 1);
}
// TODO f) getAlternativas
list<int> EstadoFestival::getAlternativas()
{
    list<int> alts;
    for(int i=0; i < sol.getNumeroSalas(); i++){
        alts.push_back(i);
    }
    return alts;
}
// TODO g) getMejorAlternativa
int EstadoFestival::getMejorAlternativa()
{
    list<Sala> salas = sol.getSalas();
    list<Sala>::iterator it = salas.begin();

    int id_min = it->getId();
    int min = it->getTiempo();
    it++;

    while(it!=salas.end()) {
        if (it->getTiempo() < min) {
            min = it->getTiempo();
            id_min = it->getId();
        }
        it++;
    }
    return id_min;
}
// TODO h) esFinal
bool EstadoFestival::esFinal()
{
    return getNCortosAsignados() == getNCortosTotales();
}
