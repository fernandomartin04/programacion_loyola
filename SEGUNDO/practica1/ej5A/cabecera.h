#include <iostream>
#include <string>
#include <list>
#include <map>
#include <set>

using namespace std;

class CentroDeportivo {
	private:
		string nombre, ciudad;
		int numero;
		string disciplina;
		
	public:
		CentroDeportivo(string nombre="", string ciudad="", int numero=0, string disciplina="") {
			this->nombre=nombre;
			this->ciudad=ciudad;
			this->numero=numero;
			this->disciplina=disciplina;
		}
		string getNombre() const {return nombre;}
		string getCiudad() const {return ciudad;}
		int getNumero() const {return numero;}
		string getDisciplina() const {return disciplina;}
		
		void setNombre(string nombre) {this->nombre=nombre;}
		void setCiudad(string ciudad) {this->ciudad=ciudad;}
		void setNumero(int numero) {this->numero=numero;}
		void setDisciplina(string disciplina) {this->disciplina=disciplina;}
		
		friend istream& operator >> (istream& is, CentroDeportivo& cd){
			cout << "Nombre: "; is >> cd.nombre;
			cout << "Ciudad: "; is >> cd.ciudad;
			cout << "Numero: "; is >> cd.numero;
			cout << "Disciplina: "; is >> cd.disciplina;
			return is;
		}
		
		friend ostream& operator << (ostream& os, const CentroDeportivo& cd) {
			os << "Centro: " << cd.nombre << " ; Ciudad: " << cd.ciudad
				<< " ; Numero: " << cd.numero << " ; Disciplina: " << cd.disciplina;
			return os;
		}
	
};

map<string, list<string>> relacionCiudadCentros(const set<CentroDeportivo>& centros);
map<string, list<string>> relacionDisciplinaCentros(const set<CentroDeportivo>& centros);
map<string, int> relacionDisciplinaSocios(const set<CentroDeportivo>& centros);
map<string, double> relacionCiudadPromedioSocios(const set<CentroDeportivo>& centros);
map<string, string> relacionCiudadDisciplinaComun(const set<CentroDeportivo>& centros);