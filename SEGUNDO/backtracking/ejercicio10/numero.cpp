#include<iostream>
#include"numero.h"

using namespace std;

//Sobrecarga
Numero & Numero::operator = (Numero const & n){
	setValor(n.getValor());
	setCantidad(n.getCantidad());
	return *this;
}

bool Numero::operator<(Numero const & n) const{
	return getValor() < n.getValor();
}

//Funcion de salida
void Numero::mostrar() const{
	cout << getValor();
}
