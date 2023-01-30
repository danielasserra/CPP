/*Actividades del Curso C++ - Quark Academy
Daniela Serra*/

#include<iostream>

using namespace std;

int main()
{
	//variables acatividades 1, 2, 3
	int x;

	/*
	//Actividad 1
	//Realizar un programa que imprima en pantalla los números del 1 al 100.
	
	x = 1;

	while (x <= 100)
	{		
		cout
			<< x;
		cout
			<< "\n";
		x = x + 1;
	}
	

	//Actividad 2
	//Imprimir los números del -50 al 0.
	
	x = -50;

	while (x <= 0)
	{
		cout
			<< x;
		cout
			<< ", ";
		x = x + 1;
	}
	*/

	//Actividad 3
	//Imprimir los números del 2 al 100 pero de 2 en 2 (2,4,6,8 ....100).

	x = 2;

	while (x <= 100)
	{
		cout
			<< x;
		cout
			<< " - ";
		x += 2;
	}

	return 0;
}