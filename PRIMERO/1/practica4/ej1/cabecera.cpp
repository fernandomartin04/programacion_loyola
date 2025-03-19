#include"cabecera.h"

int esBisiesto(int ano) {
	
	bool bisiesto = false;
	int resto1, resto2, resto3;
	resto1 = ano % 4;
	resto2 = ano % 100;
	resto3 = ano % 400;
	
	if (resto1 != 0){
		bisiesto = false;
	}
	else {
		if (resto2 == 0) {
			if (resto3 == 0) {
				bisiesto = true;
			}
			else {
				bisiesto = false;
			}
		}
		else {
			bisiesto = true;
		}
	}
	return bisiesto;
}
