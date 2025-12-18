#ifndef _OBJETOMOCHILA_H_
#define _OBJETOMOCHILA_H_


#include<iostream>

using namespace std;

class ObjetoMochila
{
	private:
		string nombre;
		int valor;
		int peso;
		int cantidad;
		float q;
		
	public:
		//Constructor
		ObjetoMochila(string n="", int v=0, int p=0, int c=0)
		{
			setNombre(n);
			setValor(v);
			setPeso(p);
			setCantidad(c);
			if(p!=0)
			{
				setQ(1.0*v/p);
			}
			else
			{
				setQ(0.0);
			}
		}
		
		//Observadores
		string getNombre() const {return nombre;}
		int getValor() const {return valor;}
		int getPeso() const {return peso;}
		int getCantidad() const {return cantidad;}
		float getQ() const {return q;}
		
		//Modificadores
		void setNombre(string n){nombre=n;}
		void setValor(int v){valor=v;}
		void setPeso(int p){peso=p;}
		void setCantidad(int c){cantidad=c;}
		void setQ(float Q){q=Q;}
		
		//Sobrecarga
		ObjetoMochila & operator = (ObjetoMochila const & ob)
		{
			setNombre(ob.getNombre());
			setValor(ob.getValor());
			setPeso(ob.getPeso());
			setCantidad(ob.getCantidad());
			setQ(ob.getQ());
			return *this;		
		}
		
		bool operator < (ObjetoMochila const & obj) const;
		
		void mostrar() const;


};

#endif
