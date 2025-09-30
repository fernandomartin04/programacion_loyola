#include "estudiante.h"
#include <list>
#include <fstream>

ofstream estudiantes_datos = ofstream("estudiantes.txt", ios::out);


int main() {
	// Declaro la lista de estudiate
	list<Estudiante> es;
	auto it = es.begin();
	int opcion = 0;
	do{
		cout << "Seleccione una opcion:" << endl;
		cout << "Opcion 1: Introducir datos de estudiante" << endl;
		cout << "Opcion 2: Salir" << endl;
		cin >> opcion;
		
		
		switch(opcion){
			case 1: {
				cout << "Introduzca datos para el estudiante en el siguiente orden: nombre, edad, nota media" << endl;
				Estudiante nuevo;
				cin >> nuevo;
				it = es.insert(it, nuevo);
				it++;
				break;
			}
			case 2: {
				cout << "Saliendo..." << endl;
				break;
			}
			default:
				cout << "Opcion no valida" << endl;
		}
		
	} while(opcion != 2);
	
	if (estudiantes_datos) {
		for (it = es.begin(); it != es.end(); ++it) {
			estudiantes_datos << *it << endl;
		}
		estudiantes_datos.close();
	}
	else {
		cout << "Error al ejecutar el fichero" << endl;
	}
	
	ifstream salida_estudiantes = ifstream("estudiantes.txt", ios::in);
	
	if (salida_estudiantes) {
		Estudiante e;
		while(salida_estudiantes >> e){
			cout << e << endl;
		}
		salida_estudiantes.close();
	} else{
		cout << "Error al abrir el archivo" << endl;
	}
	return 0;
}