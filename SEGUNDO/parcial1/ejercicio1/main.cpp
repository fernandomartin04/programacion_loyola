#include<iostream>
#include"centropokemon.h"

using namespace std;
//Funciones auxiliares NO BORRAR
void mostrarConjunto(set <CentroPokemon> const & c);
void mostrarMap(map <string, list <CentroPokemon> > const & mp);

int main()
{
	// TODO Descomentar cuando haya finalizado el apartado a)
	CentroPokemon c("Pueblo_Paleta", 150, "General", "Kanto");
	if(c.getNombre()=="Pueblo_Paleta" && c.getNumeroPokemon()==150 && c.getTipo()=="General" && c.getRegion()=="Kanto")
	{
		cout << "Apartado a) implementado correctamente" << endl;
	}
	else{
		cout << "Apartado a) NO implementado correctamente" << endl;
	}
	
	
	// TODO Descomentar cuando haya finalizado el apartado b)
	CentroPokemon c2 = c;
	if(c2.getNombre()=="Pueblo_Paleta" && c2.getNumeroPokemon()==150 && c2.getTipo()=="General" && c2.getRegion()=="Kanto")
	{
		cout << "Apartado b) implementado correctamente" << endl;
	}
	else{
		cout << "Apartado b) NO implementado correctamente" << endl;
	}
	
	
	// TODO Descomentar cuando haya finalizado el apartado c)
	CentroPokemon c3;
	cout << "Introduzca un centro Pokémon que sea Ciudad_Celeste, 200, Agua, Kanto" << endl;
	cin >> c3;
	cout << c3 << endl;
	if(c3.getNombre()=="Ciudad_Celeste" && c3.getNumeroPokemon()==200 && c3.getTipo()=="Agua" && c3.getRegion()=="Kanto")
	{
		cout << "Apartado c) operador >> implementado correctamente, \n\tcompruebe que el operador << es correcto con la salida por pantalla" << endl;
	}
	else{
		cout << "Apartado c) NO implementado correctamente" << endl;
	}
	
	
	// TODO Descomentar cuando haya finalizado el apartado d)
	const CentroPokemon c4 = c;
	const CentroPokemon c5 = c;
	if (c4 == c5)
	{
		cout << "Apartado d) implementado correctamente" << endl;
	}
	else{
		cout << "Apartado d) NO implementado correctamente" << endl;
	}
	
	
	// TODO Descomentar cuando haya finalizado el apartado e)
	const CentroPokemon csum = c + c;
	if(csum.getNombre()=="Pueblo_Paleta Pueblo_Paleta" && csum.getNumeroPokemon()==300 && csum.getTipo()=="General General" && csum.getRegion()=="Kanto Kanto")
	{
		cout << "Apartado e) implementado correctamente" << endl;
	}
	else{
		cout << "Apartado e) NO implementado correctamente" << endl;
	}
	
	
	//TODO Descomentar cuando haya finalizado el apartado f)
	const CentroPokemon c6("Ciudad_Azafran", 400, "Psiquico", "Kanto");
	const CentroPokemon c7 = c3;
	if ((c6 < c4) && !(c7 < c6))
	{
		cout << "Apartado f) implementado correctamente" << endl;
	}
	else{
		cout << "Apartado f) NO implementado correctamente" << endl;
	}
	
	
	// TODO Descomentar cuando haya finalizado el apartado a)
	// Datos
	CentroPokemon c11("Pueblo_Paleta", 150, "General", "Kanto");
	CentroPokemon c22("Ciudad_Celeste", 310, "Agua", "Kanto");
	CentroPokemon c33("Ciudad_Verde", 120, "Planta", "Kanto");
	CentroPokemon c44("Ciudad_Azafran", 400, "Psiquico", "Kanto");
	CentroPokemon c66("Ciudad_Canela", 300, "Fuego", "Kanto");

	// Región Johto
	CentroPokemon c77("Ciudad_Trigal", 180, "General", "Johto");
	CentroPokemon c88("Ciudad_Olivo", 220, "Agua", "Johto");
	CentroPokemon c99("Ciudad_Endrino", 260, "Dragon", "Johto");
	CentroPokemon c100("Ciudad_Iris", 240, "Psiquico", "Johto");

	// Región Hoenn
	CentroPokemon c101("Ciudad_Portual", 310, "Agua", "Hoenn");
	CentroPokemon c102("Ciudad_Arborada", 270, "Planta", "Hoenn");
	CentroPokemon c103("Ciudad_Calagua", 330, "Fuego", "Hoenn");

	// Región Sinnoh
	CentroPokemon c104("Ciudad_Jubileo", 190, "General", "Sinnoh");
	CentroPokemon c106("Ciudad_Corazon", 350, "Psiquico", "Sinnoh");
	
	
	// TODO Descomentar cuando haya finalizado el apartado g)
	cout << "\nApartado g) ver salida por pantalla" << endl;
	list <CentroPokemon> l1 = {c11,c22,c33,c44,c66,
							   c77,c88,c99,c100,
							   c101,c102,c103,
							   c104,c106};
	float nKanto = getNumeroMedioPokemon(l1,"Kanto");
	float nJohto = getNumeroMedioPokemon(l1,"Johto");
	float nHoenn = getNumeroMedioPokemon(l1,"Hoenn");
	float nSinnoh = getNumeroMedioPokemon(l1,"Sinnoh");

	
	cout << "Media de Pokémon atendidos en Kanto: " << nKanto << endl;
	cout << "Media de Pokémon atendidos en Johto: " << nJohto << endl;
	cout << "Media de Pokémon atendidos en Hoenn: " << nHoenn << endl;
	cout << "Media de Pokémon atendidos en Sinnoh: " << nSinnoh << endl;
	
	
	 //TODO Descomentar cuando haya finalizado el apartado h)
	cout << "\nApartado h) ver salida por pantalla" << endl;
	map <string, list <CentroPokemon> > mp = getCentrosPorTipo(l1);
	mostrarMap(mp);
	
	
	// TODO Descomentar cuando haya finalizado el apartado i)
	cout << "\nApartado i) ver salida por pantalla" << endl;
	set <CentroPokemon> conjunto = {c11,c22,c33,c44,c66,
								   c77,c88,c99,c100,
								   c101,c102,c103,
								   c104,c106};
	set <CentroPokemon> conjunto2 = actualizarPokemon(conjunto,"Johto");
	mostrarConjunto(conjunto2);
	
	
	// TODO Descomentar cuando haya finalizado el apartado j)
	cout << "\nApartado j) ver salida por pantalla" << endl;
	list<string> activos = getCentroMasActivoPorTipo(conjunto,"Agua");
	cout << "Centros más activos de tipo Agua:" << endl;
	for(const string &nombre : activos)
		cout << "\t" << nombre << endl;
	
	return 0;	
}

void mostrarConjunto(set <CentroPokemon> const & c)
{
	set <CentroPokemon>::const_iterator it = c.begin();
	while(it != c.end())
	{
		cout << "(" << it->getNombre() << "," << it->getNumeroPokemon() << "," << it->getTipo() << "," << it->getRegion() << ")" << endl;
		it++;
	}
}

void mostrarMap(map <string, list <CentroPokemon> > const & mp)
{
	map <string, list <CentroPokemon> >::const_iterator it = mp.begin();
	list <CentroPokemon>::const_iterator it2;
	while(it != mp.end())
	{
		cout << "[" << it->first << "]" << endl;
		it2 = it->second.begin();
		while(it2 != it->second.end())
		{
			cout << "\t(" << it2->getNombre() << "," << it2->getNumeroPokemon() << "," << it2->getTipo() << "," << it2->getRegion() << ")" << endl;
			it2++;
		}
		it++;
	}
}

