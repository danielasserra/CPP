#include<iostream>

using namespace std;

int num1, num2, num3, num4, suma, promedio;

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
	cout
		<< "Ingrese un nuevo valor: ";
	cin
		>> num3;

	cout
		<< "Ingrese un valor mas: ";
	cin
		>> num4;

	suma = num1 + num2 + num3 + num4;

	cout
		<< "La suma de sus numeros es: ";
	cout
		<< suma;
	cout
		<< "\n";



	promedio = suma / 4;

	cout
		<< "El promedio de sus numeros es: ";
	cout
		<< promedio;
	return 0;