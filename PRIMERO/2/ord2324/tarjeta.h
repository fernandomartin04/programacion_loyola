#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Tarjeta {
	private:
		int id, nivel_acceso;
		
	public:
		Tarjeta();
		Tarjeta(int, int)
		Tarjeta(const Tarjeta &totra);
		
		int getId();
		int getNivel_acceso();
		
		void setId(int id);
		void setNivel_acceso(int nivel_acceso);
		
		friend ostream & operator << (ostream &os, Tarjeta &t);
		friend istream & operator >> (istream &is, Tarjeta &t);
}