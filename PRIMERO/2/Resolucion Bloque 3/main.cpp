#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Persona.h"
#include "Tarjeta.h"
#include <vector>

using namespace std;

template<typename container> int encontrarIndice(container personas, string dni_a_buscar);

ifstream archivo_personas = ifstream("personas.txt", ios::in);
ifstream archivo_tarjetas = ifstream("tarjetas.txt", ios::in);
ofstream archivo_resumen = ofstream("resumen.txt", ios::out);

istream& operator>>(istream& is, Tarjeta& tarjeta) {
	return is >> tarjeta.ID >> tarjeta.nivel_acceso;
}
istream& operator>>(istream& is, Persona& persona) {
	return  is >> persona.DNI >> quoted(persona.nombre);
}
ostream& operator<<(ostream& os, Tarjeta& tarjeta){
	if (&os == &archivo_resumen) {
		return os << right << setw(3) << tarjeta.ID << setw(3) << tarjeta.nivel_acceso;
	}
}
ostream& operator <<(ostream& os, Persona& persona) {
	if (&os == &archivo_resumen) {
		return os << left << setw(10) << persona.DNI << setw(25) << persona.nombre << persona.tarjeta;
	}
}



int main() {

	// EJERCICIO 1
	vector<Persona> personas;
	if (archivo_personas) {
		
		Persona nueva_persona; // Creo objeto temp gracias al constructor vacio
		string aux;
		archivo_personas >> aux >> aux; // Me salto la primera linea
		
		while (archivo_personas >> nueva_persona) {
			personas.push_back(nueva_persona);
		}
		archivo_personas.close();
		
	} else {
		cout << "Error al leer el archivo personas.txt" << endl;
	}
	
	// EJERCICIO 2
	vector<Tarjeta> tarjetas;
	vector<string> DNIs;
	if (archivo_personas) {
		
		Tarjeta tarjeta; 
		string dni;
		
		while (archivo_tarjetas >> tarjeta >> dni) {
			tarjetas.push_back(tarjeta);
			DNIs.push_back(dni);
		}
		archivo_tarjetas.close();
		
	} else {
		cout << "Error al leer el archivo tarjetas.txt" << endl;
	}
	
	// EJERCICIO 3
	int indice = 0;
	for (int i = 0; i < DNIs.size(); i++) {
		indice = encontrarIndice(personas, DNIs[i]);
		if (indice != -1) {
			personas[indice].setTarjeta(tarjetas[i]);
		}
	}
	if(archivo_resumen) {

		for (int i = 0; i < personas.size(); i++) {
			archivo_resumen << personas[i] << endl;
		}
		archivo_resumen.close();
	}
	
	return 0;
}



template<typename container> int encontrarIndice(container personas, string dni_a_buscar) {
	int indice = -1, busqueda = 0;
	for (const auto& c : personas)
	{
		if (c == dni_a_buscar) {
			indice = busqueda;
			break;
		}
		busqueda++;
	}
	return indice;
}