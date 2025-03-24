class Paquete { 
private: 
	int id; 
	int codigoDestino;
	string nombre_empresa;
public: 
	// Constructor
	Paquete(float id, int codigoDestino, string nombre_empresa); 
	
	// Metodos
	int getCodigoDestino() const;
	bool setCodigoDestino(int codigoDestino); 
	string toString(); 
	
};

