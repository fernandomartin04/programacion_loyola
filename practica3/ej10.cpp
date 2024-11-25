#include <iostream>
using namespace std;

// Estructura para representar un número complejo
struct Complejo {
	double real;
	double imaginario;
};

int main() {
	int n; // Número de elementos en el vector
	cout << "Introduce el número de números complejos a leer: ";
	cin >> n;

	// Vector de números complejos
	Complejo vector[n];

	// 1. Leer los números complejos
	for (int i = 0; i < n; i++) {
        	cout << "Introduce la parte real del número complejo " << i + 1 << ": ";
        	cin >> vector[i].real;
        	cout << "Introduce la parte imaginaria del número complejo " << i + 1 << ": ";
        	cin >> vector[i].imaginario;
    	}

    	// 2. Muestro los números complejos introducidos
    	cout << "\nNúmeros complejos introducidos:\n";
    	for (int i = 0; i < n; i++) {
        	cout << "Número " << i + 1 << ": " << vector[i].real << " + " << vector[i].imaginario << "i" << endl;
    	}

    	// 3. Sumo los números complejos
    	Complejo suma = {0, 0};
    	for (int i = 0; i < n; i++) {
        	suma.real += vector[i].real;
        	suma.imaginario += vector[i].imaginario;
    	}

    	// 4. Calcular la media de los números complejos
    	Complejo media;
    	media.real = suma.real / n;
    	media.imaginario = suma.imaginario / n;

    	// Mostrar la suma y la media
    	cout << "\nSuma de los números complejos: " << suma.real << " + " << suma.imaginario << "i" << endl;
    	cout << "Media de los números complejos: " << media.real << " + " << media.imaginario << "i" << endl;

    return 0;
}

