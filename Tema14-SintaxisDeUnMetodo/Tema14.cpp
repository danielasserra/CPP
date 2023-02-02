/*
Tema 14 - Sintaxis de un método
Curso C++ Quark Academy
por Daniela Serra
*/

#include<iostream>

using namespace std;
/*
//Problema 1:
//Confeccionar una clase que permita ingresar valores enteros por teclado y nos muestre la tabla de multiplicar de dicho valor.Finalizar el programa al ingresar el - 1.

class Multiplicar
{
private:
	void calcular(int v);
public:
	void cargarValor();
};

void Multiplicar::calcular(int v)
{
	int f;
	for (f = v; f = v * 10; f += v)
	{
		cout << f;
		cout << ", ";
	}
	cout << "\n";
};

void Multiplicar::cargarValor()
{
	int valor;
	do
	{
		cout << "Ingrese un valor (finalizar -1)";
		cin >> valor;

		if (valor != -1)
		{
			calcular(valor);
		}
	} while (valor != -1);
};

int main()
{
	Multiplicar multiplicar1;
	multiplicar1.cargarValor();
	return 0;
}


//Problema 2:
//Confeccionar una clase que permita ingresar tres valores por teclado.Luego mostrar el mayor y el menor.Retornar dichos valores mediante el return.

class Valores
{
private:
	int calcularMayor(int num1, int num2, int num3);
	int calcularMenor(int num1, int num2, int num3);
public:
	void cargarValores();
};

int Valores::calcularMayor(int num1, int num2, int num3)
{
	int m;

	if (num1 < num2 && num1 < num3)
	{
		m = num1;
	}
	else
	{
		if (num2 > num3)
		{
			m = num2;
		}
		else
		{
			m = num3;
		}
	} 
	return m;
};

int Valores::calcularMenor(int num1, int num2, int num3)
{
	int m;

	if (num1 < num2 && num1 < num3)
	{
		m = num1;
	}
	else
	{
		if (num2 < num3)
		{
			m = num2;
		}
		else
		{
			m = num3;
		}
	}
	return m;
};

void Valores::cargarValores()
{
	int v1, v2, v3;

	cout << "Ingrese el primer valor: ";
	cin >> v1;
	cout << "\n";

	cout << "Ingrese el segundo valor: ";
	cin >> v2;
	cout << "\n";

	cout << "Ingrese el tercer valor: ";
	cin >> v3;
	cout << "\n";

	int mayor, menor;

	mayor = calcularMayor(v1, v2, v3);
	menor = calcularMenor(v1, v2, v3);

	cout << "El valor mayor es: ";
	cin >> mayor;
	cout << "\n";

	cout << "El valor menor es: ";
	cin >> menor;
	cout << "\n";

	cin.get();
	cin.get();
}

int main()
{
	Valores valores1;
	valores1.cargarValores();
	return 0;
}


///////////////
//Actividades//
//////////////

//1. Plantear una clase que permita cargar un valor entero por teclado. Definir un método que solicite la carga del entero y llame a otro método al que le pasamos el valor ingresado y proceda a mostrar los valores enteros desde el 1 hasta el valor que llega como parámetro (es decir el ingresado por teclado)

class Enteros
{
private:
	int valoresEnteros(int valor);
public:
	void cargarValor();
};

int Enteros::valoresEnteros(int valor)
{
	int f;

	for (f = 1; f <= valor; f++)
	{
		cout << f;
		cout << ", ";
	}

	return f;
};

void Enteros::cargarValor()
{
	int valor;

	cout << "Ingrese un valor: ";
	cin >> valor;

	valoresEnteros(valor);
}

int main()
{
	Enteros enteros1;
	enteros1.cargarValor();

	return 0;
}
*/

//2. Desarrollar una clase con dos métodos, uno para la carga de dos enteros. Definir un método privado que le enviemos los valores ingresados por teclado y nos retorne el mayor de ellos.

class Valores
{
private:
	int mayor(int v1, int v2);
public:
	void ingresarValores();
};

int Valores::mayor(int v1, int v2)
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

void Valores::ingresarValores()
{
	int val1, val2;

	cout << "Ingrese un valor: ";
	cin >> val1;
	cout << "\n";
	cout << "Ingrese otro valor: ";
	cin >> val2;
	cout << "\n";

	int elMayor;

	elMayor = mayor(val1, val2);

	cout << "El mayor es: ";
	cout << elMayor;
};

int main()
{
	Valores valores1;
	valores1.ingresarValores();
	return 0;
}