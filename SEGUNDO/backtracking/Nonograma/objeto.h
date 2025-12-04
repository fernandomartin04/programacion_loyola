#ifndef OBJETO_H
#define OBJETO_H

#include <iostream>
using namespace std;

class Objeto {
	public:
		int valor;
		Objeto(int v = 0) {
			this->valor = v;
		}
};

#endif