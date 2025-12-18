#ifndef CABECERA_H
#define CABECERA_H
#include <vector>
#include <string>
#include <list>
#include <set>
#include <map>
#include <iostream>
using namespace std;

class CentroPokemon {
    private:
        string nombre;
        int numPokemon;
        string tipo;
        string region;
    public:
        CentroPokemon(string nombre="", int numPokemon=0, string tipo="", string region="") {
            this->nombre=nombre;
            this->numPokemon=numPokemon;
            this->tipo=tipo;
            this->region=region;
        }
        string getNombre() const{return nombre;}
        int getNumPokemon() const {return numPokemon;}
        string getTipo() const {return tipo;}
        string getRegion() const {return region;}

        void setNombre(string nombre) {this->nombre=nombre;}
        void setNumPokemon(int numPokemon) {this->numPokemon=numPokemon;}
        void setTipo(string tipo) {this->tipo=tipo;}
        void setRegion(string region) {this->region=region;}

        CentroPokemon & operator=(const CentroPokemon & c) {
            setNombre(c.getNombre());
            setNumPokemon(c.getNumPokemon());
            setTipo(c.getTipo());
            setRegion(c.getRegion());
            return *this;
        }

        bool operator==(const CentroPokemon & c) const {
            return nombre==c.nombre;
        }

        bool operator<(const CentroPokemon & c) const {
            return this->nombre < c.nombre;
        }

};

CentroPokemon operator+(const CentroPokemon & c1, const CentroPokemon & c2);

ostream& operator<<(ostream& os, const CentroPokemon & c);
istream& operator>>(istream& is, CentroPokemon & c);

double getNumeroMedioPokemon(const list<CentroPokemon>& centros, const string& region);
map<string, list<CentroPokemon>> getCentrosPorTipo(const list<CentroPokemon>& centros);
set<CentroPokemon> actualizarPokemon(const set<CentroPokemon>& centros, const string& region);
vector<string> getCentroMasActivoPorTipo(const set<CentroPokemon>& centros, const string& tipo);
void eliminarPorRegion(list<CentroPokemon>& centros, const string& region);
list<CentroPokemon> ordenarPorNumPokemon(const list<CentroPokemon>& centros);

int contarCentrosPorRegionYMinPokemon(set<CentroPokemon> aux, string region, int n);
string tipoConMasPokemon(const map<string, list<CentroPokemon>>& mp);
void eliminarCentrosInferioresALaMedia(list<CentroPokemon>& l);



#endif

