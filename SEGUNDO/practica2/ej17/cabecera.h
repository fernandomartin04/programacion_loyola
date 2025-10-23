#include <iostream>
using namespace std;

struct resultado {
	int producto;
	int nPares;
	int suma;
};

resultado funcionNoFinal(int n);
resultado funcionFinalAux(int n, int multi, int pares, int suma);
resultado funcionFinal(int n);
resultado funcionIterativa(int n);