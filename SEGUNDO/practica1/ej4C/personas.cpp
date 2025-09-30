#include "cabecera.h"

void leerMapa(map<string, int>& personas) {
	string nombre;
	int edad;
	cout << "Introduzca nombre(enter para finalizar): " << endl;
	while(getline(cin, nombre) && !nombre.empty()) {
		cin >> edad;
		cin.ignore();
		if (personas.find(nombre)==personas.end()) {
			personas[nombre]=edad;
		} else{
			cout << "Nombre repetido, no se puede introducir" << endl;
		}
	}
}

void mostrarMapa(const map<string, int>& personas) {
	// Iterador distinto porque no es va a cambiar nada, nada mas que mostrar
	map<string, int> :: const_iterator it;
	for (it = personas.begin(); it != personas.end(); it++) {
		cout << "Nombre: " << it->first << " Edad: " << it->second << endl;
	}
}

void eliminarPorEdad(map<string, int>& personas, int edadMinima) {
	cout << "Introduce un numero para borrar las personas menores de esta edad" << endl;
	map<string, int> :: iterator it;
	
	it = personas.begin();
	while(it != personas.end()) {
		if (it->second < edadMinima) {
			it = personas.erase(it);
		} else {
			it++;
		}
	}	
}

bool esPrimo(int n) {
	if(n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	} 
	return true;
}

map<string, int> primosMap(const map<string, int>& personas) {
	map<string, int> :: const_iterator it;
	map<string, int> aux;
	for(it = personas.begin(); it != personas.end(); it++) {
		if (esPrimo(it->second)) {
			aux[it->first] = it->second;
		}
	}
	return aux;
}


list<string> obtenerNombresEdadMaxima(const map<string, int>& personas) {
    map<string, int>::const_iterator it;
    int aux = 0;
    for (it = personas.begin(); it != personas.end(); ++it) {
        if (it->second > aux) {
            aux = it->second;
        }
    }
    list<string> nombres;
    for (it = personas.begin(); it != personas.end(); ++it) {
        if (it->second == aux) {
            nombres.push_back(it->first);
        }
    }
    return nombres;
}


map<int, list<string>>invertidoMap(const map<string, int>& personas) {
	map<string, int> :: const_iterator it;
	map<int, list<string>> aux;
	
	for (it = personas.begin(); it != personas.end(); it++) {
		string nombre = it->first;
		int edad = it->second;
		aux[edad].push_back(nombre);
	}
	return aux;
}


