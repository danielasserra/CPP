/*Declaracion de una clase y definicion de objetos
Curso C++ Quark Academy
Por Daniela Serra*/

#include<iostream>

using namespace std;


	//Problema 1
	//Confeccionar una clase que permita cargar el nombre y la edad de una persona. Mostrar los datos cargados. Imprimir un mensaje si es mayor de edad (edad>=18) o no

	//Resolviendo todo en MAIN, como hicimos hasta ahora se resuelve así:

	/*
int main ()
{
	char nombre[40];
	int edad;

	cout
		<< "Ingrese su nombre: ";
	cin
		>> nombre;

	cout
		<< "Ingrese su edad: ";
	cin
		>> edad;

	cout
		<< "Su nombre es ";
	cout
		<< nombre;
	cout
		<< "\n";
	cout
		<< "Su edad es ";
	cout
		<< edad;
	cout
		<< "\n";
	if (edad > 18)
	{
		cout
			<< "Usted es mayor de edad";
	}
	else
	{
		cout
			<< "Usted no es mayor de edad";
	}
	return 0;
}
	

	//Resolviendolo con una CLASE se resuelve así:

	class Persona {
	private:
		char nombre[40];
		int edad;
	public:
		void inicializar();
		void imprimir();
		void esMayorEdad();
	};

	void Persona::inicializar()
	{
		cout << "Ingrese nombre:";
		cin.getline(nombre, 40);
		cout << "Ingrese edad:";
		cin >> edad;
	}

	void Persona::imprimir()
	{
		cout << "Nombre: ";
		cout << nombre;
		cout << "\n";
		cout << "Edad: ";
		cout << edad;
		cout << "\n";
	}

	void Persona::esMayorEdad()
	{
		if (edad >= 18)
		{
			cout << "Es mayor de edad";
		}
		else
		{
			cout << "No es mayor de edad";
		}
		cin.get();
		cin.get();
	}
int main()
{
	Persona persona1;
	persona1.inicializar();
	persona1.imprimir();
	persona1.esMayorEdad();
	
	return 0;
}


//Problema 2:
//Modificar el problema anterior para realizar la carga del nombre y la edad de dos personas.Mostrar los datos cargados.Imprimir un mensaje si son mayor de edad o no.

class Persona
{
private:
	char nombre[50];
	int edad;
public:
	void inicializar();
	void imprimir();
	void esMayorDeEdad();
};

void Persona::inicializar()
{
	cout << "Ingrese nombre: ";
	cin.getline(nombre, 50);
	cout << "Ingrese edad: ";
	cin >> edad;
}

void Persona::imprimir()
{
	cout << "Nombre ";
	cout << nombre;
	cout << "\n";
	cout << "Edad: ";
	cout << edad;
	cout << "\n";

}

void Persona::esMayorDeEdad()
{
	if (edad >= 18)
	{
		cout << "Es mayor de edad";
		cout << "\n";
	}
	else
	{
		cout << "No es mayor de edad";
		cout << "\n";
	}
}

int main()
{
	Persona persona1;
	Persona persona2;

	persona1.inicializar();
	cin.get();
	persona2.inicializar();

	persona1.imprimir();
	persona1.esMayorDeEdad();

	persona2.imprimir();
	persona2.esMayorDeEdad();
	
	return 0;
}
*/

//Problema 3:
//Desarrollar un programa que cargue los lados de un triángulo e implemente los siguientes métodos : inicializar los atributos, imprimir el valor del lado mayor y otro método que muestre si es equilátero o no.

class Triangulo
{
private:
	int ladoUno;
	int ladoDos;
	int ladoTres;
public:
	void inicializar();
	void LadoMayor();
	void esEquilatero();

};

void Triangulo::inicializar()
{
	cout << "Ingrese el primer lado del triangulo: ";
	cin >> ladoUno;
	cout << "Ingrese el segundo lado del triangulo: ";
	cin >> ladoDos;
	cout << "Ingrese tercer lado del triangulo: ";
	cin >> ladoTres;
};

void Triangulo::LadoMayor()
{
	cout << "Lado Mayor: ";

	if (ladoUno > ladoDos && ladoUno > ladoTres)
	{
		cout << ladoUno;
	}
	else
	{
		if (ladoDos > ladoUno && ladoDos > ladoTres)
		{
			cout << ladoDos;
		}
		else
		{
			cout << ladoTres;
		}
	}
	cout << "\n";
}

void Triangulo::esEquilatero()
{
	if (ladoUno == ladoDos && ladoDos == ladoTres)
	{
		cout << "Es un triangulo equilatero";
	}
	else
	{
		cout << "No es un triangulo equlatero";
	}
	cin.get();
	cin.get();
}

int main()
{
	Triangulo triangulo1;
	triangulo1.inicializar();
	triangulo1.LadoMayor();
	triangulo1.esEquilatero();

	return 0;

}