#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include<list>
#include<queue>

#include "Animal.h"
#include "CaracteristicasFisicas.h"

// 0.2
array<string, 5> Animal::nombre_amenaza = {
    "Menor preocupacion",
    "Vulnerable",
    "Casi amenazado",
    "En peligro",
    "En peligro critico"
};

// Variables en la memoria estática
//0.2
ifstream anim_entrada = ifstream("animales.txt", ios::in);
//0.15
ifstream car_entrada = ifstream("caracteristicas.txt", ios::in);
//0.2
ofstream animales_datos = ofstream("animales_datos.txt", ios::out);
//0.15
ofstream resumen = ofstream("Resumen.txt", ios::out);


istream& operator>>(istream &is, Animal &a) {

	//0.2
    return is >> quoted(a.nombre_comun) >> a.nivel_amenaza;
}

istream& operator>>(istream &is, CaracteristicasFisicas &cf) {
	//0.2
    return is >> cf.altura >> cf.longitud >> cf.peso;
}

ostream& operator<<(ostream &os, Animal &a) {
		//0.1
	if (&os == &cout){
		//0.35
		os << left << setw(25) <<quoted(a.nombre_comun) << "Nivel de Amenaza: " << right << setw(3) << a.nivel_amenaza;
	}
		//0.1
	else if (&os == &animales_datos){
		//0.55
				os << left << setw(23) << a.nombre_comun  << right << setw(3) << a.nivel_amenaza << "-" << left << setw(23) << a.nombre_amenaza[a.nivel_amenaza] << a.caracteristicas_fisicas;
	}
			//0.1
	else if(&os == &resumen){
			// 0.2
		os << right << setw(25) <<quoted(a.nombre_comun);
	}

    		//0.1
	return os;
}

ostream& operator<<(ostream &os, CaracteristicasFisicas &cf) {
		//0.1
	if (&os == &animales_datos){
		//0.55
		os << fixed << setprecision(2) << right << setw(5) << cf.altura <<"; " << setw(5) << cf.longitud <<"; " << setw(5) << cf.peso;
	}
    //0.1
    return os;
}



void mostrarMenu();

int main(){
	// Definir aquí variables de la stack (contenedores, auxiliares, etc.)
	//0.2
	list<Animal> animales;
	//0.15
	list<Animal>::iterator it_a;
	//0.2
	list<CaracteristicasFisicas> caracteristicas;
	//0.15
	list<CaracteristicasFisicas>::iterator it_c;
	//0.2
	queue<Animal> animales_salida;
	
	//0.1
	Animal a;			
	//0.1
	CaracteristicasFisicas c;
	//0.1
	string nombre_comun;

    int opcion = 0;
	cout << "Seleccione una opcion numerica:" << endl;
	while (opcion != 7) {
		mostrarMenu();

		cin >> opcion;
		switch (opcion) {
		case 1: {
			cout << "Rellenando todos los animales desde animales.txt" << endl;
            // Problema 1
			//0.1
			if(anim_entrada){
				//0.2
				while(anim_entrada >> a){
					//0.1
					animales.push_back(a);
				}
				//0.1
				anim_entrada.close();
			}

			cout << endl << "------------------Fin Problema 1------------------" << endl;
			break; }
		case 2: {
			cout << "Rellenando todas las caracteristicas de caracteristicas.txt" << endl;
			// Problema 2
			//0.1
			if(car_entrada){
				//0.2
				while(car_entrada >> quoted(nombre_comun) >> c){
					//0.1
					caracteristicas.push_back(c);
				}
				//0.1
				car_entrada.close();
			}

			cout << endl << "------------------Fin Problema 2------------------" << endl;
			break; }
		case 3: {
			cout << "Se asignaran caracteristicas a animales en un contenedor tipo FIFO llamado animales_salida." << endl;
            // Problema 3 rellenar animales_salida
			//0.2
			it_a = animales.begin();
			//0.2
			it_c = caracteristicas.begin();
			//0.2
			for (int i = 0; i < animales.size(); i++)
			{
			//0.2
				a = *it_a;
			//0.2
				a.setCaracteristicasFisicas(*it_c);
			//0.2
				animales_salida.push(a);
			//0.2
				advance(it_a, 1);
			//0.2
				advance(it_c, 1);
			}
			
			cout << endl << "------------------Fin Problema 3------------------" << endl;
			break; }
		case 4: {
			// Problema 4 Mostrar los datos de animales en pantalla
			//0.2
			it_a = animales.begin();
			//0.1
			for (int i = 0; i < animales.size(); i++)
			{
				//0.2
				a = *it_a;
				//0.15
				cout << a << endl;
			//0.1
				advance(it_a, 1);
			}
			
			cout << endl << "------------------Fin Problema 4------------------" << endl;
			break; }
		case 5: {
			// Problema 5 Crear fichero Animales_Datos usando animales_salida
			//0.1
			if (animales_datos){
				//0.15
				while(!animales_salida.empty()){
					//0.15
					animales_datos << animales_salida.front() << endl;
					//0.1
					animales_salida.pop();
				}
				//0.1
				animales_datos.close();
			}

			cout << endl << "------------------Fin Problema 5------------------" << endl;
			break; }
		case 6: {
			// Problema 6 Crear un archivo utilizando animales agrupandolos segun nivel de amenaza
			// 0.1
			if (animales_datos){
				// 0.1
				for (int i = 0; i < 5; i++)
				{
					// 0.1
					it_a = animales.begin();
					// 0.2
					resumen << "Nivel " << i << "-" << a.nombre_amenaza[i] <<":" << endl;
					// 0.1
					for (int j = 0; j < animales.size(); j++)
					{
						// 0.1
						a = *it_a;
						// 0.2
						if(a.getNivelAmenaza() == i){
							// 0.2
							resumen << a << endl;
						}
						// 0.1
						advance(it_a, 1);
					}
				}
				// 0.1
				animales_datos.close();
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
	cout << "1. Cargar conductores desde un archivo" << endl;
	cout << "2. Cargar coches desde un archivo" << endl;
	cout << "3. Asignar coches a los conductores" << endl;
	cout << "4. Mostrar los datos de todos los coches" << endl;
	cout << "5. Mostrar los datos de todos los conductores" << endl;
	cout << "6. Crear un archivo con los datos de todos los conductores" << endl;
	cout << "7. Crear un archivo con los datos de todos los conductores y sus coches asignados" << endl;
	cout << "8. Salir" << endl;
}