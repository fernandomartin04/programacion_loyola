#include <cmath>
#include <iostream>
using namespace std;

template <class T>
double Punto4D<T>::modulo() const {
	return sqrt(pow(x,2) + pow(y,2) + pow (z,2) + pow(w,2));
}

template <class T>
bool Punto4D<T>::operator==(const Punto4D<T>& p) const{
	if (x == p.x && y == p.y && z == p.z && w == p.w) {
		return true;
	} else{
		return false;
	}
}

template <class U>
ostream& operator<<(ostream& os, const Punto4D<U>& p) {
	return os << p.x << ", " << p.y << ", " << p.z << ", " << p.w;
}