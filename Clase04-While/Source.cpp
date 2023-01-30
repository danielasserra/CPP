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

	//variable actividad 5, ejercicio 2
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



	//Actividad 6
	//Una planta que fabrica perfiles de hierro posee un lote de n piezas.
	//Confeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar y luego ingrese la longitud de cada perfil; sabiendo que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 son aptas.Imprimir por pantalla la cantidad de piezas aptas que hay en el lote.

	//Variables
	int n; //cant de piezas
	float longitud; //longitud de las piezas
	int piezaApta = 0;

	c = 1; //contador

	cout
		<< "Ingrese la cantidad de piezas a procesar: ";
	cin
		>> n;

	while (c < n)
	{
		cout
			<< "Inserte longitud de la pieza: ";
		cin
			>> longitud;

		if (longitud > 1.2 && longitud < 1.3)
		{
			piezaApta += 1;
		}

		c += 1;

	}

	cout
		<< "Cantidad de piezas aptas: ";
	cout
		<< piezaApta;

	

	//Ejercicios propuestos
	// 
	//Ejercicio 1
	//Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores

	//Variables
	int nota;
	int mayor = 0;
	int menor= 0;
	c = 0; //contador

	while (c < 10)
	{
		cout
			<< "Ingrese la nota del alumno: ";
		cin
			>> nota;

		if (nota >= 7)
		{
			mayor += 1;
		}
		else
		{
			menor += 1;
		}
		
		c += 1;
	}

	cout
		<< mayor;
	cout
		<< " alumnos tienen nota mayor o igual a 7.";
	cout
		<< "\n";
	cout
		<< menor;
	cout
		<< " alumnos tienen nota menor a 7.";
		


		*/

		//Ejercicio 2
			//Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas.

	//variables
	int personas; //cantidad de personas ingresada
	float altura; //altura de cada persona
	int cont = 1; // contador
	float sumaAlt = 0; 
	float promAlt;

	cout
		<< "Ingrese la cantidad de personas a evaluar: ";
	cin
		>> personas;

	while (personas >= cont)
	{
		cout
			<< "Ingrese la altura de la persona: ";
		cin
			>> altura;

		sumaAlt += altura;

		cont += 1;
	}

	promAlt = sumaAlt / personas;

	cout
		<< "La altura promedio de las personas es de ";
	cout
		<< promAlt;


	return 0;


	
}