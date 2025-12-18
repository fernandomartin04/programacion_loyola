#include "cabecera.h"

par minimoMaximo(Persona* v, int x0, int x1) {
    if((x1-x0) == 1) {
        if(v[x0] < v[x0+1]) return par{v[x0], v[x0+1]};
        else return par{v[x0+1], v[x0]};
    }

    else {
        int mitad=(x0+x1)/2;
        par sol;
        par m1=minimoMaximo(v, x0, mitad);
        par m2=minimoMaximo(v, mitad, x1);

        if(m1.min<m2.min) sol.min = m1.min;
        else sol.min = m2.min; 
        if (m1.max<m2.max) sol.max = m2.max;
        else sol.max = m1.max;


        return sol;
    }
}


void mostrarPersonas(Persona * v, int n)
{
	for(int i=0; i<n; i++)
	{
		v[i].mostrar();
	}
}
par minimoMaximo(Persona* v, int n) {
    return minimoMaximo(v, 0, n-1);
}