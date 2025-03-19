class Rectangulo {
private:
	float alto;
	double ancho;
	
public:
	Rectangulo(float alto, double ancho);
	double getAncho();
	void setAncho(double nuevo_ancho);
	float getAlto();
	void setAlto(float nuevo_alto);
	void cambiarAltoAncho(float nuevo_alto, double nuevo_ancho);
};