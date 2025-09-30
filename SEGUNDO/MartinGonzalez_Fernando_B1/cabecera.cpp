#include<iostream>
#include"cabecera.h"

using namespace std;

// Operador =
operator=(Instituto& i) const {
	this->n=i.n;
	this->c=i.c;
	this->na=i.na;
	this->np=i.np;
}

// Operador <, por orden descendente de nombre
bool operator < (Instituto const & i) const {
	return nombre < i.nombre.sort();
}

// metodo show (nombre,ciudad,numero_alumnos,numero_profesores)




// TODO b)
map<string, list<Instituto>>getCiudadProfesores(set<Instituto>) {
	map<string, >
}



// TODO c)
list<Instituto> getInstitutoMayorProfesores(const set<Instituto>) {
	set<Instituto> :: const_iterator it;
	for (it = Instituto.begin(); it != Instituto.end(); it++) {
		string nombre = it
		if (Instituto.np(it) > ) {
			
		}
	}
}



// TODO d)


