#ifndef _REINA_H_
#define _REINA_H_

#include<iostream>

using namespace std;

class Reina
{
	private:
		int fila;
		int columna;
		int dPrincipal;
		int dSecundaria;
		
	public:
		//Constructor
		Reina(int f, int c)
		{
			setFila(f);
			setColumna(c);
			setDPrincipal(f-c);
			setDSecundaria(f+c);
		}
		
		//Observadores
		int getFila() const {return fila;}
		int getColumna() const {return columna;}
		int getDPrincipal() const {return dPrincipal;}
		int getDSecundaria() const {return dSecundaria;}
		
		//Modificadores
		void setFila(int f){fila=f;}
		void setColumna(int c){columna=c;}
		void setDPrincipal(int dP){dPrincipal=dP;}
		void setDSecundaria(int dS){dSecundaria=dS;}
		
		//Sobrecarga
		Reina & operator = (Reina const & r);
		bool operator==(const Reina & r) const;
		void mostrar()const;
		
		

};

#endif
