#include<iostream>

using namespace std;

int num1, num2, suma, producto;

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
	producto = num1 * num2;

	cout
		<< "La suma de sus numeros es: ";
	cout
		<< suma;
	cout
		<< "\n";
	cout
		<< "El producto de sus numeros es: ";
	cout
		<< producto;
	return 0;
}