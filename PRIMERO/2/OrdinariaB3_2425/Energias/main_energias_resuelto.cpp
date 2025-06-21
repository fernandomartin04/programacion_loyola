#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include<list>
#include<stack>

#include "Energia.h"
#include "DatosGeneracion.h"

// 0.2
array<string, 5> nombre_grupos = {
    "Renovables",
    "No Renovables",
    "Nuclear",
    "Mixta y de Residuos",
};

// Variables en la memoria estática
//0.2
ifstream energia_entrada = ifstream("energias.txt", ios::in);
//0.15
ifstream dg_entrada = ifstream("datos.txt", ios::in);
//0.2
ofstream energia_datos = ofstream("energias_datos.txt", ios::out);
//0.15
ofstream resumen = ofstream("Resumen.txt", ios::out);



istream& operator>>(istream &is, Energia &e) {
	//0.2
    return is >> quoted(e.nombre_energia) >> e.grupo;
}

istream& operator>>(istream &is, DatosGeneracion &dg) {
	//0.2
    return is >> dg.generacion >> dg.emisiones >> dg.rendimiento;
}

ostream& operator<<(ostream &os, Energia &e) {
	//0.1
	if (&os == &cout){
		//0.35
		os << left << setw(25) <<quoted(e.nombre_energia) << "Grupo: " << right << setw(3) << e.grupo;
	}
	//0.1
	else if (&os == &energia_datos){
		//0.55
		os << left << setw(23) << e.nombre_energia  << right << setw(3) << e.grupo << "-" << left << setw(23) << e.nombre_grupos[e.grupo] << e.datos_generacion;
	}
	//0.1
	else if(&os == &resumen){
		// 0.2
		os << right << setw(25) <<quoted(e.nombre_energia);
	}

	//0.1
    return os;
}

ostream& operator<<(ostream &os, DatosGeneracion &dg) {
	
	//0.1
	if (&os == &energia_datos){
		//0.55
		os << fixed << setprecision(2) << right << setw(5) << dg.generacion <<"; " << setw(5) << dg.emisiones <<"; " << setw(5) << dg.rendimiento;
	}
	//0.1
    return os;
}



void mostrarMenu();

int main(){
	// Definir aquí variables de la stack (contenedores, auxiliares, etc.)
	// contenedores e iteradores
	//0.2
	list<Energia> energias;
	//0.15
	list<Energia>::iterator it_e;
	//0.2
	list<DatosGeneracion> datos_generacion;
	//0.15
	list<DatosGeneracion>::iterator it_d;
	//0.2
	stack<Energia> energias_salida;
	
	// auxiliares
	
	//0.1
	Energia e;
	//0.1
	DatosGeneracion dg;
	//0.1
	string nombre_energia;
	


    int opcion = 0;
	cout << "Seleccione una opcion numerica:" << endl;
	while (opcion != 7) {
		mostrarMenu();

		cin >> opcion;
		switch (opcion) {
		case 1: {
			cout << "Rellenando todas las generaciones desde generaciones.txt" << endl;
            // Problema 1
			//0.1
			if(energia_entrada){
				//0.2
				while(energia_entrada >> e){
					//0.1
					energias.push_back(e);
				}
				//0.1
				energia_entrada.close();
			}


			cout << endl << "------------------Fin Problema 1------------------" << endl;
			break; }
		case 2: {
			cout << "Rellenando todos los datos de datos.txt" << endl;
			// Problema 2
			//0.1
			if(dg_entrada){
				//0.2
				while(dg_entrada >> quoted(nombre_energia) >> dg){
					//0.1
					datos_generacion.push_back(dg);
				}
				//0.1
				dg_entrada.close();
			}


			cout << endl << "------------------Fin Problema 2------------------" << endl;
			break; }
		case 3: {
			cout << "Se asignaran datos a generaciones en un contenedor tipo LIFO llamado generaciones_salida." << endl;
            // Problema 3 rellenar generaciones_salida
			
			//0.2
			it_e = energias.begin();
			//0.2
			it_d = datos_generacion.begin();
			//0.2
			for (int i = 0; i < energias.size(); i++)
			{
			//0.2
				e = *it_e;
			//0.2
				e.setDatosGeneracion(*it_d);
			//0.2
				energias_salida.push(e);
			//0.2
				advance(it_e, 1);
			//0.2
				advance(it_d, 1);
			}
			
			cout << endl << "------------------Fin Problema 3------------------" << endl;
			break; }
		case 4: {
			// Problema 4 Mostrar los datos de generaciones en pantalla
			
			//0.2
			it_e = energias.begin();
			//0.1
			for (int i = 0; i < energias.size(); i++)
			{
				//0.2
				e = *it_e;
				//0.15
				cout << e << endl;
				//0.1
				advance(it_e, 1);
			}
			
			cout << endl << "------------------Fin Problema 4------------------" << endl;
			break; }
		case 5: {
			// Problema 5 Crear fichero Energia_Datos usando generaciones_salida
			//0.1
			if (energia_datos){
				//0.15
				while(!energias_salida.empty()){
				//0.15
				energia_datos << energias_salida.top() << endl;
					//0.1
					energias_salida.pop();
				}
				//0.1
				energia_datos.close();
			}

			cout << endl << "------------------Fin Problema 5------------------" << endl;
			break; }
		case 6: {
			// Problema 6 Crear un archivo utilizando generaciones agrupandolos segun grupo de generación
			// 0.1
			if (energia_datos){
				// 0.1
				for (int i = 0; i < 5; i++)
				{
					// 0.1
					it_e = energias.begin();
					// 0.2
					resumen << "Grupo " << i << "-" << e.nombre_grupos[i] <<":" << endl;
					// 0.1
					for (int j = 0; j < energias.size(); j++)
					{
						// 0.1
						e = *it_e;
						// 0.2
						if(e.getGrupo() == i){
							// 0.2
							resumen << e << endl;
						}
						// 0.1
						advance(it_e, 1);
					}
				}
				// 0.1
				energia_datos.close();
			}
			
			cout << endl << "------------------Fin Problema 6------------------" << endl;
			break; }
		case 7: {
			// Salir
			break; }
		default: {
			cout << endl << "-------------------------------------------------" << endl;
			cout << "Opcion no valida" << endl;
			cout << endl << "-------------------------------------------------" << endl;
			break; }
		}
	}

    return 0;
}

void mostrarMenu() {
	cout << "1. Cargar generaciones desde generaciones.txt" << endl;
	cout << "2. Cargar DatosGeneracion desde datos.txt" << endl;
	cout << "3. Asignar DatosGeneracion a las generaciones en una FIFO" << endl;
	cout << "4. Mostrar los datos de todas las generaciones" << endl;
	cout << "5. Crear un archivo de todas las generaciones en la FIFO" << endl;
	cout << "6. Crear un archivo de resumen con los datos de todas las generaciones" << endl;
	cout << "7. Salir" << endl;
}