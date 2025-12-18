#ifndef _SOLUCIONMOCHILA_H_
#define _SOLUCIONMOCHILA_H_

#include<iostream>
#include<list>
#include"objetomochila.h"

using namespace std;

class SolucionMochila
{
	private:
		list <ObjetoMochila> objs;
		int valorTotal;
		int pesoTotal;
		
	public:
		//Constructor
		SolucionMochila()
		{
			setValorTotal(0.0);
			setPesoTotal(0.0);
		}
		
		SolucionMochila(SolucionMochila const & s)
		{
			*this = s;
		}
		
		~SolucionMochila()
		{
			objs.clear();
			setValorTotal(0.0);
			setPesoTotal(0.0);
		}
		
		//Observadores
		list <ObjetoMochila> const & getObjs() const {return objs;}
		int getValorTotal() const {return valorTotal;}
		int getPesoTotal() const {return pesoTotal;}
		
		//Modificadores
		void setObjs(list <ObjetoMochila> const & l){objs=l;}
		void setValorTotal(int v){valorTotal=v;}
		void setPesoTotal(int p){pesoTotal=p;}
		
		//Sobrecarga
		SolucionMochila & operator = (SolucionMochila const & s)
		{
			setObjs(s.getObjs());
			setValorTotal(s.getValorTotal());
			setPesoTotal(s.getPesoTotal());
			return *this;
		}
		
		bool operator > (SolucionMochila const & s) const;
		
		// TODO Insertar y quitar objetos de la solucion
		void addObjeto(ObjetoMochila const & obj);
		void deleteObjeto(ObjetoMochila const & obj);
		
		//Funcion de salida
		void mostrar() const;

};

#endif
