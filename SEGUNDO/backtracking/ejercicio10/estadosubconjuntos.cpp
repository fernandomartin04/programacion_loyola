#include<iostream>
#include"estadosubconjuntos.h"

using namespace std;

//Funciones de estado
void EstadoSubconjuntos::avanza(Numero const & n)
{
	sol.addElemento(n);
	setSumaRestante(getSumaRestante()-n.getValor()*n.getCantidad());
	setNElementosVisitados(getNElementosVisitados()+1);
}

void EstadoSubconjuntos::retrocede(Numero const & n)
{
	sol.deleteElemento(n);
	setSumaRestante(getSumaRestante()+n.getValor()*n.getCantidad());
	setNElementosVisitados(getNElementosVisitados()-1);
}

list <Numero> EstadoSubconjuntos::getAlternativas(Numero const & n)
{
	list <Numero> l;
	if(n.getValor() <= getSumaRestante())
	{
		l.push_back(Numero(n.getValor(),1));
	}
	l.push_back(n);
	return l;
}
Numero EstadoSubconjuntos::getMejorAlternativa(Numero const & n)
{
	if(n.getValor() <= getSumaRestante())
	{
		return Numero(n.getValor(),1);
	}
	return n;
}

bool EstadoSubconjuntos::esFinal()
{
	return (getNElementosVisitados() == getNElementosTotales() || getSumaRestante()==0);
}
