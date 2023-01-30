/*Actividades del Curso C++ - Quark Academy
Daniela Serra*/

#include<iostream>

using namespace std;

int main()
{
	//variables acatividades 1, 2, 3, 5
	int x;

	//Variable Contador
	int c;

	//variable actividad 4
	int valPos;

	//variable actividad 5
	int suma, promedio;

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

	

	//Actividad 4
	//Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor ingresado de uno en uno.

	cout
		<< "Ingrese un valor positivo: ";
	cin
		>> valPos;

	c = 1;

	while (valPos >= c)
	{
		cout
			<< c;
		cout
			<< " - ";

		c += 1;
	}
	*/

	//Actividad 5
	//Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio.

	suma = 0;
	c = 1;

	while (c <= 10)
	{
		cout
			<< "Escriba un valor: ";
		cin
			>> x;

		suma += x;
		c += 1;
	}

	promedio = suma / 10;

	cout
		<< "La suma de sus valores es: ";
	cout
		<< suma;
	cout
		<< "\n";
	cout
		<< "El promedio de sus valores es: ";
	cout
		<< promedio;

		

	return 0;
	
}