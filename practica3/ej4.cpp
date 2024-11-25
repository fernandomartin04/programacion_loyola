#include <iostream>
#include <cmath>
using namespace std;
#define DIM 100

int main() {
	int n, p, opcion, control = 0, menos, cuenta;
	int v[DIM];
	bool encontrado = false;
	
	// Introduzco el numero de elementos para el vector
	do {
		cout << "Introduzca el numero de elementos del vector" << endl;    
		cin >> n;
					
	 } while(n < 0 || n > DIM );
	// Bucle para el menu
	do {
		
	 	
		cout << "1. Añade un elemento al vector" << endl;
		cout << "2. Eliminar un elemento del vector" << endl;
		cout << "3. Mostrar el contenido del vector" << endl;
		cout << "4. Contar el numero de divisores de 5" << endl;
		cout << "5. Terminar" << endl;
		
		
		cout << "Elija una de las opciones del siguiente menu" << endl;
		cin >> opcion;
		// Bucle para verificar que no sea negativo ni mayor que DIM
		
		switch(opcion) {
			case 1:
				

				// Verifico que no este completa la matriz
				if (control >= 0 && control < n) {
					cout << "Introduce el valor que quieres introducir al vector" << endl;
					cin >> p;
					v[control] = p;
					control++;
				} else {
					cout << "La matriz ya esta llena" << endl;
				}
				
    			break;
    			
    			case 2:
    				// Verifico que he agregado algun elemento al vector
    				if (control > 0) {
    					cout << "Introduce las posicion que quieres eliminar del vector" << endl;
    					do {
    						
						cin >> menos;
						if (menos >= 0 && menos < control){
							encontrado = true;
						} else {
							cout << "Introduzca una posicion correcta del vector para eliminar" << endl;
						}
			    		} while(menos < 0 || menos > n || !encontrado);
    					
    					// Elimino y corro las posiciones ala izquierda para cubrir
    					for (int i = menos; i<control; i++) {
    						v[i] = v[(i + 1)];
    					}
    					// Le resto uno al contador tras eliminar una de las posiciones del vector
    					control -= 1;
    			
				} else {
					cout << "No has agregado ningun elemento al vector" << endl;
				}
				
				break;
				
			case 3:
				cout << "Elementos del vector: " << endl;
				for (int h = 0; h < n; h++) {
					cout << " " << v[h] << endl;
			    	}
			    	
			    	break;
			    	
			case 4:
				int cont = 0;
				for (int j = 0; j < control; j++) {
					cuenta = v[j] % 5;
					if (cuenta == 0) {
						cont++;
					}
				
				}
				cout << "Hay un total de " << cont << " divisores de 5 en el vector" << endl;
				
				break;
			
				
		}			
	} while (opcion != 5);

	return 0;
	
	
}

