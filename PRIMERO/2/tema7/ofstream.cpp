#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream archivo("datos.txt", ios::app);

    if (archivo) {
        cout << "Se pudo abrir el archivo correctamente." << endl;
    }

    archivo << "Hola, mundo 2.0!" << endl;
    archivo << "Este es un archivo de prueba." << endl;

    archivo.close();
    cout << "Archivo creado y datos escritos correctamente." << endl;

    return 0;
}
