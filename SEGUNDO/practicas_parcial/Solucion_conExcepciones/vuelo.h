#ifndef _VUELO_H_
#define _VUELO_H_

#include<iostream>
#include<exception>

using namespace std;

class Vuelo{

	private:
		string destino;
		string fecha;
		int numP;
		float precio;

	public:
		// Constructor
		Vuelo(string d="", string f="", int np=0, float p=0.0){
			destino = d;
			fecha = f;
			numP = np;
			try{
				if(p<0){
					throw exception();
				}
				precio = p;
			}
			catch(exception & e){
				cout << e.what() << endl;
				precio = 0;
			}
		}

		// Observadores
		string getDestino() const{
			return destino;
		}
		string getFecha() const{
			return fecha;
		}
		int getNumP() const{
			return numP;
		}
		float getPrecio() const{
			return precio;
		}
		
		// Modificadores
		void setDestino(string d){
			destino = d;
		}
		void setFecha(string f){
			fecha = f;
		}
		void setNumP(int np){
			numP = np;
		}
		void setPrecio(float p){
			precio = p;
		}
		
		// Sobrecarga operador =
		Vuelo & operator=(Vuelo const & v);
		// Sobrecarga operador < (sirve para ordenar)
		bool operator<(Vuelo const & v) const;
};

// Sobrecarga operador <<, permite hacer cout << v
ostream & operator<<(ostream & s, Vuelo const & v);
// Sobrecarga operador >>, permite hacer cin >> v
istream & operator>>(istream & s, Vuelo & v);

#endif
