#include<iostream>
#include"solucionrecubrimiento.h"

using namespace std;

//Sobrecarga
SolucionRecubrimiento & SolucionRecubrimiento::operator=(SolucionRecubrimiento const & s)
{
	setSubconjuntos(s.getSubconjuntos());
	setUniversoGenerado(s.getUniversoGenerado());
	setNuevosElementos(s.getNuevosElementos());
	setPesoTotal(s.getPesoTotal());
	return *this;
}
bool SolucionRecubrimiento::operator > (SolucionRecubrimiento const & s) const
{
	return getPesoTotal() < s.getPesoTotal();
}

//Funcion de salida
void SolucionRecubrimiento::mostrar() const
{
	cout << "Subconjuntos: " << endl;
	list <Subconjunto>::const_iterator it=subconjuntos.begin();
	while(it!=subconjuntos.end())
	{
		it->mostrar();
		it++;
	}
	cout << "Universo generado: ";
	set <int>::const_iterator it2=universo_generado.begin();
	cout << "{ ";
	while(it2!=universo_generado.end())
	{
		cout << *it2 << " ";
		it2++;
	}
	cout << "}" << endl;
	cout << "Peso total: " << getPesoTotal() << endl;
}

//Funciones para insertar y eliminar un subconjunto de la solucion
void SolucionRecubrimiento::addSubconjunto(Subconjunto const & sub)
{
	if(sub.getCantidad()){
		subconjuntos.push_back(sub);
		set <int> d = sub.getDatos();
		set <int>::iterator it=d.begin();
		set <int> ne;
		while(it!=d.end())
		{
			if(universo_generado.count(*it) == 0){
				universo_generado.insert(*it);
				ne.insert(*it);
			}
			it++;
		}
		nuevos_elementos.push_back(ne);
		setPesoTotal(getPesoTotal()+sub.getPeso());
	}
}

void SolucionRecubrimiento::deleteSubconjunto(Subconjunto const & sub)
{
	if(sub.getCantidad()){
		subconjuntos.pop_back();
		set <int> ne = nuevos_elementos.back();
		nuevos_elementos.pop_back();
		set <int>:: iterator it = ne.begin();
		while(it!=ne.end())
		{
			universo_generado.erase(*it);
			it++;
		}
		setPesoTotal(getPesoTotal()-sub.getPeso());
	}
}
