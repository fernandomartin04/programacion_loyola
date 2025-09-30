#include "cabecera.h"
#include <cstdlib>
using namespace std;

static void dividirCadena(const string& str, char delim, string partes[], int& count) {
    count = 0;
    size_t inicio = 0;
    for (size_t pos = str.find(delim); pos != string::npos; pos = str.find(delim, inicio)) {
        partes[count++] = str.substr(inicio, pos - inicio);
        inicio = pos + 1;
    }
    partes[count++] = str.substr(inicio);
}

Pelicula::Pelicula(const string& datos) {
    string partes[5];
    int count = 0;
    dividirCadena(datos, '&', partes, count);

    if (count != 5) throw invalid_argument("Formato incorrecto");

    titulo = partes[0];
    director = partes[1];
    codigoIMDB = partes[2];
    duracion = atoi(partes[3].c_str());
    presupuesto = atof(partes[4].c_str());

    if (codigoIMDB.length() != 9) throw invalid_argument("Código IMDB inválido");
    if (duracion <= 0) throw invalid_argument("Duración inválida");
}

set<Pelicula> CatalogoPeliculas::duracionMinima(int min) const {
    set<Pelicula> resultado;
    const Pelicula* masCorta = nullptr;

    for (auto& p : peliculas) {
        if (p.getDuracion() > min) {
            if (!masCorta || p.getDuracion() < masCorta->getDuracion()) {
                masCorta = &p;
            }
        }
    }

    if (masCorta) resultado.insert(*masCorta);
    return resultado;
}

int CatalogoPeliculas::peliculasPresupuestoInferior(double umbral) const {
    int total = 0;
    for (auto& p : peliculas) {
        if (p.getPresupuesto() < umbral) total++;
    }
    return total;
}

double CatalogoPeliculas::presupuestoMedioDirector(const string& dir) const {
    double suma = 0;
    int total = 0;
    for (auto& p : peliculas) {
        if (p.getDirector() == dir) {
            suma += p.getPresupuesto();
            total++;
        }
    }
    return total > 0 ? suma / total : 0;
}

Pelicula CatalogoPeliculas::peliculaMasLargaDirector(const string& dir) const {
    Pelicula maxPeli = *peliculas.begin();
    bool encontrado = false;
    for (auto& p : peliculas) {
        if (p.getDirector() == dir) {
            if (!encontrado || p.getDuracion() > maxPeli.getDuracion()) {
                maxPeli = p;
                encontrado = true;
            }
        }
    }
    return maxPeli;
}

double CatalogoPeliculas::duracionMedia() const {
    if (peliculas.empty()) return 0;
    double suma = 0;
    for (auto& p : peliculas) suma += p.getDuracion();
    return suma / peliculas.size();
}

double CatalogoPeliculas::presupuestoMedioCodigo(const string& cod) const {
    double suma = 0;
    int total = 0;
    for (auto& p : peliculas) {
        if (p.getCodigoIMDB() < cod) {
            suma += p.getPresupuesto();
            total++;
        }
    }
    return total > 0 ? suma / total : 0;
}

void CatalogoPeliculas::incremento(double porcentaje, double valor) {
    set<Pelicula> copia = peliculas;
    peliculas.clear();
    for (auto p : copia) {
        if (p.getPresupuesto() < valor) {
            p.setPresupuesto(p.getPresupuesto() * (1 + porcentaje / 100.0));
        }
        peliculas.insert(p);
    }
}
