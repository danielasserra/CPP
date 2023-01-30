/*Actividades curso C++ Quark Academy
* Estructura Repetitiva For
* Por Daniela Serra*/

#include<iostream>

using namespace std;

int main()
{
	/*
	//Problema 1
	//Realizar un programa que imprima en pantalla los números del 1 al 100.

	//variables
	int f; //contador
	
	for (f = 1; f <= 100; f++)
	{
		cout
			<< f;
		cout
			<< " - ";
	}

	

	//Problema 2
	//Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio. Este problema ya lo desarrollamos, lo resolveremos empleando la estructura for.

	int f;
	int valor;
	int suma = 0;
	int promedio;

	for (f = 1; f <= 10; f++)
	{
		cout
			<< "Ingrese un valor: ";
		cin
			>> valor;

		suma += valor;

	}

	cout
		<<"La suma de los valores ingresados es: ";
	cout
		<< suma;
	cout
		<<"\n"

	promedio = suma / 10;

	cout
		<< "El promedio de los numeros ingresados es: ";
	cout
		<< promedio;

	*/

	// Problema 3
	//Escribir un programa que lea 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.

	int f;
	int nota;
	int mayor=0;
	int menor=0;


	for (f = 1; f <= 10; f++)
	{
		cout
			<< "Ingrese una nota: ";
		cin
			>> nota;

		if (nota < 7)
		{
			menor += 1;
		}
		else
		{
			mayor += 1;
		}

	}

	cout
		<< menor;
	cout
		<< " alumnos obtuvieron nota menor a 7.";
	cout
		<< "\n";
	cout
		<< mayor;
	cout
		<< " alumnos obtuvieron nota igual o mayor a 7.";




	return 0;
}