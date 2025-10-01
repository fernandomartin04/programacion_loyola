#include <cmath>
#include <iostream>
using namespace std;

template<class T>
float Vector3D<T>::modulo() const {
	return sqrt(pow (i,2) + pow(j,2) + pow(k,2));
}

template<class T>
float Vector3D<T>::productoEscalar(const Vector3D<T>& otro) const {
	return (i * otro.i + k * otro.k + j * otro.j);
}