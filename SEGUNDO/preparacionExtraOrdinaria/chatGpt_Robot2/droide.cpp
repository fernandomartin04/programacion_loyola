#include<iostream>
#include "droide.h"
using namespace std;

void Droide::mostrar() {
    cout << "(" << getId() << "," << getBateria() << "," << getPotencia() << ")";
}


int potenciaTriple(Droide *v, int i, int n) {
    if (n == 1) return v[i].getPotencia();
    else {
        int t1 = potenciaTriple(v, i, n/2);
        int t2 = potenciaTriple(v, i+n/2, n/2);

        if(t1 != -1 && t2 != -1 && t2 == 3*t1) {
            return t1+t2;
        }
    
        else return -1;
    }
    
}
