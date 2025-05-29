#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	
	vector<string> nombres = {"Pedro", "luis", "jose", "gonzalo", "alfonso", "peri"};
	ofstream archivo("nombres.txt");
	
	if(archivo) {
		cout << "Se creo y abrio correctamente el archivo" << endl;
		for (int i = 0; i<nombres.size(); i++) {
			archivo << "Nombre: " << i+1 << ": " << nombres[i] << endl;
		}
		archivo.close();
		cout << "Datos exportados correctamente" << endl;
		
		ifstream archivoLectura("nombres.txt");
		string linea;
		if (archivoLectura) {
			cout << "Leyendo archivo..." << endl;
			while (getline(archivoLectura, linea)) {
				cout << linea << endl;
			}
			archivoLectura.close();
		}
	}
	else{
		cout << "No se abrio correctamente el archivo" << endl;
	}
	
	return 0;
}