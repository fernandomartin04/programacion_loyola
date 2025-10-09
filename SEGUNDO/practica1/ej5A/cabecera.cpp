#include "cabecera.h"

map<string, list<string>> relacionCiudadCentros(const set<CentroDeportivo>& centros){
	set<CentroDeportivo> :: const_iterator it = centros.begin();
	map<string, list<string>> aux;
	
	while(it != centros.end()) {
		
		string ciudad = it->getCiudad();
		string nombre = it->getNombre();
		aux[ciudad].push_back(nombre);
		
		it++;
	}
	return aux;
}

map<string, list<string>> relacionDisciplinaCentros(const set<CentroDeportivo>& centros) {
	set<CentroDeportivo> :: const_iterator it = centros.begin();
	map<string, list<string>> aux;
	
}

map<string, int> relacionDisciplinaSocios(const set<CentroDeportivo>& centros){
	set<CentroDeportivo> :: const_iterator it = centros.begin();
	map<string, int> aux;
	
}

map<string, double> relacionCiudadPromedioSocios(const set<CentroDeportivo>& centros) {
	set<CentroDeportivo> :: const_iterator it = centros.begin();
	map<string, double> aux;
	
}

map<string, string> relacionCiudadDisciplinaComun(const set<CentroDeportivo>& centros) {
	set<CentroDeportivo> :: const_iterator it = centros.begin();
	map<string, string> aux;
	
}