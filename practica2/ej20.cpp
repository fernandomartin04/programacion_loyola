#include<iostream>
#include <cstdlib>
using namespace std;

int main() {
	srand((unsigned)time(NULL));
	int n, opcion, opcion2, fichas = 0, fichasRojas = 0, fichasNegras = 0, fichasNumero = 0, numero, totalApostado = 0, fichasTotal = 0;
	float nPar;
	cout << "Juguemos a la ruleta de Fernando!!" << endl;
	
	
	do {
		cout << "Menú:" << endl;
	        cout << "1. Introducir fichas." << endl;
        	cout << "2. Jugar." << endl;
        	cout << "3. Ver saldo." << endl;
        	cout << "4. Salir. " << endl;
        	cin >> opcion;	
        	
        	switch(opcion) {
        		case 1:
                	cout << "Introduce el número de fichas" << endl;
                	if (fichas != 0) {
                		cout << "Solo podrás introducir más fichas cuando te quedes a 0 en la cuenta, recuerda el juego responsable!!" << endl;

                		
                	}
                	else {
                	bool entradaValida = false;

                		while (!entradaValida) {
                			cin >> fichas;
                			if (cin.fail() || fichas <= 0) {
                				cout << "No puedes introducir 0 fichas o fichas negativas y solo números enteros" << endl;
                				cin.clear();
                				cin.ignore(10000, '\n');
                				fichas = 0;
                				cout << "Introduce de nuevo las fichas" << endl;
                			}
                			else {
                				entradaValida = true;

                				
                			}
                			break;
                		}
                		
                		
                	}
                	
	                break;
	                
			case 2:
                	cout << "Bienvenido al juego, elige cuanto quieres apostar y a qué" << endl;
                	
			do {

				cout << "1. Jugar al rojo" << endl;
				cout << "2. Jugar al negro" << endl;
				cout << "3. Jugar a número" << endl;
				cout << "4. Comenzar tirada" << endl;
				cout << "5. Salir" << endl;
				cin >> opcion2;
                		switch(opcion2) {
                			case 1:
                			cout << "Introduce la cantidad de fichas apostadas al rojo" << endl;
                			cin >> fichasRojas;
                			break;
                			
                			case 2:
                			cout << "Introduce la cantidad de fichas apostadas al negro" << endl;
                			cin >> fichasNegras;
                			break;
                			
                			case 3:
                			cout << "Introduce el número al que quieras apostar" << endl;
                			cin >> numero;
                			cout << "Introduce la cantidad de fichas" << endl;
                			cin >> fichasNumero;
                			break;
                			
                			case 4:
                			// Funcion de numero random
					n=rand()%33;
					
                			totalApostado = fichasRojas + fichasNegras + fichasNumero;
                			fichasTotal = fichas - totalApostado;
                			
                			if (totalApostado <= 0) {
                				cout << "Debes apostar un valor positivo" << endl;
                				fichasRojas = 0;
                				fichasNegras = 0;
                				fichasNumero = 0;
                				fichasTotal = 0;
                				break;
                			}
                			else if (totalApostado > fichas) {
                				cout << "No puedes apostar más de lo que tienes" << endl;
                				fichasRojas = 0;
                				fichasNegras = 0;
                				fichasNumero = 0;
                				fichasTotal = 0;
                				break;
                			} 

                			else {
						cout << "Ha salido el número " << n << endl;                				
                				nPar = n % 2;
                				if (n != numero) {
                					if (nPar != 0) {
                						fichasTotal = (fichasNegras * 2) + fichasTotal;
                						fichas = fichasTotal;
                						cout << "El número ha salido impar, tienes un total de " << fichas << endl;
                					}
                					else {
                						fichasTotal = (fichasRojas * 2) + fichasTotal;
                						fichas = fichasTotal;
                						cout << "El número ha salido par, tienes un total de " << fichas << endl;
                					}					
                				}
                				else {
                					if (n == 0) {
                						fichasTotal = (fichasNumero * 32) + fichasTotal;
                						fichas = fichasTotal;
                						cout << "Has acertado el nº, has ganado!! Tienes un total de " << fichas << endl;
                					}
                					else {
                						if (nPar == 0) {
                							fichasTotal = (fichasNumero * 32) + (fichasRojas * 2) + fichasTotal;
                							fichas = fichasTotal;
                							cout << "Has acertado el nº y ha salido par, has ganado!! Tienes un total de " << fichas << endl;
                						}
                						else {
                							fichasTotal = (fichasNumero * 32) + (fichasNegras * 2) + fichasTotal;
                							fichas = fichasTotal;
                							cout << "Has acertado el nº y ha salido impar, has ganado!! Tienes un total de " << fichas << endl;
                						}
                					}
                					
                				}
                			}
                			cout << "Tienes ahora un total de  " << fichas << endl;
                			break;
                			
                			case 5:
                			cout << "Volviendo al menú principal" << endl;
                			break;
                			
                			default:
		                	cout << "Opción no válida, introduce otro valor" << endl;
                			
                		}
			}
			
			while (opcion2 != 5);
                	
                	break;
                	
		        case 3:
                	cout << "Tienes un total de " << fichas << endl;
                	break;
                	
                	case 4:
                	cout << "Saliendo del juego" << endl;
                	break;
                	
            		default:
                	cout << "Opción no válida, introduce otro valor" << endl;
        
        	}
        	
	}
	while (opcion != 4);	
		
	cout << "Gracias por jugar espero que hayas tenido suerte y te veamos de nuevo por el casino, recuerda siempre jugar con responsabilidad" << endl;
	return 0;
}
