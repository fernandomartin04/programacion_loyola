#include "cabecera.h"

map<string,list<string>> relaciontCiudadCentros(const set<CentroDeportivo>& centros) {
    map<string,list<string>> resultado;
    for (set<CentroDeportivo>::const_iterator it = centros.begin(); it != centros.end(); ++it) {
        if (resultado.find(it->getCiudad()) == resultado.end()) {
            resultado[it->getCiudad()] = list<string>();
        }
        resultado[it->getCiudad()].push_back(it->getNombre());
    }
    return resultado;
}

map<string,list<string>> relacionDisciplinaCentros(const set<CentroDeportivo>& centros) {
    map<string,list<string>> resultado;
    for (set<CentroDeportivo>::const_iterator it = centros.begin(); it != centros.end(); ++it) {
        resultado[it->getDisciplinaPrincipal()].push_back(it->getNombre());
    }
    return resultado;
}

map<string,int> relacionDisciplinaSocios(const set<CentroDeportivo>& centros) {
    map<string,int> resultado;
    for (set<CentroDeportivo>::const_iterator it = centros.begin(); it != centros.end(); ++it) {
        if (resultado.count(it->getDisciplinaPrincipal()) == 0) {
            resultado[it->getDisciplinaPrincipal()] = 0;
        }
        resultado[it->getDisciplinaPrincipal()] += it->getNumeroSocios();
    }
    return resultado;
}

map<string,double> relacionCiudadPromedioSocios(const set<CentroDeportivo>& centros) {
    map<string,int> suma;
    map<string,int> conteo;
    for (set<CentroDeportivo>::const_iterator it = centros.begin(); it != centros.end(); ++it) {
        suma[it->getCiudad()] += it->getNumeroSocios();
        conteo[it->getCiudad()]++;
    }
    map<string,double> promedio;
    for (map<string,int>::iterator itSuma = suma.begin(); itSuma != suma.end(); ++itSuma) {
        promedio[itSuma->first] = static_cast<double>(itSuma->second) / conteo[itSuma->first];
    }
    return promedio;
}

map<string,string> relacionCiudadDisciplinaComun(const set<CentroDeportivo>& centros) {
    map<string,map<string,int>> conteo;
    for (set<CentroDeportivo>::const_iterator it = centros.begin(); it != centros.end(); ++it) {
        conteo[it->getCiudad()][it->getDisciplinaPrincipal()]++;
    }

    map<string,string> resultado;
    for (map<string,map<string,int>>::iterator itCiudad = conteo.begin(); itCiudad != conteo.end(); ++itCiudad) {
        string disciplinaMax = "";
        int maxVeces = 0;
        for (map<string,int>::iterator itDisc = itCiudad->second.begin(); itDisc != itCiudad->second.end(); ++itDisc) {
            if (itDisc->second > maxVeces) {
                maxVeces = itDisc->second;
                disciplinaMax = itDisc->first;
            }
        }
        resultado[itCiudad->first] = disciplinaMax;
    }
    return resultado;
}

ostream& operator<<(ostream& os, const CentroDeportivo& c) {
    return os << c.getNombre() << " " << c.getCiudad() << " " << c.getNumeroSocios() << " " << c.getDisciplinaPrincipal();
}

istream& operator>>(istream& in, CentroDeportivo& c) {
    string nombre, ciudad, disciplina;
    int socios;
    in >> nombre >> ciudad >> socios >> disciplina;
    c.setNombre(nombre);
    c.setCiudad(ciudad);
    c.setNumeroSocios(socios);
    c.setDisciplinaPrincipal(disciplina);
    return in;
}
