#include <iostream>
#include"cabecera.h"

using namespace std;

////////////////////
list<string> repetidos(list<string> l) {
	list<string>::iterator it = l.begin();
	list<string> aux;
	
	bool repetido = false;
	
	while (it!=l.end()) {
		aux.push_back()
		it++;
	}
	
	return aux;
}
///////////////
void leerLista(list<string>& l) {
	string aux;
	cout << "Introduce un nombre (escribir exit para salir)" << endl;
	cin >> aux;
	
	while(aux != "exit") {
		
		
		bool repetido = false;
		list<string>::iterator it = l.begin();
		while (it!=l.end()) {
			if (*it == aux) {
				repetido = true;
				break;
			}
			it++;
		}
		if(!repetido) {
			l.push_back(aux);
		} else{
			cout << "Nombre repetido, no es posible" << endl;
		}
		cin >> aux;
	} 	
}

void mostrarLista(const list<string>& l) {
	list<string>::const_iterator it = l.begin();
	int aux = 0;
	while(it!=l.end()) {
		cout<< aux+1 << " " << *it << endl;
		it++;
		aux++;
	}
}

void eliminarMenos4Caracteres(list<string>& l) {
	list<string>::iterator it = l.begin();
	while(it!=l.end()) {
		if (it->length() < 4) {
			l.erase();
		} else {
			it++;
		}
	}
}

list<string> interseccion(const list<string> l1, const list<string> l2) {
	
	list<string> result;
	list<string>::const_iterator it1 = li.begin();
	list<string>::const_iterator it2 = l2.begin();
	
	while(it1!=l1.end()) {
		bool ambas = false;
		
		while(it2!=l2.end()) {
			if (*it1 == *it2) {
				ambas = true;
			}
			it2++;
		}
		
		if (ambas){
				result.push_back(*it1);
		}
		it1++;
	}
	
	return result;
}


list<string> diferencia(const list<string> l1, const list<string> l2) {
	
	list<string> result;
	list<string>::const_iterator it1 = li.begin();
	list<string>::const_iterator it2 = l2.begin();
	
	while(it1!=l1.end()) {
		bool ambas = false;
		
		while(it2!=l2.end()) {
			if (*it1 == *it2) {
				ambas = true;
			}
			it2++;
		}
		
		if (!ambas){
			result.push_back(*it1);
		}
		it1++;
	}
	
	return result;
}