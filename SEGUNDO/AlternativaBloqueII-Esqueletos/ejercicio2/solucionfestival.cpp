#include<iostream>
#include"solucionfestival.h"

using namespace std;

SolucionFestival & SolucionFestival::operator=(SolucionFestival const & s)
{
    salas.clear();
    setSalas(s.getSalas());
    setTiempoTotal(s.getTiempoTotal());
    setNumeroSalas(s.getNumeroSalas());
    return *this;
}

bool SolucionFestival::operator>(SolucionFestival const & s) const
{
    return getTiempoTotal() < s.getTiempoTotal();
}

void SolucionFestival::mostrar() const
{
    cout << endl << "Tiempo total: " << getTiempoTotal() << endl;
    cout << "Numero de salas: " << getNumeroSalas() << endl;

    list<Sala>::const_iterator it = salas.begin();
    while(it != salas.end())
    {
        it->mostrar();
        it++;
    }
}

void SolucionFestival::actualizarTiempoTotal()
{
    int tiempoMaximo = 0;

    list<Sala>::const_iterator it = salas.begin();
    while(it != salas.end())
    {
        if(it->getTiempo() > tiempoMaximo)
            tiempoMaximo = it->getTiempo();

        it++;
    }

    setTiempoTotal(tiempoMaximo);
}
// TODO b) addCortoInSala
void SolucionFestival::addCortoInSala(int id, Corto const & c)
{

}
// TODO c) deleteCortoInSala
void SolucionFestival::deleteCortoInSala(int id, Corto const & c)
{

}
