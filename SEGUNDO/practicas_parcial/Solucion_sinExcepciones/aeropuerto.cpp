#include<iostream>
#include"aeropuerto.h"

using namespace std;

// Añadir y quitar
void Aeropuerto::addVuelo(Vuelo const & v){
	vuelos.insert(v);
}

void Aeropuerto::deleteVuelo(Vuelo const & v){
	vuelos.erase(v);
}

// Sobrecarga =
Aeropuerto & Aeropuerto::operator=(Aeropuerto const & a){
	setCodigo(a.getCodigo());
	setCiudad(a.getCiudad());
	setVuelos(a.getVuelos());
	return *this;
}


// Apartado d)
Vuelo Aeropuerto::getMayorRecaudacion() const{
	set <Vuelo>::const_iterator it = vuelos.begin();
	Vuelo vuelo_max;
	float max = 0;
	while(it!=vuelos.end()){
		if(it->getNumP()*it->getPrecio() > max)
		{
			max = it->getNumP() * it->getPrecio();
			vuelo_max = *it;
		}
		it++;
	}
	return vuelo_max;
}

// Apartado e)
list <Vuelo> Aeropuerto::getSobreRecaudacion(float u) const{
	set <Vuelo>::const_iterator it = vuelos.begin();
	list <Vuelo> l;
	while(it!=vuelos.end()){
		if(it->getNumP()*it->getPrecio() > u)
		{
			l.push_back(*it);
		}
		it++;
	}
	return l;
}

// Apartado f)
map <string, list<Vuelo> > Aeropuerto::getRelacionFechaVuelos() const{
	map <string, list <Vuelo> > mp;
	set <Vuelo>::const_iterator it = vuelos.begin();
	while(it!=vuelos.end()){
		string fecha = it->getFecha();
		mp[fecha].push_back(*it);
		it++;
	}
	return mp;
}

// Apartado g)
map <string, float> Aeropuerto::getRecaudacionDestino() const{
	map <string, float > mp;
	set <Vuelo>::const_iterator it = vuelos.begin();
	while(it!=vuelos.end()){
		string destino = it->getDestino();
		mp[destino]+=it->getNumP()*it->getPrecio();
		it++;
	}
	return mp;
}

// Sobrecarga del operador
ostream & operator<<(ostream & s, Aeropuerto const & a){
	s << "Codigo: " << a.getCodigo() << endl;
	s << "Ciudad: " << a.getCiudad() << endl;
	set <Vuelo> vuelos = a.getVuelos();
	set <Vuelo>::const_iterator it = vuelos.begin();
	while(it!=vuelos.end())
	{
		s << *it;
		it++;
	}
	return s;
}












