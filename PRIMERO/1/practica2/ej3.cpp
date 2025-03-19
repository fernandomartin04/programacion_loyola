#include<iostream>
using namespace std;

int main(){
	float practico, cuestionarios, clase, total;
	cout << "Introduce la nota del examen practico" << endl;
	cin >> practico;
	cout << "Introduce la nota de los cuestionarios" << endl;
	cin >> cuestionarios;
	cout << "Introduce la nota de clase" << endl;
	cin >> clase;
	
	if (practico >= 5 && cuestionarios >= 5 && clase >= 5) {
		//Obtengo nota
		practico = practico*0.4;
		cuestionarios = cuestionarios*0.1;
		clase = clase*0.5;
		total = practico+cuestionarios+clase;
		if (total < 7){
			cout << "Tienes un aprobado"ler << endl;
		} 
		else if (total > 7 && total < 9) {
			cout << "Tienes un notable" << endl;
		}
		else if (total > 9 && total <= 10) {
			cout << "Tienes un sobresaliente" << endl;
		}
	}
	else {
		cout << "Estas suspenso" << endl;
	}
	 
}
