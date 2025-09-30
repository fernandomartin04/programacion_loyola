#include <iostream>
#include <set>
#include <map>
#include <list>
#include <string>
#include <cmath>
#include "cabecera.h"

using namespace std;

bool listasIguales(list<string> a, list<string> b) {
    a.sort(); b.sort();
    return a == b;
}

bool mapsIguales(map<string, list<string>> a, map<string, list<string>> b) {
    return a == b;
}

bool mapIntIguales(map<string, int> a, map<string, int> b) {
    return a == b;
}

bool mapDoubleIguales(map<string, double> a, map<string, double> b) {
    const double EPS = 0.01;
    if (a.size() != b.size()) return false;
    for (map<string, double>::iterator it = a.begin(); it != a.end(); ++it) {
        if (b.find(it->first) == b.end()) return false;
        if (abs(it->second - b[it->first]) > EPS) return false;
    }
    return true;
}

bool mapStrIguales(map<string, string> a, map<string, string> b) {
    return a == b;
}

void assertMapListEqual(map<string, list<string>> actual, map<string, list<string>> esperado, string testName) {
    cout << (mapsIguales(actual, esperado) ? "[OK] " : "[FAILED] ") << testName << endl;
}

void assertMapIntEqual(map<string, int> actual, map<string, int> esperado, string testName) {
    cout << (mapIntIguales(actual, esperado) ? "[OK] " : "[FAILED] ") << testName << endl;
}

void assertMapDoubleEqual(map<string, double> actual, map<string, double> esperado, string testName) {
    cout << (mapDoubleIguales(actual, esperado) ? "[OK] " : "[FAILED] ") << testName << endl;
}

void assertMapStrEqual(map<string, string> actual, map<string, string> esperado, string testName) {
    cout << (mapStrIguales(actual, esperado) ? "[OK] " : "[FAILED] ") << testName << endl;
}

int main() {
    cout << "=== TEST CENTRO DEPORTIVO ===" << endl;
    set<CentroDeportivo> centros;
    centros.insert(CentroDeportivo("Olimpo", "Madrid", 150, "Tenis"));
    centros.insert(CentroDeportivo("FitClub", "Madrid", 200, "Futbol"));
    centros.insert(CentroDeportivo("Sporting", "Barcelona", 120, "Tenis"));
    centros.insert(CentroDeportivo("GymBox", "Sevilla", 100, "Crossfit"));
    centros.insert(CentroDeportivo("AquaFit", "Sevilla", 80, "Natacion"));
    centros.insert(CentroDeportivo("MaxFit", "Madrid", 180, "Futbol"));

    map<string, list<string>> esperadoCiudad = {
        {"Barcelona", {"Sporting"}},
        {"Madrid", {"FitClub", "MaxFit", "Olimpo"}},
        {"Sevilla", {"AquaFit","GymBox"}}
    };

    map<string, list<string>> esperadoDisciplina = {
        {"Tenis", {"Olimpo", "Sporting"}},
        {"Futbol", {"FitClub", "MaxFit"}},
        {"Crossfit", {"GymBox"}},
        {"Natacion", {"AquaFit"}}
    };

    map<string, int> esperadoSocios = {
        {"Tenis", 270},
        {"Futbol", 380},
        {"Crossfit", 100},
        {"Natacion", 80}
    };

    map<string, double> esperadoPromedio = {
        {"Barcelona", 120.0},
        {"Madrid", (150 + 200 + 180) / 3.0},
        {"Sevilla", (100 + 80) / 2.0}
    };

    map<string, string> esperadoMasComun = {
        {"Madrid", "Futbol"},
        {"Barcelona", "Tenis"},
        {"Sevilla", "Crossfit"}
    };

    assertMapListEqual(relaciontCiudadCentros(centros), esperadoCiudad, "Ciudad → Centros");
    assertMapListEqual(relacionDisciplinaCentros(centros), esperadoDisciplina, "Disciplina → Centros");
    assertMapIntEqual(relacionDisciplinaSocios(centros), esperadoSocios, "Disciplina → Total socios");
    assertMapDoubleEqual(relacionCiudadPromedioSocios(centros), esperadoPromedio, "Ciudad → Media socios");
    assertMapStrEqual(relacionCiudadDisciplinaComun(centros), esperadoMasComun, "Ciudad → Disciplina más común");
    cout << "=== FIN TEST ===" << endl;
    return 0;
}

