#include<iostream>
#include"cabecera.h"

using namespace std;

//TODO Apartado c) Funcion recursiva multiple
int funcionR(int n) {
    if(n<2) return 1;
    else {
        return (2*n+1)/(n+2)*funcionR(n-1) + (3*n-3)/(n+2)*funcionR(n-2);
    }
}

//TODO Apartado d) Funcion iterativa
int funcionI(int n) {
    int G[n+1];
    G[0] = 1;
    G[1] = 1;

    for(int k = 2; k<=n; k++) {
        int suma = 0;

        for(int i = 0; i < k-1; i++) {
            suma += G[i]*G[k-2-i];
        }

        G[k] = G[k-1] + suma;
    }
    return G[n];
}
