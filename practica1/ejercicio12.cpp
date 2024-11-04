#include <iostream>
using namespace std;

int main(){

	int dinero, sevilla, malaga, cordoba;
	cout << "Introduce una cantidad de dinero" << endl;
	cin >> dinero;
	sevilla = dinero * 0.5;
	cordoba = dinero * 0.3;
	malaga = dinero - (sevilla + cordoba);
	cout << "El dinero destinado a la provincia de sevilla es el siguiente: " << endl;
	cout << "Sevilla capital: " << sevilla * 0.35 << " euros" << endl;
	cout << "Dos Hermanas: " << sevilla * 0.65 << " euros" << endl << endl;
	
	cout << "El dinero destinado a la provincia de Córdoba el siguiente: " << endl;
	cout << "Cordoba capital: " << cordoba * 0.5 << " euros" << endl;
	cout << "Palma del rio: " << cordoba * 0.2 << " euros" << endl;
	cout << "Lucena: " << cordoba * 0.3 << " euros" << endl << endl;
	
	cout << "El dinero destinado a la provincia de Málaga el siguiente: " << endl;
	cout << "Malaga capital: " << malaga * 0.8 << " euros" << endl;
	cout << "Lucena: " << cordoba * 0.2 << " euros" << endl << endl;
	
	return 0;

}
