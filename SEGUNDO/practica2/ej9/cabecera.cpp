#include "cabecera.h"
#include <iostream>
#include <list>
using namespace std;

bool esPerfecto(int n) {
	if (n < 2) return false;

	list<int> div = {1};
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) div.push_back(i);
	}

	int aux = 0;
	list<int>::iterator it = div.begin();
	while (it != div.end()) {
		aux += *it;
		it++;
	}

	return aux == n;
}

bool funcionNoFinal(int *v, int n) {
	if (n == 0) return true;
	else return esPerfecto(*v) && funcionNoFinal(v + 1, n - 1);
}

bool funcionFinalAux(int *v, int n, bool a) {
	if (n == 0) return a;
	else return funcionFinalAux(v + 1, n - 1, a && esPerfecto(*v));
}

bool funcionFinal(int *v, int n) {
	return funcionFinalAux(v, n, true);
}

bool funcionIterativa(int *v, int n) {
	if (n == 0) return true;
	for (int i = 0; i < n; i++) {
		if (!esPerfecto(v[i])) return false;
	}
	return true;
}
