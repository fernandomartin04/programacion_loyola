#include<iostream>
#include<list>
#include"solucionreina.h"
#include"estadoreina.h"

using namespace std;

// TODO Funciones de estado
void EstadoReina::avanza(Reina const & r)
{
    sol.addReina(r);
    setNReinasColocadas(getNReinasColocadas()+1);
    
}

void EstadoReina::retrocede(Reina const & r)
{
    sol.deleteReina(r);
    setNReinasColocadas(getNReinasColocadas()-1);
    
}

list <Reina> EstadoReina::getAlternativas(int f)
{
    list<Reina> alts;

    set<int> dp = sol.getDPUsadas();
    set<int> ds = sol.getDSUsadas();
    set<int> c = sol.getCUsadas();

    for(int i = 0; i < nReinasTotales; i++) {
        if (dp.find(f-i) == dp.end() && ds.find(f+i) == ds.end() && c.find(i) == c.end()) {
            Reina r(f, i);
            alts.push_back(r);
        }
    }

    return alts;
}

Reina EstadoReina::getMejorAlternativa(int f)
{   
    set<int> dp = sol.getDPUsadas();
    set<int> ds = sol.getDSUsadas();
    set<int> c = sol.getCUsadas();

    for(int i = 0; i < nReinasTotales; i++) {
        if (dp.find(f-i) == dp.end() && ds.find(f+i) == ds.end() && c.find(i) == c.end()) {
            return Reina (f, i);
            
        }
    }

    return Reina(f, -1);
}

bool EstadoReina::esFinal()
{
    return nReinasColocadas == nReinasTotales;
}
