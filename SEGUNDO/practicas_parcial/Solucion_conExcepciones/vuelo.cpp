#include<iostream>
#include"vuelo.h"

using namespace std;

// Sobrecarga operador =
Vuelo & Vuelo::operator=(Vuelo const & v){
	destino = v.getDestino(); //setDestino(v.getDestino());
	fecha = v.getFecha(); // setFecha(v.getFecha());
	numP = v.getNumP(); // setNumP(v.getNumP());
	precio = v.getPrecio();	// setPrecio(v.getPrecio());
	return *this;
}

// Sobrecarga operador < (sirve para ordenar)
bool Vuelo::operator<(Vuelo const & v) const{
	if(getFecha() < v.getFecha()){
		return true;
	}
	else{
		if(getFecha() == v.getFecha())
		{
			if(getDestino() > v.getDestino()){
				return true;
			}
			else{
				if(getDestino()==v.getDestino()){
					if(getNumP() < v.getNumP()){
						return true;
					}
					else{
						return false;
					}
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
	/*
	s << "----------------------------" << endl;
	s << "Destino: " << v.getDestino() << endl;
	s << "Fecha: " << v.getFecha() << endl;
	s << "Pasajeros: " << v.getNumP() << endl;
	s << "Precio: " << v.getPrecio() << endl;
	*/
	// Os dejo esta forma mas compacta para mostrar la informacion
	s << "(" << v.getDestino() << ", " << v.getFecha() << ", " << v.getNumP() << ", " << v.getPrecio() << "$)" << endl;
	return s;
}

// Sobrecarga operador >>, permite hacer cin >> v
istream & operator>>(istream & s, Vuelo & v){
	string destino, fecha;
	int np;
	float precio;
	
	cout << "Introduce un destino: ";
	s >> destino;
	cout << "Introduce una fecha (AAAAMMDD): ";
	s >> fecha;
	cout << "Introduce pasajeros: ";
	s >> np;
	cout << "Introduce precio: ";
	s >> precio;
	v.setDestino(destino);
	v.setFecha(fecha);
	v.setNumP(np);
	v.setPrecio(precio);
	return s;
}
