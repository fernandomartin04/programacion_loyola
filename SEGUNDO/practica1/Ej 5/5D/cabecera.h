#pragma once
#include <string>
#include <set>
#include <map>
#include <list>
#include <stdexcept>
using namespace std;

class Pelicula {
private:
    string titulo;
    string director;
    string codigoIMDB;
    int duracion;
    double presupuesto;

public:
    Pelicula(const string& datos);

    string getTitulo() const { return titulo; }
    string getDirector() const { return director; }
    string getCodigoIMDB() const { return codigoIMDB; }
    int getDuracion() const { return duracion; }
    double getPresupuesto() const { return presupuesto; }

    void setDuracion(int d) {
        if (d <= 0) throw invalid_argument("Duración inválida");
        duracion = d;
    }
    void setPresupuesto(double p) { presupuesto = p; }

    bool operator<(const Pelicula& otra) const {
        if (titulo != otra.titulo)
            return titulo < otra.titulo;
        return director > otra.director;
    }
};

class CatalogoPeliculas {
private:
    int codigo;
    string responsable;
    set<Pelicula> peliculas;

public:
    CatalogoPeliculas(int c, const string& r) : codigo(c), responsable(r) {}

    void addPelicula(const Pelicula& p) { peliculas.insert(p); }
    void removePelicula(const Pelicula& p) { peliculas.erase(p); }
    set<Pelicula> getPeliculas() const { return peliculas; }

    set<Pelicula> duracionMinima(int min) const;
    int peliculasPresupuestoInferior(double umbral) const;
    double presupuestoMedioDirector(const string& dir) const;
    Pelicula peliculaMasLargaDirector(const string& dir) const;
    double duracionMedia() const;
    double presupuestoMedioCodigo(const string& cod) const;
    void incremento(double porcentaje, double valor);

    map<string, list<string>> peliculasDirector() const;
    map<string, int> duracionDirector() const;
    map<string, double> presupuestoDirector() const;
    list<Pelicula> peliculasMasDuracion() const;
    list<string> directoresMenorPeliculas() const;
};
