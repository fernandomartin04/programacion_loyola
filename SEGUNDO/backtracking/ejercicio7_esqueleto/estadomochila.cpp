#include<iostream>
#include"solucionmochila.h"
#include"estadomochila.h"
#include<list>

using namespace std;

// TODO Funciones de estado
void EstadoMochila::avanza(ObjetoMochila const & obj)
{
    sol.addObjeto(obj);
    setCapacidadRestante(getCapacidadRestante() - obj.getPeso()*obj.getCantidad());
    setObjVisitados(getObjVisitados() + 1);
}

void EstadoMochila::retrocede(ObjetoMochila const & obj)
{
    sol.addObjeto(obj);
    setCapacidadRestante(getCapacidadRestante() + obj.getPeso()*obj.getCantidad());
    setObjVisitados(getObjVisitados() - 1);
}

list <ObjetoMochila> EstadoMochila::getAlternativas(ObjetoMochila const & obj)
{
    int numMaximo_insertar = getCapacidadRestante()/obj.getPeso();
	if(numMaximo_insertar > obj.getCantidad())
	{
		numMaximo_insertar = obj.getCantidad();
	}
	list <ObjetoMochila> l;
	for(int i=numMaximo_insertar; i>=0; i--)
	{
		l.push_back(ObjetoMochila(obj.getNombre(),obj.getValor(),obj.getPeso(),i));
	}
	return l;
}

ObjetoMochila EstadoMochila::getMejorAlternativa(ObjetoMochila const & obj)
{
    int numMaximo_insertar = getCapacidadRestante()/obj.getPeso();
	if(numMaximo_insertar > obj.getCantidad())
	{
		numMaximo_insertar = obj.getCantidad();
	}
	return ObjetoMochila(obj.getNombre(),obj.getValor(),obj.getPeso(),numMaximo_insertar);
}

bool EstadoMochila::esFinal()
{
    return (getCapacidadRestante() == 0 || getObjVisitados() == getObjTotales());
}
