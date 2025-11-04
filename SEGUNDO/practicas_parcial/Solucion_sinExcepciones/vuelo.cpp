#include<iostream>
#include"vuelo.h"

using namespace std;

Vuelo & Vuelo::operator=(Vuelo const & v){
	setDestino(v.getDestino());
	setFecha(v.getFecha());
	setNumP(v.getNumP());
	setPrecio(v.getPrecio());
	return *this;
}


bool Vuelo::operator<(Vuelo const & v)const{
	//return (getFecha() < v.getFecha() || (getFecha()==v.getFecha() && getDestino() > v.getDestino()) || (getFecha()==v.getFecha() && getDestino() == v.getDestino() && getNumeroPasajeros() < v.getNumeroPasajeros()));
	
	if (getFecha() < v.getFecha()){
		return true;
	}
	else{
		if(getFecha()==v.getFecha()){
			if(getDestino() > v.getDestino()){
				return true;
			}
			else{
				if(getDestino() == v.getDestino()){
					return getNumP() < v.getNumP();
				}
				else{
					return false;
				}
			}
		}
		else{
			return false;
		}
	}
}
	

// Sobrecarga operador <<, permite hacer cout << v
ostream & operator<<(ostream & s, Vuelo const & v){
	s << "(" << v.getDestino() << "," << v.getFecha() << "," << v.getNumP() << "," << v.getPrecio() <<  ")" << endl;
	return s;
}
// Sobrecarga operador >>, permite hacer cin >> v
istream & operator>>(istream & s, Vuelo & v){
	string aux;
	float f;
	int i;
	cout << "Introduce destino: ";
	s >> aux;
	v.setDestino(aux);
	cout << "Introduce fecha (YYYYMMDD): ";
	s >> aux;
	v.setFecha(aux);
	cout << "Introduce pasajeros: ";
	s >> i;
	v.setNumP(i);
	cout << "Introduce precio: ";
	s >> f;
	v.setPrecio(f);
	return s;
}

















