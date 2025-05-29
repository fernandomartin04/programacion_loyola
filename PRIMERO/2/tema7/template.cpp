#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Persona {
public:
    string nombre;
    Persona(string n) : nombre(n) {}
};

template<typename container>
void mostrarNombres(container personas) {
    for (auto p : personas) {
        cout << p.nombre << endl;
    }
}

int main() {
    vector<Persona> grupo1 = { Persona("Pedro"), Persona("Laura") };
    list<Persona> grupo2 = { Persona("Carlos"), Persona("Ana") };

    cout << "Grupo 1:" << endl;
    mostrarNombres(grupo1);

    cout << "Grupo 2:" << endl;
    mostrarNombres(grupo2);

    return 0;
}
