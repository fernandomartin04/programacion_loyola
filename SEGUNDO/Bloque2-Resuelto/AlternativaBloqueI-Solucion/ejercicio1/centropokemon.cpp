#include<iostream>
#include"centropokemon.h"

using namespace std;

//TODO Apartado e) Sobrecarga del operador ==
bool CentroPokemon::operator==(CentroPokemon const & c) const
{
	return getNombre() == c.getNombre();
}

//TODO Apartado f) Sobrecarga del operador <
bool CentroPokemon::operator<(CentroPokemon const & c) const
{
	return getNombre() < c.getNombre();
}

//TODO Apartado c) << y >>
ostream & operator<<(ostream & stream, CentroPokemon const & c)
{
	stream << "(" << c.getNombre() << "," << c.getNumeroPokemon() << "," << c.getTipo() << "," << c.getRegion() << ")";
	return stream;
}

istream & operator>>(istream & stream, CentroPokemon & c)
{
	int num;
	string n, tipo, region;
	cout << "Introduzca nombre: ";
	stream >> n;
	cout << "Introduzca número de Pokémon atendidos: ";
	stream >> num;
	cout << "Introduzca tipo: ";
	stream >> tipo;
	cout << "Introduzca región: ";
	stream >> region;
	c.setNombre(n);
	c.setNumeroPokemon(num);
	c.setTipo(tipo);
	c.setRegion(region);
	return stream;
}

//TODO Apartado d) +
CentroPokemon operator+(CentroPokemon const & c1, CentroPokemon const & c2)
{
	CentroPokemon nuevo;
	nuevo.setNombre(c1.getNombre() + " " + c2.getNombre());
	nuevo.setNumeroPokemon(c1.getNumeroPokemon() + c2.getNumeroPokemon());
	nuevo.setTipo(c1.getTipo() + " " + c2.getTipo());
	nuevo.setRegion(c1.getRegion() + " " + c2.getRegion());
	return nuevo;
}

//TODO Definicion de las funciones fuera de la clase

//TODO Apartado g)
float getNumeroMedioPokemon(list<CentroPokemon> const & l, string region)
{
	list<CentroPokemon>::const_iterator it = l.begin();
	float m = 0.0;
	int n = 0;
	while (it != l.end())
	{
		if (it->getRegion() == region)
		{
			m += it->getNumeroPokemon();
			n++;
		}
		it++;
	}
	if (n == 0) return 0.0; 
	m = 1.0 * m / n;
	return m;
}

//TODO Apartado h)
map<string, list<CentroPokemon>> getCentrosPorTipo(list<CentroPokemon> const & l)
{
	map<string, list<CentroPokemon>> mp;
	list<CentroPokemon>::const_iterator it = l.begin();
	while (it != l.end())
	{
		mp[it->getTipo()].push_back(*it);
		it++;
	}
	return mp;
}

//TODO Apartado i)
set<CentroPokemon> actualizarPokemon(set<CentroPokemon> const & c, string region)
{
	set<CentroPokemon> c2;
	set<CentroPokemon>::const_iterator it = c.begin();
	while (it != c.end())
	{
		if (it->getRegion() == region)
		{
			c2.insert(CentroPokemon(it->getNombre(), it->getNumeroPokemon() * 1.2, it->getTipo(), it->getRegion()));
		}
		else
		{
			c2.insert(CentroPokemon(it->getNombre(), it->getNumeroPokemon() * 0.95, it->getTipo(), it->getRegion()));
		}
		it++;
	}
	return c2;
}

//TODO Apartado j)
list<string> getCentroMasActivoPorTipo(set<CentroPokemon> const & c, string tipo)
{
	list<string> resultado;
	int max_pokemon = -1;

	set<CentroPokemon>::const_iterator it = c.begin();
	while (it != c.end())
	{
		if (it->getTipo() == tipo)
		{
			if (it->getNumeroPokemon() > max_pokemon)
			{
				resultado.clear();
				resultado.push_back(it->getNombre());
				max_pokemon = it->getNumeroPokemon();
			}
			else if (it->getNumeroPokemon() == max_pokemon)
			{
				resultado.push_back(it->getNombre());
			}
		}
		it++;
	}
	return resultado;
}

