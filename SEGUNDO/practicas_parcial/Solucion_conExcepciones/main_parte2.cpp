#include<iostream>
#include"aeropuerto.h"

using namespace std;

int main()
{
	// Generamos una serie de vuelos
	Vuelo v1("Barcelona","20231218",150, 20.5);
	Vuelo v2("Sevilla","20231210", 100, 99.8);
	Vuelo v3("Bilbao","20231210",142, 40.33);
	Vuelo v4("Palma Mallorca", "20231208",250, 50.22);
	Vuelo v5("Roma","20231215",321, 130.2);
	Vuelo v6("Roma","20231215",350, 200.1);
	Vuelo v7("Sevilla","20231205",100, 55);
	
	// Generamos el aeropuerto e insertamos sus vuelos-------------------------------------------------
	Aeropuerto a(1234,"Madrid");
	a.addVuelo(v1);
	a.addVuelo(v2);
	a.addVuelo(v3);
	a.addVuelo(v4);
	a.addVuelo(v5);
	a.addVuelo(v6);
	a.addVuelo(v7);
	a.deleteVuelo(v7);
	cout << a;
	
	// Ejecutamos el método para obtener el vuelo con mayor recaudación--------------------------------
	cout << endl << "Vuelo con mayor recaudacion" << endl;
	Vuelo v = a.getMayorRecaudacion();
	cout << v;
	
	// Ejecutamos el método para obtener la lista de vuelos cuya recaudación supera 10000--------------
	cout << endl << "Vuelos por encima de un umbral" << endl;
	list <Vuelo> l = a.getSobreRecaudacion(10000);
	list <Vuelo>::const_iterator it= l.begin();
	while(it!=l.end())
	{
		cout << *it;
		it++;
	}
	
	// Ejecutamos el método para obtener la lista de vuelos por fecha----------------------------------
	cout << endl << "Map fecha-vuelos" << endl;
	map <string, list <Vuelo> > mp = a.getRelacionFechaVuelos();
	// itmp es un iterador para el map
	map <string, list <Vuelo> >::const_iterator itmp = mp.begin();
	// itl es un iterador para la lista contenida en el segundo campo (valor) del map
	list <Vuelo>::const_iterator itl;
	while(itmp!=mp.end()){
		// Para cada elemento del map, mostramos la clave (fecha), contenida en first
		cout << itmp->first << endl;
		// Ponemos el iterador de la lista al principio de la lista de esa posición
		itl = itmp->second.begin();
		while(itl!=itmp->second.end()){
			cout << "\t" << *itl;
			itl++;
		}
		itmp++;
	}
	
	// Ejecutamos el método para obtener el map que acumule la recaudacion por destino-----------------
	cout << endl << "Map destino - recaudacion" << endl; 
	map <string, float> mp2 = a.getRecaudacionDestino();
	// itmp2 es un iterador para este map
	map <string, float>::const_iterator itmp2 = mp2.begin();
	while(itmp2!=mp2.end()){
		// Se muestra la primera parte (clave), y la segunda (valor)
		// Es decir: destino - recaudacion
		cout << itmp2->first << " - " << itmp2->second << "$" << endl;
		itmp2++;
	}
	
	return 0;
}
