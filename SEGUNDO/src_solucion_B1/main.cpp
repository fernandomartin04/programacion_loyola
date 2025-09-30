#include <iostream>
#include "cabecera.h"
using namespace std;

int main() {
    set<Instituto> institutos;

    institutos.insert(Instituto("IES Galileo", "Sevilla", 300, 25));
    institutos.insert(Instituto("IES Cervantes", "Madrid", 500, 30));
    institutos.insert(Instituto("IES Picasso", "Sevilla", 200, 18));
    institutos.insert(Instituto("IES Machado", "Granada", 400, 30));
    institutos.insert(Instituto("IES Lorca", "Granada", 100, 10));

    cout << "--- Ciudad -> Lista de Institutos ---" << endl;
    map<string, list<Instituto>> m1 = getCiudadProfesores(institutos);
    for (map<string, list<Instituto>>::iterator it = m1.begin(); it != m1.end(); ++it) {
        cout << it->first << ": " << endl;
        for (list<Instituto>::iterator lit = it->second.begin(); lit != it->second.end(); ++lit) {
            cout << "\t";
            lit->show();
        }
        cout << endl;
    }

    cout << "\n--- Instituto(s) con más profesores ---" << endl;
    list<Instituto> m2 = getInstitutoMayorProfesores(institutos);
    for (list<Instituto>::iterator it = m2.begin(); it != m2.end(); ++it) {
        it->show();
    }

    cout << "\n--- Ciudad -> Ratio Alumnos/Profesores ---" << endl;
    map<string, float> m3 = getCiudadRatio(institutos);
    for (map<string, float>::iterator it = m3.begin(); it != m3.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}

