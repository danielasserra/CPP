#include<iostream>

using namespace std;

float precio;
int cantidad;
int abona;

int main()
{
	cout
		<< "Ingrese el precio del producto que desea llevar: ";
	cin
		>> precio;

	cout
		<< "Ingrese la cantidad de productos que lleva: ";
	cin
		>> cantidad;

	abona = precio * cantidad;

	cout
		<< "Ud. debe abonar: ";
	cout
		<< abona;

	return 0;
}