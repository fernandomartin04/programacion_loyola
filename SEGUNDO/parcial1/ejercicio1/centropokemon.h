#ifndef _CENTROPOKEMON_H_
#define _CENTROPOKEMON_H_

#include<iostream>
#include<list>
#include<map>
#include<set>

using namespace std;

//TODO 
class CentroPokemon
{
	private:
	//TODO Definicion de atributos
		string nombre;
		int numero_pokemon;
		string tipo;
		string region;
	public:
	//TODO Apartado a) Constructor, observadores y modificadores
		CentroPokemon(string nombre="", int numero_pokemon=0, string tipo="", string region="") {
			this->nombre=nombre;
			this->numero_pokemon=numero_pokemon;
			this->tipo=tipo;
			this->region=region;
		}

		string getNombre() const {return nombre;}
		int getNumeroPokemon() const {return numero_pokemon;}
		string getTipo() const {return tipo;}
		string getRegion() const {return region;}

		void setNombre(string nombre) {this->nombre=nombre;}
		void setNumeroPokemon(int numero_pokemon) {this->numero_pokemon=numero_pokemon;}
		void setTipo(string tipo) {this->tipo=tipo;}
		void setRegion(string region) {this->region=region;}


	//TODO Apartado b) Sobrecarga del operador =
		CentroPokemon & operator=(const CentroPokemon &c) {
			setNombre(c.getNombre());
			setNumeroPokemon(c.getNumeroPokemon());
			setTipo(c.getTipo());
			setRegion(c.getRegion());
			return *this;
		}
	//TODO Apartado e) Sobrecarga del operador ==
		bool operator==(const CentroPokemon &c) const;
	//TODO Apartado f) Sobrecarga del operador <
		bool operator<(const CentroPokemon &c) const;
	

};
//TODO Apartado c) << y >>
ostream& operator<<(ostream &os, const CentroPokemon &c);
istream& operator>>(istream &is, CentroPokemon &c);

//TODO Apartado d) +

CentroPokemon operator+(CentroPokemon const & c1, CentroPokemon const & c2);

//TODO Definicion de las funciones fuera de la clase
//TODO Apartado g)

float getNumeroMedioPokemon(list<CentroPokemon> const &l, string region);

//TODO Apartado h)

map<string, list<CentroPokemon>> getCentrosPorTipo(list<CentroPokemon> const &l);

//TODO Apartado i)

set<CentroPokemon> actualizarPokemon(set<CentroPokemon> const &c, string region);

//TODO Apartado j)

list<string> getCentroMasActivoPorTipo(set<CentroPokemon> const &c, string tipo);

#endif
