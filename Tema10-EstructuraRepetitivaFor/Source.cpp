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

		

	//Problema 4
	//Escribir un programa que lea 10 números enteros y luego muestre cuántos valores ingresados fueron múltiplos de 3 y cuántos de 5. Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5 a la vez.

	int f; //contador
	int valor;// valor ingresado por el usuario
	int mulcinco = 0; //multiplos de 5
	int multres = 0; //multiplos de 3
	

	for (f = 1; f <= 10; f++)
	{
		cout
			<< "Ingrese un numero: ";
		cin
			>> valor;

		if (valor % 5 == 0)
		{
			mulcinco += 1;
		}
		if (valor % 3 == 0)
		{
			multres += 2;
		}
	}

	cout
		<< mulcinco;
	cout
		<< " valores son multiplos de cinco.";
	cout
		<< "\n";
	cout
		<< multres;
	cout
		<< " valores son multiplos de tres.";
		


	//Problema 5
	//Escribir un programa que lea n números enteros y calcule la cantidad de valores mayores o iguales a 1000.

	int cantidad; //numeros a cargar por el usuario
	int valor; // valor de los numeros cargados por el usuario
	int f; //contador
	int suma = 0; //acumulador para numeros mayores o iguales a 1000

	cout
		<< "Inserte la cantidad de numeros a cargar: ";
	cin
		>> cantidad;

	for (f = 0; f < cantidad; f++)
	{
		cout
			<< "Inserte el valor del numero: ";
		cin
			>> valor;

		if (valor >= 1000)
		{
			suma += 1;
		}
	}

	cout
		<< "La cantidad de numeros mayores o iguales a 1000 es: ";
	cout
		<< suma;
	

	//ACTIVIDADES

	//Actividad 1. 
	//Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de la base y la altura de un triángulo. El programa deberá informar:
	//a) De cada triángulo la medida de su base, su altura y su superficie.
	//b) La cantidad de triángulos cuya superficie es mayor a 12.

	int f; //contador
	int cantidad; // de triangulos a ingresar por el usuario.
	int base, altura, superficie; //del triangulo
	int supMayor = 0; // cantidad de triangulos con superficie mayor a 12

	cout
		<< "Ingrese la cantidad de triangulos que va a generar: ";
	cin
		>> cantidad;

	for (f = 1; f <= cantidad; f++)
	{
		cout
			<< "Ingrese la medida de la base del triangulo: ";
		cin
			>> base;
		
		cout
			<< "Ingrese la medida de la altura del triangulo: ";
		cin
			>> altura;

		superficie = (base * altura) / 2;

		cout
			<< "La medida de la base del triangulo es: ";
		cout
			<< base;
		cout
			<< "\n";
		cout
			<< "La medida de la altura del triangulo es: ";
		cout
			<< altura;
		cout
			<< "\n";
		cout
			<< "La superficie del triangulo es: ";
		cout
			<< superficie;
		cout
			<< "\n";

		if (superficie > 12)
		{
			supMayor += 1;
		}
	}

	cout
		<< supMayor;
	cout
		<< " triángulos tienen superficie mayor a 12";

	

	//Actividad 2
	//Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados.

	int f; //contador
	int valor; // valores ingresados por el usuario
	int suma = 0; // acumulador de valores de los ultimos 5 numeros

	for (f = 1; f <= 10; f++)
	{
		cout
			<< "Ingrese un valor: ";
		cin
			>> valor;

		if (f > 5)
		{
			suma += valor;
		}
	}
	cout
		<< suma;
		*/


	return 0;
}