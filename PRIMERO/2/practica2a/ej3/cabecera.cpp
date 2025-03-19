#include "cabecera.h" 
#include <cmath> 

NumComplejos::NumComplejos(float real, float imaginario) { 
	this->real = real; 
	this->imaginario = imaginario; 
} 

void NumComplejos::setReal(float nuevo_real) { 
	real = nuevo_real; 
} 

void NumComplejos::setImag(float nuevo_imag) { 
	imaginario = nuevo_imag; 
} 

void NumComplejos::sumarReal(float real2) { 
	real += real2; 
} 

void NumComplejos::sumarImag(float imag2) { 
	imaginario += imag2; 
} 

void NumComplejos::multiplicarReal(float escalar) { 
	real *= escalar; 
} 

float NumComplejos::obtenerModulo() { 
	return sqrt(real * real + imaginario * imaginario); 
	
} 

float NumComplejos::getReal() { 
	return real; 
} 

float NumComplejos::getImag() { 
	return imaginario; 
}
