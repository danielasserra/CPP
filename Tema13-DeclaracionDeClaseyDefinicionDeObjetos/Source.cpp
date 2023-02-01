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



//Problema 4
//Desarrollar una clase que represente un punto en el plano y tenga los siguientes métodos: cargar los valores de x e y, imprimir en que cuadrante se encuentra dicho punto (concepto matemático, primer cuadrante si x e y son positivas, si x<0 e y>0 segundo cuadrante, etc.)

class Punto {
private:
	int x;
	int y;
public:
	void inicializar();
	void cuadrante();
};

void Punto::inicializar()
{
	cout << "Ingrese el valor del eje x: ";
	cin >> x;
	cout << "\n";
	cout << "Ingrese el valor del eje y; ";
	cin >> y;
	cout << "\n";
}

void Punto::cuadrante()
{
	if (x > 0 && y > 0)
	{
		cout << "El punto se encuentra en el primer cuadrante";
	}
	else
	{
		if (x < 0 && y > 0)
		{
			cout << "El punto se encuentra en el segundo cuadrante";
		}
		else
		{
			if (x < 0 && y < 0)
			{
				cout << "El punto se encuentra en el tercer cuadrante";
			}
			else
			{
				cout << "El punto se encuentra en el cuarto cuadrante";
			}
		}
	}
	cin.get();
	cin.get();
};

int main()
{
	Punto punto1;
	punto1.inicializar();
	punto1.cuadrante();
	return 0;
}


//Problema 5
//Desarrollar una clase que represente un Cuadrado y tenga los siguientes métodos : cargar el valor de su lado, imprimir su perímetro y su superficie.

class Cuadrado {
private:
	int lado;

public:
	void inicializar();
	void imprimirPerimetro();
	void imprimirSuperficie();
};

void Cuadrado::inicializar()
{
	cout << "Ingrese el lado del cuadrado: ";
	cin >> lado;
	cout << "\n";
};

void Cuadrado::imprimirPerimetro()
{
	int perimetro;
	perimetro = lado * 4;

	cout << "El perimetro del cuadrado es: ";
	cout << perimetro;
	cout << "\n";

};

void Cuadrado::imprimirSuperficie()
{
	int superficie;
	superficie = lado * lado;

	cout << "La superficie del cuadrado es: ";
	cout << superficie;
	cout << "\n";
};

int main()
{
	Cuadrado cuadrado1;
	cuadrado1.inicializar();
	cuadrado1.imprimirSuperficie();
	cuadrado1.imprimirPerimetro();

	return 0;
}



///////////////
//ACTIVIDADES//
///////////////

//1. Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. Confeccionar los métodos para la carga, otro para imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000).

class Empleado
{
private:
	char nombre[50];
	int sueldo;
public:
	void inicializar();
	void imprimirDatos();
	void pagaImpuestos();
};

void Empleado::inicializar()
{
	cout
		<< "Ingrese el nombre del empleado: ";
	cin.getline (nombre,40);
	cout
		<< "\n";
	cout
		<< "Ingrese el salario del empleado: ";
	cin >> sueldo;
};

void Empleado::imprimirDatos()
{
	cout
		<< "El nombre del empleado es: ";
	cout
		<< nombre;
	cout << "\n";
	cout << "El sueldo del empleado es: ";
	cout << sueldo;
	cout << "\n";
};

void Empleado::pagaImpuestos()
{
	if (sueldo > 3000)
	{
		cout << "Paga impuestos";

	}
	else
	{
		cout << "No paga impuestos";
	}
	cin.get();
	cin.get();
};

int main()
{
	Empleado empleado1;
	empleado1.inicializar();
	empleado1.imprimirDatos();
	empleado1.pagaImpuestos();

	return 0;
}

*/

//2. Implementar la clase operaciones. Se deben cargar dos valores enteros, calcular su suma, resta, multiplicación y división, cada una en un método, imprimir dichos resultados.

class Operaciones
{
private:
	float x;
	float y;
public:
	void inicializar();
	void suma();
	void resta();
	void multiplicacion();
	void division();
};

void Operaciones::inicializar()
{
	cout << "Ingrese un valor: ";
	cin >> x;
	cout << "Ingrese un valor: ";
	cin >> y;
};

void Operaciones::suma()
{
	float adicion;

	adicion = x + y;

	cout << "La suma de los numeros es: ";
	cout << adicion;
	cout << "\n";
};

void Operaciones::resta()
{
	float sustraccion;
	sustraccion = x - y;

	cout << "La resta de los numeros es: ";
	cout << sustraccion;
	cout << "\n";
};

void Operaciones::multiplicacion()
{
	float mult;
	mult = x * y;

	cout << "La multiplicacion de los numeros es: ";
	cout << mult;
	cout << "\n";
}

void Operaciones::division()
{
	float div;
	div = x / y;

	cout << "La division entre los numeros es: ";
	cout << div;
	cout << "\n";
}

int main()
{
	Operaciones operaciones1;
	operaciones1.inicializar();
	operaciones1.suma();
	operaciones1.resta();
	operaciones1.multiplicacion();
	operaciones1.division();

	return 0;
}