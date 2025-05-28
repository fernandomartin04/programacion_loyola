#include "ejercicio4.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<Asignatura> grados;
	string continuar;
	cout << "Introduce los datos de la asignatura:" << endl;
	do{
		
		string nombre;
		int cuatrimestre;
		int curso;
		float dificultad;
		
		cout << "Introduce nombre: ";
		cin >> nombre;
		
		cout << "Introduce cuatrimestre: ";
		cin >> cuatrimestre;
		
		cout << "Introduce curso: ";
		cin >> curso;
		
		cout << "Introduce dificultad que esperas: ";
		cin >> dificultad;
		
		grados.push_back(Asignatura(nombre, cuatrimestre, curso, dificultad));
		
		cout << "Quieres crear otra asignatura? (s/n): ";
		cin >> continuar;
		
	} while(continuar == "s");
	bool intercambio;
	do {
		intercambio = false;
		for (int i = 0; i < grados.size()-1; i++) {
			if (grados[i].getDificultad() > grados[i+1].getDificultad()) {
				swap(grados[i], grados[i+1]);
				intercambio = true;
			}
		}
	} while(intercambio);
	
	for(int i = 0; i < grados.size(); i++) {
		cout << grados[i].toString() << endl;
	}

    return 0;
}

