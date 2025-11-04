#include<iostream>
#include"aeropuerto.h"

using namespace std;

//Añadir
void Aeropuerto::addVuelo(Vuelo const & v){
	vuelos.insert(v);
}

//Quitar
void Aeropuerto::deleteVuelo(Vuelo const & v){
	
	set <Vuelo>::const_iterator it = vuelos.begin();
	while(it!=vuelos.end()){
		if(it->getDestino() == v.getDestino()){
			vuelos.erase(it);
			break;
		}
		it++;
	}	
}

//Sobrecarga =
Aeropuerto & Aeropuerto::operator=(Aeropuerto const & a){
	setCodigo(a.getCodigo());
	setCiudad(a.getCiudad());
	setVuelos(a.getVuelos());
	return *this;		
}

//Apartado d)
Vuelo Aeropuerto::getMayorRecaudacion() const{
	// Ponemos el iterador al principio del set <Vuelo> vuelos (variable privada de la clase)
	set <Vuelo>::const_iterator it = vuelos.begin();
	// Consideramos que el vuelo con más recaudación es el primero
	Vuelo max = *it;
	while(it!=vuelos.end()) // Iteramos sobre el conjunto de vuelos con el iterador
	{
		// Si encontramos un iterador, es decir, un vuelo del set cuya recaudación
		// es mayor que max, actualizamos el valor de max
		if((it->getNumP()*it->getPrecio()) > (max.getNumP()*max.getPrecio()))
		{
			max = *it;
		}
		it++;
	}
	
	return max;
}

//Apartado e)
list <Vuelo> Aeropuerto::getSobreRecaudacion(float u) const{
	// Generamos la lista de vuelos (inicialmente vacía)
	list <Vuelo> l;
	// Ponemos el iterador al principio del set <Vuelo> vuelos (variable privada de la clase)
	set <Vuelo>::const_iterator it = vuelos.begin();
	while(it!=vuelos.end()){ // Iteramos
		//Si el vuelo apuntado por it tiene una recaudación mayor al umbral, se inserta en la lista
		if(it->getNumP()*it->getPrecio() > u) 
		{
			l.push_back(*it);
		}
		it++;
	}
	
	return l;
}

//Apartado f)
map <string, list<Vuelo> > Aeropuerto::getRelacionFechaVuelos() const{
	// Declaramos el map.
	// La parte primera - clave (first) se trata de un string para almacenar la fecha
	// La parte segunda - valor (second) se trata de una lista de vuelos
	map <string, list<Vuelo> > mp;
	// Iterador para el set de vuelos
	set <Vuelo>::const_iterator it = vuelos.begin();
	while(it!=vuelos.end()){
		// mp[clave] = valor, permite añadir el valor a la clave si no existe o sobreescribirla
		// en este caso, como la parte second es una lista, se usa mp[clave].push_back(valor)
		mp[it->getFecha()].push_back(*it);
		it++;
	}
	return mp;
}

// Apartado g)
map <string, float> Aeropuerto::getRecaudacionDestino() const{
	// Declaramos el map.
	// La parte primera - clave (first) se trata de un string para almacenar el destino
	// La parte segunda - valor (second) se trata de un float para la recaudacion
	map <string, float> mp;
	set <Vuelo>::const_iterator it = vuelos.begin();
	while(it!=vuelos.end()){
		// Se mira si ese destino ya ha sido introducido en el map como clave
		// Si no es asi la función find devuelve el final del map
		if(mp.find(it->getDestino())==mp.end())
		{
			mp[it->getDestino()] = 0; // En este caso añadimos ese destino como clave y su valor es 0
		}
		// Una vez se ha añadido o ya ha sido añadido previamente, se va acumulando la recaudacion
		mp[it->getDestino()]+=it->getNumP()*it->getPrecio();
		it++;
	}
	return mp;
}

//Sobrecarga operador <<
ostream & operator<<(ostream & s, Aeropuerto const & a){
	s << "Aeropuerto con codigo " << a.getCodigo() << endl;
	s << "Ciudad: " << a.getCiudad() << endl;
	set <Vuelo> vuelos = a.getVuelos();
	set <Vuelo>::const_iterator it = vuelos.begin();
	while(it!=vuelos.end())
	{
		cout << *it;
		it++;
	}
	return s;
}
