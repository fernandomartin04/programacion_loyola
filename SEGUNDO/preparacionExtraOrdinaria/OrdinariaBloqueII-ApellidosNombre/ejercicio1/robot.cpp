#include<iostream>
#include"robot.h"

using namespace std;

//TODO a) Funciones que se definen en este fichero cpp
Robot & Robot::operator=(const Robot & r) {
    setNombre(r.getNombre());
    setCarga(r.getCarga());
    return *this;
}

void Robot::show() {
    cout << "(" << getNombre() << "," << getCarga() << ")";
}
//TODO b) Funcion dobleCargaBateria
int dobleCargaBateria(Robot *v, int i, int n) {
    if(n==1) return v[i].getCarga();
    else {
        int izq=dobleCargaBateria(v, i, n/2);
        int der=dobleCargaBateria(v, i+n/2, n/2);
        if(izq != -1 && der != -1 && izq*2 == der) return izq+der;
        else return -1;
    }
}

