#include<iostream>
#include"reina.h"

using namespace std;


Reina & Reina::operator = (Reina const & r)
{
	setFila(r.getFila());
	setColumna(r.getColumna());
	setDPrincipal(r.getDPrincipal());
	setDSecundaria(r.getDSecundaria());
	return *this;
}

bool Reina::operator==(const Reina & r) const {
	return r.getColumna() == columna && r.getDPrincipal() == dPrincipal && r.getDSecundaria() == dSecundaria && r.getFila() == fila;
}

void Reina::mostrar() const
{
	cout << "(" << getFila() << ", " << getColumna() << ");  Dp: " << getDPrincipal() << "; Ds: " << getDSecundaria() << endl;
}
