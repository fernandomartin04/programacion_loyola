#include <iostream>
#include <string>
#include <list>
#include <map>
#include <set>

using namespace std;

class CentroDeportivo {
private:
    string nombre;
    string ciudad;
    int numero_socios;
    string disciplina_principal;

public:
    CentroDeportivo(string nombre="sin nombre", string ciudad="sin ciudad", int numero_socios=0, string disciplina_principal="sin disciplina principal") {
        this->nombre = nombre;
        this->ciudad = ciudad;
        this->numero_socios = numero_socios;
        this->disciplina_principal = disciplina_principal;
    }

    void setNombre(string nombre) { this->nombre = nombre; }
    void setCiudad(string ciudad) { this->ciudad = ciudad; }
    void setNumeroSocios(int numero_socios) { this->numero_socios = numero_socios; }
    void setDisciplinaPrincipal(string disciplina_principal) { this->disciplina_principal = disciplina_principal; }

    string getNombre() const { return nombre; }
    string getCiudad() const { return ciudad; }
    int getNumeroSocios() const { return numero_socios; }
    string getDisciplinaPrincipal() const { return disciplina_principal; }

    bool operator<(const CentroDeportivo& otro) const { return nombre < otro.nombre; }
    CentroDeportivo operator=(const CentroDeportivo& otro) {
        nombre = otro.nombre;
        ciudad = otro.ciudad;
        numero_socios = otro.numero_socios;
        disciplina_principal = otro.disciplina_principal;
        return *this;
    }
};

map<string,list<string>> relaciontCiudadCentros(const set<CentroDeportivo>& centros);
map<string,list<string>> relacionDisciplinaCentros(const set<CentroDeportivo>& centros);
map<string,int> relacionDisciplinaSocios(const set<CentroDeportivo>& centros);
map<string,double> relacionCiudadPromedioSocios(const set<CentroDeportivo>& centros);
map<string,string> relacionCiudadDisciplinaComun(const set<CentroDeportivo>& centros);

ostream& operator<<(ostream& os, const CentroDeportivo& c);
istream& operator>>(istream& in, CentroDeportivo& c);
