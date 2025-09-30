#include <iostream>
using namespace std;

class Complejo {
	private:
		double real;
		double imaginario;
	public:
		Complejo(double real = 0, double imaginario = 0) {
			this->real=real;
			this->imaginario=imaginario;
		}
		double getReal() const {
			return real;
		}
		double getImaginario() const {
			return imaginario;
		}
		void setReal(double real){
			this->real=real;
		}
		void setImaginario(double imaginario){
			this->imaginario=imaginario;
		}
		
		double getModulo();
		
		Complejo operator+(const Complejo& c) const;
		Complejo operator-(const Complejo& c) const;
		Complejo operator*(const Complejo& c) const;
		bool operator==(const Complejo& c) const;
		friend ostream& operator<<(ostream& os, const Complejo& c);

};