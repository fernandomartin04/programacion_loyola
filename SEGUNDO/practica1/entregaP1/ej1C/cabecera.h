#include <iostream>
using namespace std;

class Tiempo{
	private:
		int horas;
		int minutos;
	public:
		Tiempo(int horas=0, int minutos=0) {
			this->horas = horas;
			this->minutos = minutos;
		}
		int getHoras() const {
			return horas;
		}
		int getMinutos() const {
			return minutos;
		}
		
		void setHoras() {
			this->horas=horas;
		}
		void setMinutos() {
			this->minutos=minutos;
		}
		void normalizar();
		
		Tiempo operator+(const Tiempo& t) const;
		Tiempo operator-(const Tiempo& t) const;
		bool operator==(const Tiempo& t) const;
		friend ostream& operator<<(ostream& os, const Tiempo& t);
};