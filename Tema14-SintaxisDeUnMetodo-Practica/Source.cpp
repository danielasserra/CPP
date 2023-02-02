/*
Tema 14 - Sintaxis de un Método. Practica.
Curso C++. Quark Academy
Por Daniela Serra 
*/

//Problema 1:
//Confeccionar una clase que permita ingresar valores enteros por teclado y nos muestre la tabla de multiplicar de dicho valor.Finalizar el programa al ingresar el - 1.
/*
#include<iostream>

using namespace std;

class Valores
{
private:
	void mult(int v);
public:
	void ingreseValor();
};

void Valores::mult(int v)
{
	for (int f = v; f <= v * 10; f += v)
	{
		cout << f;
		cout << ", ";
	}
	cout << "\n";
};

void Valores::ingreseValor()
{
	int valor;

	do
	{
		cout << "Ingrese un valor (-1 para finalizar): ";
		cin >> valor;

		if (valor != -1)
		{
			mult(valor);
		}
	} while (valor != -1);
};

int main()
{
	Valores valor1;
	valor1.ingreseValor();
	return 0;
}

//Problema 2:
//Confeccionar una clase que permita ingresar tres valores por teclado.Luego mostrar el mayor y el menor.Retornar dichos valores mediante el return.

#include<iostream>

using namespace std;

class MayorMenor
{
private:
	int mayor(int v1, int v2, int v3);
	int menor(int v1, int v2, int v3);
public:
	void ingreseV();
};

int MayorMenor::mayor(int v1, int v2, int v3)
{
	int m;
	if (v1 > v2 && v1 > v3)
	{
		m = v1;
	}
	else
	{
		if (v2 > v3)
		{
			m = v2;
		}
		else
		{
			m = v3;
		}
	}
	return m;
};

int MayorMenor::menor(int v1, int v2, int v3)
{
	int m;

	if (v1 < v2 && v1 < v3)
	{
		m = v1;
	}
	else
	{
		if (v2 < v3)
		{
			m = v2;
		}
		else
		{
			m = v3;
		}
	}
	
	return m;
};

void MayorMenor::ingreseV()
{
	int val1, val2, val3;
	cout << "Ingrese primer valor: ";
	cin >> val1;
	cout << "\n";
	cout << "Ingrese segundo valor: ";
	cin >> val2;
	cout << "\n";
	cout << "Ingrese tercer valor: ";
	cin >> val3;
	cout << "\n";

	int mayor1, menor1;
	mayor1 = mayor(val1, val2, val3);
	menor1 = menor(val1, val2, val3);

	cout << "El mayor es: ";
	cout << mayor1;
	cout << "\n";
	cout << "El menor es: ";
	cout << menor1;
	cout << "\n";
};

int main()
{
	MayorMenor mayorMenor1;
	mayorMenor1.ingreseV();
	return 0;
}

//Problemas propuestos
//1. Plantear una clase que permita cargar un valor entero por teclado. Definir un método que solicite la carga del entero y llame a otro método al que le pasamos el valor ingresado y proceda a mostrar los valores enteros desde el 1 hasta el valor que llega como parámetro (es decir el ingresado por teclado)

#include<iostream>

using namespace std;

class Valor
{
private:
	void enteros(int v);
public:
	void ingreseV();
};

void Valor::enteros(int v)
{
	for (int f = 1; f <= v; f++)
	{
		cout << f;
		cout << ", ";
	}
};
void Valor::ingreseV()
{
	int val;
	cout << "Ingrese un valor: ";
	cin >> val;

	if (val > 0)
	{
		enteros(val);
	}
};

int main()
{
	Valor valor1;
	valor1.ingreseV();
	return 0;
}
*/
//Desarrollar una clase con dos métodos, uno para la carga de dos enteros. Definir un método privado que le enviemos los valores ingresados por teclado y nos retorne el mayor de ellos.

#include<iostream>

using namespace std;

class Enteros
{
private:
	int mayor(int v1, int v2);
public:
	void ingreseV();
};

int Enteros::mayor(int v1, int v2)
{
	int m;
	if (v1 > v2)
	{
		m = v1;
	}
	else
	{
		m = v2;
	}
	return m;
};

void Enteros::ingreseV()
{
	int val1, val2;
	cout << "Ingrese un valor: ";
	cin >> val1;
	cout << "\n";
	cout << "Ingrese otro valor: ";
	cin >> val2;
	cout << "\n";

	int valM;
	valM = mayor(val1, val2);

	cout << "El valor mayor es: ";
	cout << valM;
};

int main()
{
	Enteros enteros1;
	enteros1.ingreseV();
	return 0;
}