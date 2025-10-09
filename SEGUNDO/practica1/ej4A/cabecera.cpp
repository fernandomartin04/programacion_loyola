#include <iostream>
#include"cabecera.h"

using namespace std;


// Funcion que elimina duplicados, la utilizo antes de realizar los return de las listas
void eliminarDuplicados(list<string>& l) {
	list<string>::iterator it1 = l.begin();
	
	while(it1 != l.end()){
		list<string>::iterator it2 = it1;
		it2++;
		
		while(it2 != l.end()) {
			if(*it1 == *it2) {
				it2 = l.erase(it2);
			} else{
				it2++;
			}
		}
		it1++;
	}
}
////////////////////

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
			it = l.erase(it);
		} else {
			it++;
		}
	}
}

list<string> interseccion(const list<string>& l1, const list<string>& l2) {
	
	list<string> result;
	list<string>::const_iterator it1 = l1.begin();
	list<string>::const_iterator it2;
	
	while(it1!=l1.end()) {
		it2 = l2.begin();
		
		while(it2!=l2.end()) {
			if (*it1 == *it2) {
				result.push_back(*it1);
				break;
			}
			it2++;
		}
		
		it1++;
	}
	eliminarDuplicados(result);
	return result;
}


list<string> diferencia(const list<string>& l1, const list<string>& l2) {
	
	list<string> result;
	list<string>::const_iterator it1 = l1.begin();
	list<string>::const_iterator it2;
	
	while(it1!=l1.end()) {
		bool ambas = false;
		it2 = l2.begin();
		
		while(it2!=l2.end()) {
			if (*it1 == *it2) {
				ambas = true;
				break;
			}
			it2++;
		}
		
		if (!ambas){
			result.push_back(*it1);
		}
		it1++;
		
	}
	eliminarDuplicados(result);
	return result;
}

list<string> vocales(const list<string>& l1) {
	list<string> result;
	list<string> voc = {"a","e","i","o","u","A","E","I","O","U"};
	list<string>::const_iterator it3;
	list<string>::const_iterator it1 = l1.begin();
	
	while(it1 != l1.end()) {
		bool v = false;
		
		
		for (it3 = voc.begin(); it3 != voc.end(); it3++) {
			if ((*it1).substr(0,1) == *it3) {
				v = true;
			}
		}
		
		if (v) {
			result.push_back(*it1);
		}
		
		it1++;
	}
	
	eliminarDuplicados(result);
	return result;
}

void ordenar(list<string>& l) {
	list<string>::iterator it = l.begin();
	l.sort();
	
	while(it != l.end()) {
		cout << *it << endl;
		it++;
	}
	
}


