#include <iostream>
#include <cmath>
using namespace std;
#define DIM 100

int main() {
	int n, p, suma = 0, x;
	int v[DIM];
	bool aviso=true;

    	// Bucle para verificar que no sea negativo ni mayor que DIM
	do {
        	cout << "Introduzca el numero grado del polinomio" << endl;    
        	cin >> n;
    	} while(n < 0 || n > DIM);

	cout << "Introduce tambien el valor que quieres que tenga X" << endl;
	cin >> x;
    	// Completo manualmente el polinomio usando un vector
    	for (int i = 0; i < n; i++) {
       		cout << "Introduce el grado " << i << " del polinomio: " << endl; 
        	cin >> p;
        	v[i] = p; 
        	suma += (p * pow(x, i));
    	}
    	cout << endl << "Ahora introduce tambien un valor para X y te dare el resultado" << endl;
    	cout << "Elementos del polinomio:" << endl;
    	for (int j = (n-1); j >= 0; j--) {
    		// Es distinto de cero, sino no se imprime y ya
    		if (v[j] != 0) {
    			// Verifico q no sea falso, es decir la prim vuelta q es true
    			if (!aviso) {
    				// Cuando no sea negativo imprimo un + delante
    				if (v[j] > 0) {
    					cout << " + ";
    				}
    			}
    			// Cuando es 0 el exponente
    			if (j == 0) {
    				cout << v[j];
    			}
    			// Cuando es la x sola
    			else if (j == 1){
    				cout << v[j] << "x";
    			}
    			// Caso normal
    			else {
    				cout << v[j] << "x^" << j;
    			}
    			
    			// Aqui cambio el boolean para que despues de la 1ª vuelta sea falso
    			aviso = false;
    		}
        	
    	}
	cout << endl;
	cout << "El valor de x en tu polinomio es: " << suma << endl;

	return 0;
}

