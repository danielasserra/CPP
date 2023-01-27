#include<iostream>

using namespace std;

int num1, num2, num3, num4, suma, producto;

int main()
{
	cout
		<< "Ingrese un valor: ";
	cin
		>> num1;
	cout
		<< "Ingrese otro valor: ";
	cin
		>> num2;
	
	suma = num1 + num2;
	
	cout
		<< "La suma de sus numeros es: ";
	cout
		<< suma;
	cout
		<< "\n";

	cout
		<< "Ingrese un nuevo valor: ";
	cin
		>> num3;

	cout
		<< "Ingrese un valor mas: ";
	cin
		>> num4;

	producto = num3 * num4;

	cout
		<< "El producto de sus numeros es: " ;
	cout
		<< producto;
	return 0;
}