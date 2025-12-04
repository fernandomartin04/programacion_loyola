#ifndef PISTA_H
#define PISTA_H

#include <vector>
#include <iostream>
using namespace std;

class Pista {
	public:
		vector<int> bloques;
		Pista(vector<int> b) {
			this->bloques = b;
		}
};

#endif