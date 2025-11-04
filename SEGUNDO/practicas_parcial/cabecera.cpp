#include "cabecera.h"

list<int> funcionNoFinal(int n) {
	
}

list<int> funcionFinalAux(int n, list<int> l) {
	if (n==0) return {0};
	int dig = n % 10;
	if (dig % 2 == 0) l.push_front(dig);
	return funcionFinalAux(n / 10, l);
}

list<int> funcionFinal(int n) {
	return funcionFinalAux(n, {});
}

list<int> funcionIterativa(int n) {
	if (n == 0) return {0};
	list<int> l;
	while (n > 0) {
		int dig = n % 10;
		if (dig % 2 == 0) l.push_front(dig);
		n = n / 10;
	}
	return l;
}