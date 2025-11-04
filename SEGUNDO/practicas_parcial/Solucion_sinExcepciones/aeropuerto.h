#ifndef _AEROPUERTO_H_
#define _AEROPUERTO_H_

#include<iostream>
#include"vuelo.h"
#include<set>
#include<list>
#include<map>

class Aeropuerto{
	private:
		int codigo;
		string ciudad;
		set <Vuelo> vuelos;
		
	public:
		// Constructor
		Aeropuerto(int c=0, string ciu=""){
			codigo = c;
			ciudad = ciu;
			vuelos.clear();
		}
		
		// Observadores
		int getCodigo() const{return codigo;}
		string getCiudad() const {return ciudad;}
		set <Vuelo> getVuelos() const {return vuelos;}
		
		// Modificadores
		void setCodigo(int c){codigo = c;}
		void setCiudad(string c){ciudad = c;}
		void setVuelos(set <Vuelo> const & vs){vuelos = vs;}

		// Añadir y quitar
		void addVuelo(Vuelo const & v);
		void deleteVuelo(Vuelo const & v);
		
		// Sobrecarga =
		Aeropuerto & operator=(Aeropuerto const & a);
		
		// Apartado d)
		Vuelo getMayorRecaudacion() const;
		// Apartado e)
		list <Vuelo> getSobreRecaudacion(float u) const;
		// Apartado f)
		map <string, list<Vuelo> > getRelacionFechaVuelos() const;
		// Apartado g)
		map <string, float> getRecaudacionDestino() const;
				
		
};

// Sobrecarga del operador
ostream & operator<<(ostream & s, Aeropuerto const & a);


#endif
