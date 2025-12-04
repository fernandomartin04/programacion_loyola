#include "cabecera.h"

Cocinero & Cocinero::operator=(Cocinero const & c) {
	setNombre(c.getNombre());
	setNumeroIngredientes(c.getNumeroIngredientes());
	return *this;
}

void Cocinero::mostrar() {
	cout << "(" << getNombre() << ", " << getNumeroIngredientes() << ")" << endl;
}

int validarFilaIngredientes(Cocinero* v, int n) {
	return validarFilaIngredientes(v, 0, n);
}

int validarFilaIngredientes(Cocinero* v, int x0, int x1) {
	if ((x1-x0)==2) return v[x0].numero_ingredientes + v[x0+1].numero_ingredientes;
	int mitad = (x0+x1)/2;
	int izq = validarFilaIngredientes(v, x0, mitad);
	int derecha = validarFilaIngredientes(v, mitad, x1);
	if (izq==-1 || derecha==-1) return -1;
	if (izq!=derecha) return -1;
	return izq+derecha;
}
