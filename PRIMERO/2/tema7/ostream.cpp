#include <iostream>
#include <iomanip>
using namespace std;

class Persona {
    private:
        string nombre;
        int edad;

    public:
        Persona(string nombre = "Desconocido", int edad = 0) {
            this->nombre = nombre;
            this->edad = edad;
        }

        // Función amiga para imprimir (operator<<)
		friend ostream& operator<<(ostream& os, const Persona& p);

        // Función amiga para leer (operator>>)
        friend istream& operator>>(istream& is, Persona& p);
};

// Definición de operator<< (imprimir)
ostream& operator<<(ostream& os, const Persona& p) {
    os << "Nombre: " << p.nombre << ", Edad: " << p.edad;
    return os;
}

// Definición de operator>> (leer)
istream& operator>>(istream& is, Persona& p) {
    cout << "Introduce tu nombre entre comillas: ";
    is >> quoted(p.nombre);
    cout << "Introduce edad: ";
    is >> p.edad;
    return is;
}

int main() {
    Persona p, p1, p2("Laura", 22);

	cout << p << endl;
    cout << "Probando operator>> para p1:" << endl;
    cin >> p1;

    cout << endl << "Mostrando p1:" << endl;
    cout << p1 << endl;

    cout << endl << "Mostrando p2 (creado por constructor):" << endl;
    cout << p2 << endl;

    return 0;
}
