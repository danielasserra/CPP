#include<iostream>

using namespace std;

int lado;
int perimetro;

int main()
{
	cout
		<< "Ingrese el tama�o del lado del cuadrado: ";
	cin
		>> lado;
	perimetro = lado * 4;
	cout
		<< "El per�metro del cuadrado es: ";
	cout
		<< perimetro;
	return 0;
}
