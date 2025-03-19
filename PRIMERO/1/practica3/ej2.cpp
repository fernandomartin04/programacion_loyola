#include <iostream>
#include <cmath>
using namespace std;
#define DIM 100

int main() {
	int n, p;
	int v[DIM];

    	// Bucle para verificar que no sea negativo ni mayor que DIM
	do {
        	cout << "Introduzca el numero de elementos del vector" << endl;    
        	cin >> n;
    	} while(n < 0 || n > DIM);


    	// Completo manualmente el vector
    	for (int i = 0; i < n; i++) {
       		cout << "Introduce el valor " << i << " del vector: " << endl; 
        	cin >> p;
        	v[i] = p;
   
    	}
    	// Asigno al vector auxiliar v[n] invertido
	int m[DIM];
	int l = (n - 1);
	for (int j = 0; j < n; j++){
		m[j] = v[l];
		l--;
	}

	// Ahora copio los datos en v[n] para que quede ahi el vector invertio
	for (int z = 0; z < n; z++){
		v[z] = m[z];

	}
	
	cout << "Elementos del vector:" << endl;
    	for (int h = 0; h < n; h++) {
        	cout << " " << v[h] << endl;
    	}


	return 0;
}

