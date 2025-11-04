#ifndef _VUELO_H_
#define _VUELO_H_

#include<iostream>
#include<exception>

using namespace std;

class Vuelo{
	private:
		string destino;
		string fecha; //AAAAMMDD
		int numero_pasajeros;
		float precio;
		
	public:
		//TODO Constructor
		Vuelo(string d="", string f="", int n=0, float p=0.0){
			destino = d;
			fecha = f;
			numero_pasajeros = n;
			precio = p;
		}
		
		// Observadores y modificadores
		string getDestino() const {return destino;}
		string getFecha() const {return fecha;}
		int getNumP() const {return numero_pasajeros;}
		float getPrecio() const {return precio;}
		
		void setDestino(string d){destino = d;}
		void setFecha(string f){fecha = f;}
		void setNumP(int n){numero_pasajeros = n;}
		void setPrecio(float p){precio = p;}
		
		Vuelo & operator=(Vuelo const & v);
		bool operator<(Vuelo const & v)const;
	
};

// Sobrecarga operador <<, permite hacer cout << v
ostream & operator<<(ostream & s, Vuelo const & v);
// Sobrecarga operador >>, permite hacer cin >> v
istream & operator>>(istream & s, Vuelo & v);

#endif
