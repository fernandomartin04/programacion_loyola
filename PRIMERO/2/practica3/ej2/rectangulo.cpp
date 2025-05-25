#include <iostream>
using namespace std;

class Persona {
	private: 
		string nombre;
		int edad;
		
	public:
		Persona(string, int); // Constructor
		void mostrarPersona();
};

class Alumno : public Persona {
	private:
		string codigoAlumno;
		float notaFinal;
	public:
		Alumno(string, int, string, float);
		void mostrarAlumno();
};

class Empleado : public Persona {
	private: 
		string nombreEmpresa;
		int salario;
	public:
		Empleado(string, int, string, int);
		void mostrarEmpleado();	
};

class Universitario : public Alumno {
	private:
		string carrera;
		int curso;
	public:
		Universitario(string, int, string, float, string, int);
		void mostrarUniversitario();
};

// Constructors
Persona::Persona(string _nombre, int _edad) {
	nombre = _nombre;
	edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad,  string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad){
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

Empleado::Empleado(string _nombre, int _edad, string _nombreEmpresa, int _salario) : Persona(_nombre, _edad) {
	nombreEmpresa = _nombreEmpresa;
	salario = _salario;
}

Universitario::Universitario(string _nombre, int _edad,  string _codigoAlumno, float _notaFinal, string _carrera, int _curso) : Alumno(_nombre, _edad, _codigoAlumno, _notaFinal) {
	carrera = _carrera;
	curso = _curso;
}

// Funcion de Persona
void Persona::mostrarPersona(){
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

//Funcion alumno
void Alumno::mostrarAlumno() {
	cout << "Codigo alumno: " << codigoAlumno << endl;
	cout << "Nota final: " << notaFinal << endl;
}

//Funcion empleado
void Empleado::mostrarEmpleado(){
	cout << "Nombre de su empresa:" << nombreEmpresa << endl;
	cout << "Salario: " << salario <<endl;
}

void Universitario::mostrarUniversitario() {
	cout << "Su carrera es: " << carrera << endl;
	cout << "Esta en el curso: " << curso << endl;
}

int main() {
	
	Persona p1("Fernando", 21);
	Alumno a1("Pedro", 23, "123124145j", 13.2);
	p1.mostrarPersona();
	a1.mostrarAlumno();
	cout << endl;
	cout << "Muestro universitario" << endl << endl;
	Universitario uni1("Fernando", 21, "123709", 10.55, "Loyola", 1);
	uni1.mostrarPersona();
	uni1.mostrarAlumno();
	uni1.mostrarUniversitario();
	
	
	return 0;
	
}