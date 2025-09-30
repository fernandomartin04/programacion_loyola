#include "cabecera.h"
#include <cstdlib>
#include <climits>
using namespace std;

static void dividirCadena(const string& str, char delim, string partes[], int& count) {
    size_t inicio = 0;
    size_t pos = str.find(delim);
    count = 0;
    while (pos != string::npos) {
        partes[count++] = str.substr(inicio, pos - inicio);
        inicio = pos + 1;
        pos = str.find(delim, inicio);
    }
    partes[count++] = str.substr(inicio);
}

Pelicula::Pelicula(const string& datos) {
    string partes[5];
    int count = 0;
    dividirCadena(datos, '&', partes, count);

    if (count != 5)
        throw invalid_argument("Formato incorrecto");

    titulo = partes[0];
    director = partes[1];
    codigoIMDB = partes[2];
    duracion = atoi(partes[3].c_str());
    presupuesto = atof(partes[4].c_str());

    if (codigoIMDB.size() != 9)
        throw invalid_argument("Código IMDB inválido");

    if (duracion <= 0)
        throw invalid_argument("Duración inválida");
}

set<Pelicula> CatalogoPeliculas::duracionMinima(int min) const {
    set<Pelicula> result;
    const Pelicula* seleccionada = nullptr;
    for (const auto& p : peliculas) {
        if (p.getDuracion() > min) {
            if (!seleccionada || p.getDuracion() < seleccionada->getDuracion()) {
                seleccionada = &p;
            }
        }
    }
    if (seleccionada) result.insert(*seleccionada);
    return result;
}

int CatalogoPeliculas::peliculasPresupuestoInferior(double umbral) const {
    int count = 0;
    for (const auto& p : peliculas) {
        if (p.getPresupuesto() < umbral)
            count++;
    }
    return count;
}

double CatalogoPeliculas::presupuestoMedioDirector(const string& dir) const {
    double suma = 0;
    int count = 0;
    for (const auto& p : peliculas) {
        if (p.getDirector() == dir) {
            suma += p.getPresupuesto();
            count++;
        }
    }
    return count > 0 ? suma / count : 0;
}

Pelicula CatalogoPeliculas::peliculaMasLargaDirector(const string& dir) const {
    Pelicula maxPeli = *peliculas.begin();
    bool encontrado = false;
    for (const auto& p : peliculas) {
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
    for (const auto& p : peliculas) {
        suma += p.getDuracion();
    }
    return suma / peliculas.size();
}

double CatalogoPeliculas::presupuestoMedioCodigo(const string& cod) const {
    double suma = 0;
    int count = 0;
    for (const auto& p : peliculas) {
        if (p.getCodigoIMDB() < cod) {
            suma += p.getPresupuesto();
            count++;
        }
    }
    return count > 0 ? suma / count : 0;
}

void CatalogoPeliculas::incremento(double porcentaje, double valor) {
    set<Pelicula> copia = peliculas;
    peliculas.clear();
    for (auto p : copia) {
        if (p.getPresupuesto() < valor) {
            double nuevo = p.getPresupuesto() * (1 + porcentaje / 100.0);
            p.setPresupuesto(nuevo);
        }
        peliculas.insert(p);
    }
}

map<string, list<string>> CatalogoPeliculas::peliculasDirector() const {
    map<string, list<string>> resultado;
    for (const auto& p : peliculas) {
        resultado[p.getDirector()].push_back(p.getTitulo());
    }
    return resultado;
}

map<string, int> CatalogoPeliculas::duracionDirector() const {
    map<string, int> resultado;
    for (const auto& p : peliculas) {
        resultado[p.getDirector()] += p.getDuracion();
    }
    return resultado;
}

map<string, double> CatalogoPeliculas::presupuestoDirector() const {
    map<string, double> resultado;
    for (const auto& p : peliculas) {
        resultado[p.getDirector()] += p.getPresupuesto();
    }
    return resultado;
}

list<Pelicula> CatalogoPeliculas::peliculasMasDuracion() const {
    list<Pelicula> resultado;
    int maxDuracion = 0;
    for (const auto& p : peliculas) {
        if (p.getDuracion() > maxDuracion) {
            resultado.clear();
            resultado.push_back(p);
            maxDuracion = p.getDuracion();
        } else if (p.getDuracion() == maxDuracion) {
            resultado.push_back(p);
        }
    }
    return resultado;
}

list<string> CatalogoPeliculas::directoresMenorPeliculas() const {
    map<string, int> contador;
    for (const auto& p : peliculas) {
        contador[p.getDirector()]++;
    }
    int minimo = peliculas.empty() ? 0 : INT_MAX;
    for (const auto& par : contador) {
        if (par.second < minimo) {
            minimo = par.second;
        }
    }
    list<string> resultado;
    for (const auto& par : contador) {
        if (par.second == minimo) {
            resultado.push_back(par.first);
        }
    }
    return resultado;
}
