#include "cabecera.h"
#include <iostream>
using namespace std;

int main() {
	list<string> lista1, lista2;

	cout << "=== Lectura de listas ===" << endl;
	cout << "Primera lista:" << endl;
	leerLista(lista1);

	cout << "Segunda lista:" << endl;
	leerLista(lista2);

	cout << endl << "=== Listas originales ===" << endl;
	cout << "Lista 1:" << endl;
	mostrarLista(lista1);
	cout << "Lista 2:" << endl;
	mostrarLista(lista2);

	// a) Eliminar duplicados
	eliminarDuplicados(lista1);
	eliminarDuplicados(lista2);

	// b) Eliminar los nombres con menos de 4 caracteres
	eliminarMenos4Caracteres(lista1);
	eliminarMenos4Caracteres(lista2);

	cout << endl << "=== Listas depuradas (sin duplicados ni nombres cortos) ===" << endl;
	cout << "Lista 1:" << endl;
	mostrarLista(lista1);
	cout << "Lista 2:" << endl;
	mostrarLista(lista2);

	// c) Intersección
	list<string> comunes = interseccion(lista1, lista2);
	cout << endl << "=== Nombres en ambas listas ===" << endl;
	mostrarLista(comunes);

	// d) Diferencia (en la primera pero no en la segunda)
	list<string> dif = diferencia(lista1, lista2);
	cout << endl << "=== Nombres en la primera pero no en la segunda ===" << endl;
	mostrarLista(dif);

	// e) Nombres que empiezan por vocal
	list<string> voc = vocales(lista1, lista2);
	cout << endl << "=== Nombres que empiezan por vocal ===" << endl;
	mostrarLista(voc);

	// f) Ordenar alfabéticamente y mostrar
	cout << endl << "=== Listas ordenadas ===" << endl;
	ordenar(lista1);
	ordenar(lista2);

	cout << "Lista 1 ordenada:" << endl;
	mostrarLista(lista1);
	cout << "Lista 2 ordenada:" << endl;
	mostrarLista(lista2);

	cout << endl << "=== Fin del programa ===" << endl;
	return 0;
}

