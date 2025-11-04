#include<iostream>
#include"cabecera.h"

using namespace std;

Instituto & Instituto::operator=(Instituto const & i){
	setNombre(i.getNombre());
	setCiudad(i.getCiudad());
	setNumeroAlumnos(i.getNumeroAlumnos());
	setNumeroProfesores(i.getNumeroProfesores());
	return *this;
}

// Operador <, por orden descendete de nombre
bool Instituto::operator<(Instituto const & i) const{
	return getNombre() > i.getNombre();
}

// metodo show (nombre,ciudad,numero_alumnos,numero_profesores)
void Instituto::show() const{
	cout << "(" << nombre << "," << ciudad << "," << numero_alumnos << "," << numero_profesores << ")" << endl;
}

// TODO b)
map <string, list <Instituto> > getCiudadProfesores(set <Instituto> const & s){
	map <string, list <Instituto> > mp;
	set <Instituto>::const_iterator it = s.begin();
	while(it!=s.end()){
		mp[it->getCiudad()].push_back(*it);
		it++;
	}
	return mp;
}

// TODO c)
list <Instituto> getInstitutoMayorProfesores(set <Instituto> const & s){
	
	list <Instituto> l;
	set <Instituto>::const_iterator it = s.begin();
	int maximo = it->getNumeroProfesores();
	while(it!=s.end()){
		if (it->getNumeroProfesores() > maximo){
			maximo = it->getNumeroProfesores();
		}
		it++;
	}
	it = s.begin();
	while(it!=s.end()){
		if (it->getNumeroProfesores() == maximo){
			l.push_back(*it);
		}
		it++;
	}
	
	return l;
}

// TODO d)
map <string, float> getCiudadRatio(set <Instituto> const & s){
	map <string, float> mp;
	map <string, int> ciudad_alumnos;
	map <string, int> ciudad_profesores;
	set <Instituto>::const_iterator it = s.begin();
	while(it!=s.end()){
		ciudad_alumnos[it->getCiudad()] += it->getNumeroAlumnos();
		ciudad_profesores[it->getCiudad()] += it->getNumeroProfesores();
		it++;
	}
	
	map <string, int>::const_iterator it2 = ciudad_alumnos.begin();
	while(it2!=ciudad_alumnos.end()){
		mp[it2->first] = 1.0 * ciudad_alumnos[it2->first] / ciudad_profesores[it2->first];
		it2++;
	}
	
	return mp;
}
