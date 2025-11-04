#include<iostream>
#include"centropokemon.h"

using namespace std;

//TODO Apartado e) Sobrecarga del operador ==
CentroPokemon::bool operator==(CentroPokemon const & c, otro)const {
	if (otro.getNombre() == c.nombre) return true;
	else return false;
}

//TODO Apartado f) Sobrecarga del operador <


//TODO Apartado c) << y >>
CentroPokemon & ostream operator<<(CentroPokemon const & c, ostream os) {
	os << "Nombre: " << c.getNombre();
	os << "Numero: " << c.getNumeroPokemon();
	os << "Tipo: " << c.getTipo();
	os << "Region: " << c.getRegion();
	return os;
}

CentroPokemon & istream operator>>(CentroPokemon c) {
	cout << "Introduzca nombre: ";
	cin >> c.setNombre();
	
	cout << "Introduzca Numero: ";
	cin >> c.setNumeroPokemon();
	
	cout << "Introduzca Tipo: ";
	cin >> c.setTipo();
	
	cout << "Introduzca Region: ";
	cin >> c.setRegion();
}

//TODO Apartado d) +


//TODO Definicion de las funciones fuera de la clase

//TODO Apartado g)
float getNumeroMedioPokemon(list<CentroPokemon> l, string region) {
	list<CentroPokemon>::const_iterator it = l.begin();
	int aux = 0;
	float media = 0;
	
	while(it != l.end()) {
		if(it->getRegion() == region) {
			media += it->getNumeroPokemon();
			aux++;
		};
		it++;
	}
	
	media /= aux;
	
	return media;
}

//TODO Apartado h)
map<string, list<CentroPokemon>> getCentrosPorTipo(list<CentroPokemon> l) {
	map<string, list<CentroPokemon>> mp;
	list<CentroPokemon>::const_iterator it = l.begin();
	
	while(it != l.end()) {
		string tipo = it->getTipo();
		mp[tipo].push_back(*it);
		it++;
	}
	return mp;
}

//TODO Apartado i)

set<CentroPokemon> actualizarPokemon(set<CentroPokemon> s, string region) {
	set<CentroPokemon>::const_iterator it = s.begin();
	set<CentroPokemon> aux;
	set<CentroPokemon>::const_iterator it2 = aux.begin();
	while (it != s.end()) {
		if (it->getRegion() == region) {
			aux.push_back(*it);
			it2->setNumeroPokemon(it2->getNumeroPokemon()*(1.2));
		}
		else {
			aux.push_back(*it);
			it2->setNumeroPokemon(it2->getNumeroPokemon()*(0.95));
		}
		it++;
		it2++;
	}
	return aux;
}

//TODO Apartado j)
list<string> getCentroMasActivoPorTipo(set<CentroPokemon> s, string tipo) {
	set<CentroPokemon>::const_iterator it = s.begin();
	set<CentroPokemon> aux;
	set<CentroPokemon>::const_iterator it2 = aux.begin();
	
	list<string> centro;
	
	aux.push_back(*it);
	it++;
	
	while(it != s.end()) {
		if (it->getTipo() == tipo) {
			if (it->getNumeroPokemon() > it2->getNumeroPokemon()) {
				aux.erase(*it2);
				aux.push_back(*it);
			}
		}
		it++;
	}
	it = s.begin();
	while (it != s.end()) {
		if(it->getNumeroPokemon() == it2->getNumeroPokemon()) {
			aux.push_back(*it);
		}
		it++;
	}
	
	if (aux.getTipo() != tipo) aux.erase(*it2);
	
	while (it2 != aux.end()) {
		centro.push_back(it2->getNombre());
	}
	
	
	return centro;
}
















