#include "cabecera.h"

using namespace std;

int main() {
    cout << "1 Apartado a) y b) (constructor y operator=) prueba\n";
    CentroPokemon c1("Ciudad_Celeste", 200, "Agua", "Kanto");
    CentroPokemon c2("Ciudad_Olivo", 220, "Agua", "Johto");
    CentroPokemon c3("Ciudad_Canela", 300, "Fuego", "Kanto");
    CentroPokemon c4("Pueblo_Paleta", 150, "General", "Kanto");
    CentroPokemon c5("Ciudad_Portual", 310, "Agua", "Hoenn");
    CentroPokemon c6("Ciudad_Calagua", 330, "Fuego", "Hoenn");
    CentroPokemon c7("Ciudad_Trigal", 180, "General", "Johto");
    CentroPokemon c8("Ciudad_Verde", 120, "Planta", "Kanto");
    CentroPokemon c9("Ciudad_Azafran", 400, "Psiquico", "Kanto");
    CentroPokemon c10("Ciudad_Iris", 240, "Psiquico", "Johto");
    CentroPokemon c11("Ciudad_Corazon", 350, "Psiquico", "Sinnoh");
    CentroPokemon c12("Ciudad_Arborada", 270, "Planta", "Hoenn");
    CentroPokemon c13("Ciudad_Endrino", 260, "Dragon", "Johto");
    CentroPokemon c14("Ciudad_Jubileo", 190, "General", "Sinnoh");

    cout << "\n2 Comprobando operator<<\n";
    cout << c1 << "\n";

    cout << "\n3 Comprobando operator== (false esperado): ";
    cout << ((c1 == c2) ? "true" : "false") << "\n";

    cout << "\n4 Probando operator+\n";
    CentroPokemon csum = c1 + c3;
    cout << csum << "\n";

    cout << "\n5 Construyendo colecciones\n";
    list<CentroPokemon> lista;
    lista.push_back(c1); lista.push_back(c2); lista.push_back(c3);
    lista.push_back(c4); lista.push_back(c5); lista.push_back(c6);
    lista.push_back(c7); lista.push_back(c8); lista.push_back(c9);
    lista.push_back(c10); lista.push_back(c11); lista.push_back(c12);
    lista.push_back(c13); lista.push_back(c14);

    set<CentroPokemon> conjunto;
    list<CentroPokemon>::iterator itL = lista.begin();
    while (itL != lista.end()) {
        conjunto.insert(*itL);
        itL++;
    }

    cout << "\n6 Media por region\n";
    cout << "Media Kanto: " << getNumeroMedioPokemon(lista, "Kanto") << "\n";
    cout << "Media Johto: " << getNumeroMedioPokemon(lista, "Johto") << "\n";

    cout << "\n7 Centros por tipo\n";
    map<string, list<CentroPokemon>> mapa = getCentrosPorTipo(lista);
    map<string, list<CentroPokemon>>::iterator itM = mapa.begin();
    while (itM != mapa.end()) {
        cout << "[" << itM->first << "]\n";
        list<CentroPokemon>::iterator itC = itM->second.begin();
        while (itC != itM->second.end()) {
            cout << *itC << "\n";
            itC++;
        }
        itM++;
    }

    cout << "\n8 actualizarPokemon (set)\n";
    set<CentroPokemon> actualizado = actualizarPokemon(conjunto, "Kanto");
    set<CentroPokemon>::iterator itS = actualizado.begin();
    while (itS != actualizado.end()) {
        cout << *itS << "\n";
        itS++;
    }

    cout << "\n9 Centro mas activo por tipo Agua\n";
    vector<string> masActivos = getCentroMasActivoPorTipo(conjunto, "Agua");
    vector<string>::iterator itV = masActivos.begin();
    while (itV != masActivos.end()) {
        cout << *itV << "\n";
        itV++;
    }

    cout << "\n10 eliminarPorRegion (Sinnoh)\n";
    eliminarPorRegion(lista, "Sinnoh");
    itL = lista.begin();
    while (itL != lista.end()) {
        cout << *itL << "\n";
        itL++;
    }

    cout << "\n11 ordenarPorNumPokemon\n";
    list<CentroPokemon> ordenada = ordenarPorNumPokemon(lista);
    itL = ordenada.begin();
    while (itL != ordenada.end()) {
        cout << *itL << "\n";
        itL++;
    }

    cout << "\nFIN DEL TEST\n";
    return 0;
}
