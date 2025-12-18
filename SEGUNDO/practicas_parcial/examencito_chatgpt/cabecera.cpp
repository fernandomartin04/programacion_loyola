#include "cabecera.h"

CentroPokemon operator+(const CentroPokemon & c1, const CentroPokemon & c2) {
    CentroPokemon nuevo;
    nuevo.setNombre(c1.getNombre()+ " " + c2.getNombre());
    nuevo.setNumPokemon(c1.getNumPokemon() + c2.getNumPokemon());
    nuevo.setRegion(c1.getRegion()+ " " + c2.getRegion());
    nuevo.setTipo(c1.getTipo() + " " + c2.getTipo());
    return nuevo;
}

ostream& operator<<(ostream& os, const CentroPokemon & c) {
    os << "(" << c.getNombre() << ", " << c.getNumPokemon() << ", " << c.getTipo() << 
    ", " << c.getRegion() << ")";

    return os;
}

istream& operator>>(istream& is, CentroPokemon & c) {
    int n;
    string name, t, r;
    
    cout << "Introduzca nombre: ";
    is >> name;
    cout << "Introduzca numero de pokemon: ";
    is >> n;
    cout << "Introduzca tipo:";
    is >> t;
    cout << "Introduzca region:";
    is >> r;

    c.setNombre(name);
    c.setNumPokemon(n);
    c.setRegion(r);
    c.setTipo(t);
    return is;
}



double getNumeroMedioPokemon(const list<CentroPokemon>& centros, const string& region) {
    double media = 0.0;
    int aux = 0;
    list<CentroPokemon>::const_iterator it = centros.begin();

    while(it != centros.end()) {
        if(it->getRegion() == region) {
            media += it->getNumPokemon();
            aux++;
        }
        it++;
    }
    if (aux == 0) return 0.0;
    return media / aux;

}


map<string, list<CentroPokemon>> getCentrosPorTipo(const list<CentroPokemon>& centros) {
    map<string, list<CentroPokemon>> mp;
    list<CentroPokemon>::const_iterator it = centros.begin();
    while(it != centros.end()) {
        mp[it->getTipo()].push_back(*it);
        it++;
    }
    return mp;
}


set<CentroPokemon> actualizarPokemon(const set<CentroPokemon>& centros, const string& region) {
    set<CentroPokemon> s;
    set<CentroPokemon>::const_iterator it = centros.begin();
    while (it != centros.end()) {
        if (it->getRegion() == region) {
            s.insert(CentroPokemon(it->getNombre(), it->getNumPokemon()*1.2, it->getRegion(), it->getTipo()));
        }
        else {
            s.insert(CentroPokemon(it->getNombre(), it->getNumPokemon()*0.95, it->getRegion(), it->getTipo()));
        }
        it++;
    }
    return s;
}


vector<string> getCentroMasActivoPorTipo(const set<CentroPokemon>& centros, const string& tipo) {
    vector<string> v;
    set<CentroPokemon>::const_iterator it = centros.begin();

    int min = -1;

    while(it != centros.end()) {
        if (it->getTipo() == tipo) {
            if (min == -1) {
                v.push_back(it->getNombre());
                min = it->getNumPokemon();
            }
            else if(it->getNumPokemon() > min) {
                v.clear();
                v.push_back(it->getNombre());
                min = it->getNumPokemon();
            }
            else if(it->getNumPokemon() == min) {
                v.push_back(it->getNombre());
            }
        }
        it++;
    }
    return v;
}


void eliminarPorRegion(list<CentroPokemon>& centros, const string& region) {
    list<CentroPokemon>::iterator it = centros.begin();
    while(it != centros.end()) {
        if(it->getRegion() == region) {
            it = centros.erase(it);
        }
        else {
            it++;
        }
    }
}

bool compararCentros(const CentroPokemon& a, const CentroPokemon& b) {
    if (a.getNumPokemon() < b.getNumPokemon()) return true;
    else if(a.getNumPokemon() == b.getNumPokemon()) {
        return a.getNombre() < b.getNombre();
    }
    else return false;
}


list<CentroPokemon> ordenarPorNumPokemon(const list<CentroPokemon>& centros) {
    list<CentroPokemon> l = centros;    

    l.sort(compararCentros);

    return l;
}


int contarCentrosPorRegionYMinPokemon(const set<CentroPokemon>& aux, string region, int n) {
    set<CentroPokemon>::const_iterator it = aux.begin();
    int count = 0;
    while(it != aux.end()) {
        if(it->getRegion() == region && it->getNumPokemon() > n) {
            count++;
        }
        it++;
    }
    return count;
}

string tipoConMasPokemon(const map<string, list<CentroPokemon>>& mp) {
    string tipo="";
    int max = -1;
    map<string, list<CentroPokemon>>::const_iterator it = mp.begin();


    while(it != mp.end()) {
        list<CentroPokemon>::const_iterator it2 = it->second.begin();
        int aux = 0;
        while(it2 != it->second.end()) {
            aux += it2->getNumPokemon();
            it2++;
        }
        if (aux > max) {
            tipo = it->first;
            max = aux;
        }
        it++;
    }
    return tipo;

}

void eliminarCentrosInferioresALaMedia(list<CentroPokemon>& l) {
    list<CentroPokemon>::iterator it = l.begin();
    int aux = 0;
    int media = 0;
    while (it != l.end()) {
        media += it->getNumPokemon();
        aux++;
        it++;
    }
    media /= aux;

    it = l.begin();

    while(it != l.end()) {
        if(it->getNumPokemon() < media) {
            it = l.erase(it);
        }
        else {
            it++;
        }
    }
}