#include "cabecera.h"
#include <iostream>
using namespace std;

int main() {
	list<string> lista1, lista2;
	leerLista(lista1);
	leerLista(lista2);

	cout << "Lista 1:" << endl;
	mostrarLista(lista1);
	cout << "Lista 2:" << endl;
	mostrarLista(lista2);
	return 0;
}
