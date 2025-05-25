#include <iostream>
using namespace std;

class SerVivo {
	private: 
		string nombre;
	public:
		SerVivo(string);
		void miNombre();
};

class Volador : virtual public SerVivo {
	public:
		Volador(string);
		void volar();
};


class Invisible : virtual public SerVivo{
	public:
		Invisible(string);
		void invisibilizarse();
};


class Hada : public Volador, public Invisible{
	public:
		Hada(string);
		void presentarse();
};

