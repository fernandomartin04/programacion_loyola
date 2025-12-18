#include<iostream>
#include"centropokemon.h"

using namespace std;

//TODO Apartado e) Sobrecarga del operador ==
bool CentroPokemon::operator==(const CentroPokemon &c) const{
    return (getNombre() == c.nombre);
}
//TODO Apartado f) Sobrecarga del operador <
bool CentroPokemon::operator<(const CentroPokemon &c) const {
    return getNombre() < c.nombre;
}

//TODO Apartado c) << y >>

ostream& operator<<(ostream &os, const CentroPokemon &c) {
    os << "(" << c.getNombre() << "," << c.getNumeroPokemon() << "," << c.getTipo() << "," << c.getRegion() << ")";
    return os;
}

istream& operator>>(istream &is, CentroPokemon &c) {
    int num;
	string n, tipo, region;
	cout << "Introduzca nombre: ";
	is >> n;
	cout << "Introduzca número de Pokémon atendidos: ";
	is >> num;
	cout << "Introduzca tipo: ";
	is >> tipo;
	cout << "Introduzca región: ";
	is >> region;
	c.setNombre(n);
	c.setNumeroPokemon(num);
	c.setTipo(tipo);
	c.setRegion(region);
    return is;
}

//TODO Apartado d) +
CentroPokemon operator+(CentroPokemon const & c1, CentroPokemon const & c2) {
    CentroPokemon nuevo;
    nuevo.setNombre(c1.getNombre() + " " + c2.getNombre());
    nuevo.setNumeroPokemon(c1.getNumeroPokemon() + c2.getNumeroPokemon());
    nuevo.setRegion(c1.getRegion() + " " + c2.getRegion());
    nuevo.setTipo(c1.getTipo() + " " + c2.getTipo());
    return nuevo;
}

//TODO Definicion de las funciones fuera de la clase

//TODO Apartado g)
float getNumeroMedioPokemon(list<CentroPokemon> const &l, string region) {
    list<CentroPokemon> :: const_iterator it = l.begin();
    float m = 0.0;
    int n = 0;

    while (it!=l.end())
    {
        if(it->getRegion() == region) {
            m += it->getNumeroPokemon();
            n++;
        }
        it++;
    }
    if (n==0) return 0.0;

    return 1*m/n;
}


//TODO Apartado h)
map<string, list<CentroPokemon>> getCentrosPorTipo(list<CentroPokemon> const &l) {
    map<string, list<CentroPokemon>> aux;
    list<CentroPokemon>::const_iterator it = l.begin();
    while(it!=l.end()) {
        aux[it->getTipo()].push_back(*it);
        it++;
    }
    return aux;
}

//TODO Apartado i)
set<CentroPokemon> actualizarPokemon(set<CentroPokemon> const &c, string region) {
    set<CentroPokemon> aux;
    set<CentroPokemon>::const_iterator it = c.begin();
    while(it!= c.end()) {
        if(it->getRegion() == region){
            aux.insert(CentroPokemon(it->getNombre(), it->getNumeroPokemon() * 1.2, it->getRegion(), it->getTipo()));
        }
        else {
            aux.insert(CentroPokemon(it->getNombre(), it->getNumeroPokemon() * 0.95, it->getRegion(), it->getTipo()));
        }
        it++;
    }
    return aux;

}

//TODO Apartado j)
list<string> getCentroMasActivoPorTipo(set<CentroPokemon> const &c, string tipo) {
    list<string> l;
    int max = -1;
    set<CentroPokemon>:: const_iterator it = c.begin();

    while(it != c.end()) {
        if(it->getTipo() == tipo) {
            if(it->getNumeroPokemon() > max) {
                l.clear();
                l.push_back(it->getNombre());
                max=it->getNumeroPokemon();
            }
            else if(it->getNumeroPokemon() == max) {
                l.push_back(it->getNombre());
            }
        }
        it++;
    }

    return l;
}

