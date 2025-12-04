#include<iostream>
#include"estadoasignacion.h"

using namespace std;

// TODO Funciones de estado
void EstadoAsignacion::avanza(Agente const & a)
{
	sol.addAgente(a);
	nVisitados++;
	nValidos++;
	
}

void EstadoAsignacion::retrocede(Agente const & a)
{
	if (nVisitados != 0 && nValidos != 0) {
		nVisitados--;
		nValidos--;
	}
	sol.deleteAgente(a);
}

list <Agente> EstadoAsignacion::getAlternativas(Agente const & a)
{
	list<Agente> alternativas;
	
	const set<int> agentesOcupados = sol.getAgentesUsados();
	const set<int> tareasOcupadas = sol.getTareasAsignadas();
	
	int idAgente = a.getCodeAgente();
	int idTarea = a.getTarea().getCodTarea();
	
	bool agenteLibre = (agentesOcupados.count(idAgente) == 0);
	bool tareaLibre = (tareasOcupadas.count(idTarea) == 0);
	
	if(agenteLibre && tareaLibre) alternativas.push_back(a);
	
	
	return alternativas;
}

Agente EstadoAsignacion::getMejorAlternativa(Agente const & a)
{
	if (!getAlternativas(a).empty()) return getAlternativas(a).front();
}

bool EstadoAsignacion::esFinal()
{
	return nVisitados == nTotal;
}
