#ifndef _PUNTO2D_H_
#define _PUNTO2D_H_
#include <iostream>
using namespace std;


template<class T>
class Punto2D {
	private:
		T x, y;
	public:
		Punto2D(T x=0, T y=0) {
			this->x=x;
			this->y=y;
		}
		T getX() const {return x;}
		T getY() const {return y;}
		
		void setX(T x){this->x = x;}
		void setY(T y){this->y = y;}
		float distancia() const;
};

#include "punto2d.cpp"
#endif
