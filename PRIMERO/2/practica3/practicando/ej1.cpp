#include <iostream>
using namespace std;

class Paquete {
	private:
		int id, codigoDestino;
		string nombre_empresa;
	public:
		Paquete();
		Paquete(int _id);
		int getId();
		int getCodigoDestino();
		bool setCodigoDestino(int codigoDestino);
		
};

class PaqueteComun : public Paquete {
	private: 
		float peso;
	public:
		PaqueteComun(int, int, string, float);
		void getPeso();
}

PaqueteAlfonso : public PaqueteComun {
	
}

Paquete::Paquete(int _id, int _codigoDestino, string _nombre_empresa) {
	id = _id;
	codigoDestino = _codigoDestino;
	nombre_empresa = _nombre_empresa;
}

PaqueteComun::PaqueteComun(int _id, int _codigoDestino, string _nombre_empresa, float _peso) : Paquete(int _id, int _codigoDestino, string _nombre_empresa) {
	
}




// Constructor de Paquete
Paquete::Paquete() {
	id = 0;
	codigoDestino = 0;
	nombre_empresa = 0;
}

Paquete::Paquete(int _id) {
	id = _id;
	codigoDestino = -1;
}


// Funciones de Paquete
int getCodigoDestino() {
	return codigoDestino;
}

bool setCodigoDestino(int codigoDestino) {
	int cod = 0;
	cout << "Introduzca el nuevo valor para el codigo de destino, de 5 cifras" << endl;
	cin >> cod;
	if (cod > 9999 && cod < 100000) {
		_codigoDestino = cod;
		return true;
	} else {
		return false;
	}
}


main () {
	
	PaqueteComun p1(5, 8, "pedro", 7.8);
	p1.getPeso();
	p1.getId();
}


main () {
	Paquete p1(1, 3, 5);
	cout << "el codigo destino es: " << p1.getCodigoDestino << endl;
}