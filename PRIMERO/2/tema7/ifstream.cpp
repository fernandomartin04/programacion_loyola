#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream archivo("datos.txt");
    string linea;

    if (archivo) {
        cout << "Se pudo abrir el archivo correctamente." << endl;
		while (getline(archivo, linea)) {
			cout << linea << endl;
		}

		archivo.close();
    }
	else {
		cout << "El archivo no se pudo abrir correctamente" << endl;
	}
    
    return 0;
}
