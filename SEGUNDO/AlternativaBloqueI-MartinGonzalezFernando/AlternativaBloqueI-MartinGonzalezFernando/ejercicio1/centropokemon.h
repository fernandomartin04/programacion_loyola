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
		int numeroDePokemonAtendidos;
		string tipo;
		string region;
		
	public:
	//TODO Apartado a) Constructor, observadores y modificadores
		CentroPokemon (string nombre, int numeroDePokemonAtendidos , string tipo , string region ) {
			this->nombre = nombre;
			this->numeroDePokemonAtendidos = numeroDePokemonAtendidos;
			this->tipo = tipo;
			this->region = region;
		}
		
		string getNombre() const {return nombre;};
		int getNumeroPokemon() const {return numeroDePokemonAtendidos;};
		string getTipo() const {return tipo;};
		string getRegion() const {return region;};	
		
		void setNombre() {this->nombre = nombre;};
		void setNumeroPokemon() {this->numeroDePokemonAtendidos = numeroDePokemonAtendidos;};
		void setTipo() {this->tipo = tipo;};
		void setRegion() {this->region = region;};
		
		
		
		
	//TODO Apartado b) Sobrecarga del operador =
	CentroPokemon operator=(CentroPokemon & c){
			setNombre(c.getNombre);
			setNumeroPokemon(c.getNumeroPokemon);
			setTipo(c.getNumeroPokemon);
			setRegion(c.getRegion);
			return *this;
		}
	
	//TODO Apartado e) Sobrecarga del operador ==

	CentroPokemon::bool operator==(CentroPokemon const & c )const;

	//TODO Apartado f) Sobrecarga del operador <

	

};
//TODO Apartado c) << y >>
CentroPokemon & ostream operator<<(CentroPokemon const & c);
CentroPokemon & istream operator>>(CentroPokemon c, istream is)
//TODO Apartado d) +

//TODO Definicion de las funciones fuera de la clase
//TODO Apartado g)

float getNumeroMedioPokemon(list<CentroPokemon> l, string region);

//TODO Apartado h)

map<string, list<CentroPokemon>> getCentrosPorTipo(list<CentroPokemon> l);

//TODO Apartado i)

set<CentroPokemon> actualizarPokemon(set<centroPokemon> s, string region);

//TODO Apartado j)

list<string> getCentroMasActivoPorTipo(set<CentroPokemon> s, string tipo);

#endif
