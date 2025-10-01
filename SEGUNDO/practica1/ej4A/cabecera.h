#include<iostream>
using namespace std;
#include<list>

void leerLista(list<string>& l);
void mostrarLista(const list<string>& l);
void eliminarMenos4Caracteres(list<string>& l);
list<string> interseccion(const list<string> l1, const list<string> l2);
list<string> diferencia(const list<string> l1, const list<string> l2);
