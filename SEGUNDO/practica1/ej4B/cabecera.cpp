#include <iostream>
#include"cabecera.h"

using namespace std;

void leerLista(set<string>& l) {
	string aux;
	cout << "Introduce un nombre (escribir exit para salir)" << endl;
	cin >> aux;
	
	while(aux != "exit") {
		
		l.insert(aux);
		cin >> aux;
	} 	
}

void mostrarLista(const set<string>& l) {
	set<string>::const_iterator it = l.begin();
	int aux = 0;
	while(it!=l.end()) {
		cout<< aux+1 << " " << *it << endl;
		it++;
		aux++;
	}
}

void eliminarMenos4Caracteres(set<string>& l) {
	set<string>::iterator it = l.begin();
	while(it!=l.end()) {
		if (it->length() < 4) {
			it = l.erase(it);
		} else {
			it++;
		}
	}
}

set<string> interseccion(const set<string>& s1, const set<string>& s2) {
	
	set<string> result;
	set<string>::const_iterator it = s1.begin();
	
	while(it!=s1.end()) {
		if(s2.find(*it) != s2.end()){
			result.insert(*it);
		}
		it++;
	}
	return result;
}


set<string> diferencia(const set<string>& s1, const set<string>& s2) {
	
	set<string> result;
	set<string>::const_iterator it = s1.begin();
	
	while(it!=s1.end()) {
		if(s2.find(*it) == s2.end()){
			result.insert(*it);
		}
		it++;
	}
	return result;
}

set<string> vocales(const set<string>& l1) {
	set<string> result;
	set<string> voc = {"a","e","i","o","u","A","E","I","O","U"};
	set<string>::const_iterator it3;
	set<string>::const_iterator it1 = l1.begin();
	
	while(it1 != l1.end()) {
		bool v = false;
		
		
		for (it3 = voc.begin(); it3 != voc.end(); it3++) {
			if ((*it1).substr(0,1) == *it3) {
				v = true;
				break;
			}
		}
		
		if (v) {
			result.insert(*it1);
		}
		
		it1++;
	}
	
	return result;
}



