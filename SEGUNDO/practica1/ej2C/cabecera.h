#ifndef _PUNTO4D_H_
#define _PUNTO4D_H_

#include <iostream>
using namespace std;

template <class T>
class Punto4D{
	private:
		T x, y, z, w;
	public:
	//Constructor
		Punto4D(T x=0, T y=0, T z=0, T w=0){
			this->x=x;
			this->y=y;
			this->z=z;
			this->w=w;
		}
		// Getters
		T getX() const {return x;}
		T getY() const {return y;}
		T getZ() const {return z;}
		T getW() const {return w;}
		
		// Setters
		void setX(T x) {this->x=x;}
		void setY(T y) {this->y=y;}
		void setZ(T z) {this->z=z;}
		void setW(T w) {this->w=w;}
		
		// Operadores
		bool operator==(const Punto4D<T>& p) const;
		
		// En los templates se declara de distinta manera los op <<
		// El compilador necesita una plantilla nueva para los friendss
		template <class U>
		friend ostream& operator<<(ostream& os, const Punto4D<U>& p);
		
		// Modulo
		double modulo() const;
};

#include "punto4d.cpp"
#endif
