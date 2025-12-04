#include<iostream>
#include"estadorecubrimiento.h"

using namespace std;

//Funciones de estado
void EstadoRecubrimiento::avanza(Subconjunto const & s)
{
	sol.addSubconjunto(s);
	setNSubconjuntosVisitados(getNSubconjuntosVisitados()+1);
}

void EstadoRecubrimiento::retrocede(Subconjunto const & s)
{
	sol.deleteSubconjunto(s);
	setNSubconjuntosVisitados(getNSubconjuntosVisitados()-1);
}

list <Subconjunto> EstadoRecubrimiento::getAlternativas(Subconjunto const & s)
{
	list <Subconjunto> l;
	if(!isIn(s))
	{
		l.push_back(Subconjunto(s.getDatos(),s.getPeso(),1));
	}
	l.push_back(s);
	return l;
}

Subconjunto EstadoRecubrimiento::getMejorAlternativa(Subconjunto const & s)
{
	if(!isIn(s))
	{
		return Subconjunto(s.getDatos(),s.getPeso(),true);
	}
	return Subconjunto(s);
}

bool EstadoRecubrimiento::esFinal()
{
	return (getNSubconjuntosVisitados()==getNSubconjuntosTotales() || sol.getUniversoGenerado()==universo_buscado);
}

bool EstadoRecubrimiento::isIn(Subconjunto const & s) const
{
	set <int> datos = s.getDatos();
	set <int>::const_iterator it=datos.begin();
	while(it!=datos.end())
	{
		if(sol.getUniversoGenerado().count(*it)==0)
		{
			return false;
		}
		it++;
	}
	return true;
}
