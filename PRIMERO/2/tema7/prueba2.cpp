#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

class Alumno {
    private:
        string nombre;
        int edad;
        float nota;

    public:
        
		Alumno(string, int, float);
        string getNombre();
        int getEdad();
        float getNota();
};
Alumno::Alumno(string nombre = "Desconocido", int edad = 0, float nota = 0.0) {
    this->nombre = nombre;
    this->edad = edad;
    this->nota = nota;
}
string Alumno::getNombre() {
	return nombre;
}
int Alumno::getEdad() {
	return edad;
}
float Alumno::getNota() {
	return nota;
}


int main() {
    // Paso 1: Crear vector de alumnos
    vector<Alumno> alumnos;
    alumnos.push_back(Alumno("Pedro", 20, 7.5));
    alumnos.push_back(Alumno("Laura", 19, 8.2));
    alumnos.push_back(Alumno("Carlos", 21, 6.9));

    // Paso 2: Guardar datos en un archivo con ofstream
    ofstream archivo("alumnos.txt");

    if (!archivo) {
        cout << "No se pudo abrir el archivo para escribir." << endl;
        return 1;
    }

    // Escribimos cabecera
    archivo << setw(15) << left << "Nombre"
            << setw(10) << right << "Edad"
            << setw(10) << right << "Nota" << endl;

    archivo << "------------------------------------" << endl;

    // Escribimos datos de los alumnos
    for (int i = 0; i < alumnos.size(); i++) {
        archivo << setw(15) << left << alumnos[i].getNombre()
                << setw(10) << right << alumnos[i].getEdad()
                << setw(10) << right << fixed << setprecision(2) << alumnos[i].getNota() << endl;
    }
	// con fixed no tenemos en cuenta la parte entera solo la decimal
	// con setprecision declaro el numero de decimales que quiero
    archivo.close();
    cout << "Datos exportados correctamente a alumnos.txt" << endl;

    // Paso 3: Leer datos del archivo con ifstream
    ifstream archivoLectura("alumnos.txt");
    if (!archivoLectura) {
        cout << "No se pudo abrir el archivo para leer." << endl;
        return 1;
    }

    cout << endl << "Contenido del archivo:" << endl;
    string linea;
    while (getline(archivoLectura, linea)) {
        cout << linea << endl;
    }

    archivoLectura.close();

    return 0;
}
