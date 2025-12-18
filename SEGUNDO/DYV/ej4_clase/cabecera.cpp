#include "cabecera.h"

int maxG(int * v, int x0, int x1) {
    if(x1-x0==1) {
        if(v[x0] > v[x1]) return v[x0];
        else return v[x1];
    }
    else {
        int mitad = (x0+x1) / 2;
        int m1 = maxG(v, x0, mitad);
        int m2 = maxG(v, mitad, x1);

        if(m1 > m2) return m1;
        else return m2;
    }
}

int maxG(int * v, int n) {
    return maxG(v, 0, n-1);
}

void rotarV(int * v, int n, int k)
{
	int * v2 = new int[n];
	for(int i=0; i<n; i++)
	{
		v2[i]=v[i];
	}
	for(int i=0; i<n; i++)
	{
		v[i]=v2[(i+k)%n];
	}
	delete [] v2;
}

void mostrarV(int * v, int n)
{
	cout << "( ";
	for(int i=0; i<n; i++)
	{
		cout << v[i] << " ";
	}
	cout << ")" << endl;
}