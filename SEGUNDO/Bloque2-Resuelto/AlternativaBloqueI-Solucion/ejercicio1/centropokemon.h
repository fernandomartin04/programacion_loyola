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
	//Constructor
	CentroPokemon(string n = "", int num = 0, string t = "", string r = "")
	{
		setNombre(n);
		setNumeroPokemon(num);
		setTipo(t);
		setRegion(r);
	}
	
	//Observadores
	string getNombre() const { return nombre; }
	int getNumeroPokemon() const { return numero_pokemon; }
	string getTipo() const { return tipo; }
	string getRegion() const { return region; }
	
	//Modificadores
	void setNombre(string n) { nombre = n; }
	void setNumeroPokemon(int n) { numero_pokemon = n; }
	void setTipo(string t) { tipo = t; }
	void setRegion(string r) { region = r; }
	
	//TODO Apartado b) Sobrecarga del operador =
	CentroPokemon & operator = (CentroPokemon const & c)
	{
		setNombre(c.getNombre());
		setNumeroPokemon(c.getNumeroPokemon());
		setTipo(c.getTipo());
		setRegion(c.getRegion());
		return *this;
	}
	
	//TODO Apartado e) Sobrecarga del operador ==
	bool operator==(CentroPokemon const & c) const;
	//TODO Apartado f) Sobrecarga del operador <
	bool operator<(CentroPokemon const & c) const;
	

};
//TODO Apartado c) << y >>
ostream & operator<<(ostream & stream, CentroPokemon const & c);
istream & operator>>(istream & stream, CentroPokemon & c);

//TODO Apartado d) +
CentroPokemon operator+(CentroPokemon const & c1, CentroPokemon const & c2);

//TODO Definicion de las funciones fuera de la clase
//TODO Apartado g)
float getNumeroMedioPokemon(list <CentroPokemon> const & l, string region);
//TODO Apartado h)
map<string, list<CentroPokemon>> getCentrosPorTipo(list <CentroPokemon> const & l);
//TODO Apartado i)
set <CentroPokemon> actualizarPokemon(set <CentroPokemon> const & c, string region);
//TODO Apartado j)
list<string> getCentroMasActivoPorTipo(set <CentroPokemon> const & c, string tipo);

#endif
