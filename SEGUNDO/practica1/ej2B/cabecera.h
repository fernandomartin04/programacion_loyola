#ifndef _VECTOR3D_H_
#define _VECTOR3D_H_

#include <iostream>
using namespace std;

template <class T>
class Vector3D {
	private:
		T i, j, k;
	public:
		Vector3D(T i=0, T j=0, T k=0) {
			this->i = i;
			this->j = j;
			this->k = k;
		}
		T getI() const {return i;}
		T getJ() const {return j;}
		T getK() const {return k;}
		
		void setI(T i) {this->i=i;}
		void setJ(T j) {this->j=j;}
		void setK(T k) {this->k=k;}
		
		float modulo() const;
		float productoEscalar(const Vector3D<T>& otro) const;
};

#include "vector3D.cpp"
#endif
