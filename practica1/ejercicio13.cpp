#include <iostream>
#include <string>
using namespace std;

int main(){
	string nombre, apellidos, correo;
	int fecha, numero, numFecha;
	
	cout << "¡¡Introduce los datos solicitados para la creación de tu primer correo electronico!!" << endl;
	cout << "Introduce tu nombre: " << endl;
	getline(cin, nombre);
	
	cout << "Introduce tus dos apellidos: " << endl;
	getline(cin, apellidos);

	cout << "Introduce tu año de nacimiento: " << endl;
	cin >> fecha;
	
	cout << "Introduce tu numero favorito: " << endl;
	cin >> numero;
	
	// size_t es un tipo de dato q guarda tamaño o posicion comunmente de los strings
	size_t espacio = apellidos.find(' ');
	
	if (nombre.empty() == true || apellidos.empty() == true || fecha <= 0 || numero <= 0 || fecha > 2024 || numero > 99){
		cout << "No se permite introducir datos en blanco o fechas falsas, tampoco un numero favorito mayor de 99 ni numeros negativos." << endl << endl;
	}
	else {
		//Si el buscador del espacio no lo encuentra devuelve string::npos
		if (espacio != string::npos){

			string primerA = apellidos.substr(0, 2);
			string segundoA = apellidos.substr(espacio + 1,2);
			numFecha = fecha / 100; //Para obtener solo los dos primeros numeros divido por 100
			
			correo = nombre.substr(0,3) + primerA + to_string(numero) + segundoA + to_string(numFecha) + "@gmail.com";
			
			cout << "Tu correo electrónico es: " << correo << endl << endl;
		}
		else {
			cout << "ERROR. Introduce los apellidos separados por un espacio." << endl << endl;
		}
	}
	
return 0;
}
