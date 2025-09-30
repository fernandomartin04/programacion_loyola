#ifndef _CABECERA_H_
#define _CABECERA_H_

#include<iostream>
#include<map>
#include<list>
#include<set>

using namespace std;

class Instituto{

	private:
		string nombre;
		string ciudad;
		int numero_alumnos;
		int numero_profesores;
		
	public:
		Instituto(string n="", string c="", int na=0, int np=0)
		{
			nombre = n;
			ciudad = c;
			numero_alumnos = na;
			numero_profesores = np;
		}
		
		string getNombre() const {return nombre;}
		string getCiudad() const {return ciudad;}
		int getNumeroAlumnos() const {return numero_alumnos;}
		int getNumeroProfesores() const {return numero_profesores;}
		
		void setNombre(string n){nombre = n;}
		void setCiudad(string c){ciudad = c;}
		void setNumeroAlumnos(int na){numero_alumnos = na;}
		void setNumeroProfesores(int np){numero_profesores = np;}
		
		//TODO a)
		// Operador =
		Instituto & operator=(Instituto const & i);
		// Operador <, por orden descendete de nombre
		bool operator<(Instituto const & i) const;
		// metodo show (nombre,ciudad,numero_alumnos,numero_profesores)
		void show() const;
};
// TODO b) map <string, list <Instituto> > getCiudadProfesores(...);
map <string, list <Instituto> > getCiudadProfesores(set <Instituto> const & s);

// TODO c) list <Instituto> getInstitutoMayorProfesores(...);
list <Instituto> getInstitutoMayorProfesores(set <Instituto> const & s);

// TODO d) map <string, float> getCiudadRatio(...);
map <string, float> getCiudadRatio(set <Instituto> const & s);
#endif
