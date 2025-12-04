/*
Ejercicio: Generar todas las combinaciones de tamaño K usando números del 1 al N

Escribe un programa en C++ que, usando backtracking, 
genere todas las combinaciones posibles de tamaño K 
formadas por números del 1 al N, sin repetir números y 
en orden creciente.
*/

#include "cabecera.h"

int main() {
	
	int n, k;
	cout << "Introduce N" << endl;
	cin >> n;
	cout << "Introduce K" << endl;
	cin >> k;
	
	Problema p(n, k);
	
	p.ejecutaBacktracking();
	
	for (int i = 0; i < p.soluciones.size(); i++) {
        cout << "Solucion " << (i + 1) << ": ";
        
        for (int j = 0; j < p.soluciones[i].k; j++) {
            cout << p.soluciones[i].sol[j] << " ";
        }
        cout << endl;
    }
	
	return 0;
}