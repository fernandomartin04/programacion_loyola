#include<iostream>
using namespace std;
#include<set>

void eliminarDuplicados(set<string>& l);
void leerLista(set<string>& l);
void mostrarLista(const set<string>& l);
void eliminarMenos4Caracteres(set<string>& l);
set<string> interseccion(const set<string>& s1, const set<string>& s2);
set<string> diferencia(const set<string>& s1, const set<string>& s2);
set<string> vocales(const set<string>& l1);
