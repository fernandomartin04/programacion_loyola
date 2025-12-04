#include "cabecera.h"

bool Estado::esFinal(){
	return this->posicion == this->sol->k;
}

vector<int> Estado::getAlternativas() {
	vector<int> alternativas;
	for (int i = 1; i <= this->sol->n; i++) {
		bool aux = false;
		for (int j = 0; j < this->posicion; j++) {
			if (i == this->sol->sol[j]) {
				aux = true;
				break;
			}
			
		}
		if (aux) continue;
		if (this->posicion == 0) alternativas.push_back(i);
		
		else {
			if (i > this->sol->sol[this->posicion - 1]) alternativas.push_back(i);
		}
		
	}
	
	return alternativas;
}

void Estado::avanza(int valor) {
	this->sol->sol[this->posicion] = valor;
	this->posicion++;
}

void Estado::retrocede(){
	this->posicion--;
	this->sol->sol[this->posicion] = 0;
}

void Problema::actualizarMejorSolucion(Estado *e) {
	this->soluciones.push_back(*(e->sol));
}

void Problema::bt(Estado *e) {
	if (e->esFinal()) {
		this->actualizarMejorSolucion(e);
		return;
	}
	else {
		vector<int> alts = e->getAlternativas();
		
		for (int i = 0; i < alts.size(); i++) {
			e->avanza(alts[i]);
			this->bt(e);
			e->retrocede();
		}
	}
}

void Problema::ejecutaBacktracking() {
	Solucion sol(n, k);
	Estado e(&sol);
	bt(&e);
}



