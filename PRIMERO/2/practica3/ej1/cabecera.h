class Paquete { 
private: 
	int id; 
	int codigoDestino;
	string nombre_empresa;
public: 
	// Constructor
	Paquete(int id = 0, int codigoDestino = 0, string nombre_empresa = 0); 
	
	// Metodos
	int getCodigoDestino() const;
	bool setCodigoDestino(int codigoDestino); 
	string toString(); 
	
};
class PaqueteComun: public Paquete {
private:
	float peso;
	float precio_por_kilo;
public:
	// Constructor
	PaqueteComun(int id, int codigoDestino, string nombre_empresa, float peso, float precio_por_kilo);
	
	// Metodos
	float getPeso() const;
	bool setPeso(float peso);
	float getPrecioPorKilo() const;
	bool setPrecioPorKilo(float precio_por_kilo);
	float calcularPrecio();
	string toString();
};

