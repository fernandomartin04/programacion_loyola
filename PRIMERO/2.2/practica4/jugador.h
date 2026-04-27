#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
using namespace std;

class Jugador {
    protected:
        string nombre;
        int dorsal;
        int nro_partidos;
        string* historial_clubes;
    public:
        Jugador();
        Jugador(string nombre, int dorsal);
        Jugador(Jugador const &otro);
        virtual ~Jugador();
        virtual float calcularValoracion();
        virtual string toString();
        void agregarClub(string club);

        Jugador& operator=(Jugador const &otro);
};

#endif