#include<iostream>

using namespace std;

int lado;
int perimetro;

int main()
{
	cout
		<< "Ingrese el tamaño del lado del cuadrado: ";
	cin
		>> lado;
	perimetro = lado * 4;
	cout
		<< "El perímetro del cuadrado es: ";
	cout
		<< perimetro;
	return 0;
}
