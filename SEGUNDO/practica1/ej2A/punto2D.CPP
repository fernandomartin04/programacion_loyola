#include <cmath>
#include <iostream>
using namespace std;

template <class T>
float Punto2D<T>::distancia() const {
	return sqrt(pow(x, 2) + pow(y, 2));
}