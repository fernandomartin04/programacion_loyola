class NumComplejos { 
private: float real; 
	float imaginario; 
public: NumComplejos(float real = 0, float imaginario = 0); 
	void setReal(float nuevo_real); 
	void setImag(float nuevo_imag); 
	void sumarReal(float real2); 
	void sumarImag(float imag2); 
	void multiplicarReal(float escalar); 
	float obtenerModulo(); 
	float getReal(); 
	float getImag(); 
	
};





