#include "cabecera.h"
float getValorMedio(list<Videojuego> const & l, float umbral) {
	list<Videojuego>::const_iterator it = l.begin();
	float valorMedio = 0;
	int cont = 0;
	while (it != l.end()) {
		if (it->getPrecio() > umbral) {
			valorMedio += it->getPrecio();
			cont++;
		}
		it++;
	}
	
	return valorMedio / cont;
}

list<Videojuego> getMayorMenorValor(list<Videojuego> const & l) {
	list<Videojuego> aux;
	list<Videojuego>::const_iterator it = l.begin();
	list<Videojuego>::const_iterator it2 = aux.begin();
	aux.push_back(*it);
	it++;
	aux.push_back(*it);
	it--;
	while(it != l.end()) {
		if (it->getPrecio() < it2->getPrecio()) {
			aux.erase(it2);
			aux.push_front(*it);
		}
		it++;
	}
	it = l.begin();
	it2++;
	while(it != l.end()) {
		if (it->getPrecio() > it2->getPrecio()) {
			aux.erase(it2);
			aux.push_back(*it);
		}
		it++;
	}
	
	return aux;
}


map<string, list<Videojuego>> getVideojuegosPorGenero(list<Videojuego> const & l){
	list<Videojuego>::const_iterator it = l.begin();
	map<string, list<Videojuego>> mp;
	while(it != l.end()) {
		string genero = it->getGenero();
		mp[genero].push_back(*it);
		it++;
	}
	return mp;
}

list<Videojuego> incrementarPrecio(list<Videojuego> const & l, float p) {
	list<Videojuego> aux;
	list<Videojuego>::const_iterator it = l.begin();
	float media = 0;
	int cont = 0;
	
	while(it != l.end()) {
		media += it->getPrecio();
		cont++;
		it++;
	}
	
	it = l.begin();
	media /= cont;
	
	while(it != l.end()) {
		Videojuego v = *it;
		if (v.getPrecio() < media) {
			float nuevoPrecio = v.getPrecio() * (1 + p / 100.0); 
			v.setPrecio(nuevoPrecio);
		}
		aux.push_back(v);
		it++;
	}
	
	return aux;
}


double funcionNoFinal(Videojuego v[], Videojuego m1[][MAX], Videojuego m2[][MAX], int n) {
	
}

double funcionFinalAux(Videojuego v[], Videojuego m1[][MAX], Videojuego m2[][MAX], int n, int total) {
	return funcionFinalAux(v[n-1], m1[n-1][n-1], m2[n-1][0], total + pow(v[n].getPrecio(), 2) + m2[n][0].getPrecio() - m1[n][n].getPrecio());
}

double funcionFinal(Videojuego v[], Videojuego m1[][MAX], Videojuego m2[][MAX], int n) {
	return funcionFinalAux(v[0], m1[0][0], m2[0][0], n, 0);
}

double funcionIterativa(Videojuego v[], Videojuego m1[][MAX], Videojuego m2[][MAX], int n) {
	int total = 0;
	for (int i = 0; i >= n; i++) {
		total += pow(v[i].getPrecio(), 2);
		total += m2[i][0].getPrecio();
		total -= m1[i][i].getPrecio();
	}
	return total;
}
