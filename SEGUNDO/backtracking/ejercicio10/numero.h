#ifndef _NUMERO_H_
#define _NUMERO_H_

#include<iostream>

using namespace std;

class Numero{
	private:
		int valor;
		int cantidad;
		
	public:
		//Constructor
		Numero(int v=-1, int c=0){
			setValor(v);
			setCantidad(c);
		}
		
		Numero(Numero const & n){
			*this = n;
		}
		
		//Observadores
		int getValor() const {return valor;}
		int getCantidad() const {return cantidad;}
		
		//Modificadores
		void setValor(int v){valor = v;}
		void setCantidad(int c){cantidad = c;}
		
		//Sobrecarga
		Numero & operator = (Numero const & n);
		bool operator<(Numero const & n) const;
		
		//Funcion de salida
		void mostrar() const;
};

#endif
