#include "minimo.h"

Minimo funcion(int * v, int i, int n) {
    if(n==1) {
        Minimo m;
        m.min = v[i];
        m.max = v[i];
        m.valido = true;
        return m;
    }
    Minimo izq=funcion(v, i, n/2);
    Minimo der=funcion(v, i+n/2, n/2);

    if(!izq.valido || !der.valido){
        Minimo m;
        m.valido = false;
        return m;
    }
    
    if(izq.min > der.max) {
        Minimo m;
        m.valido = true;
        if(izq.min > der.min) m.min = der.min;
        else m.min = izq.min;
        if(der.max > izq.max) m.max = der.max;
        else m.max = izq.max;
        return m;
    }

    Minimo m;
    m.valido = false;
    return m;

}

int funcion(int * v, int n) {
    Minimo m = funcion(v, 0, n);
    if (!m.valido) {
        return -1;
    }
    else return m.min;
}
