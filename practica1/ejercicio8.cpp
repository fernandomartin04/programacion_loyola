#include<iostream>
using namespace std;
	
int main(){
	int HoraInicio, MinutoInicio, SegundoInicio, HoraFinal, MinutoFinal, SegundoFinal;
	int TotalInicio, TotalFinal, horas, minutos, segundos, diferencia;
	
	cout << "Introduce hora de inicio: " << endl;
	cin >> HoraInicio >> MinutoInicio >> SegundoInicio;
	cout << "Introduce hora final: " << endl;
	cin >> HoraFinal >> MinutoFinal >> SegundoFinal;
	
	TotalInicio = HoraInicio * 3600 + MinutoInicio * 60 + SegundoInicio;
	TotalFinal = HoraFinal * 3600 + MinutoFinal * 60 + SegundoFinal;
	diferencia = TotalFinal - TotalInicio;
	
	horas = diferencia / 3600;
	diferencia %= 3600;
	minutos = diferencia / 60;
	segundos = diferencia % 60;
	
	cout << "La diferencia de las horas es: " << horas << " h, " << minutos << " mins, " << segundos << " segs" << endl ;
	return 0;
	
}
