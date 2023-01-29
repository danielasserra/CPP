/*Actividades
1. Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.
2. Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo, negativo o nulo (es decir cero)
3. Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y muestre un mensaje indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor.
4. Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información: cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contestó correctamente. Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo según el porcentaje de respuestas correctas que ha obtenido, y sabiendo que:
	Nivel máximo:	Porcentaje>=90%.
	Nivel medio:	Porcentaje>=75% y <90%.
	Nivel regular:	Porcentaje>=50% y <75%.
	Fuera de nivel:	Porcentaje<50%.
*/

#include<iostream>

using namespace std;

//Variables actividad 1
int num1, num2, num3;

//variables actividad 2
int num4;

//variables actividad 3
int numEntero;

//variables actividad 4
int numPreguntas, numCorrectas, porcentaje;

int main()
{
	/*
	//Actividad 1
	cout
		<< "Ingrese un valor: ";
	cin
		>> num1;
	cout
		<< "Ingrese otro valor: ";
	cin
		>> num2;
	cout
		<< "Ingrese un tercer valor: ";
	cin
		>> num3;

	if (num1 > num2 && num1 > num3)
	{
		cout
			<< "El numero mayor es: ";
		cout
			<< num1;
		cout
			<< "\n";
	}
	else if (num2 > num1 && num2 > num3)
	{
		cout
			<< "El numero mayor es: ";
		cout
			<< num2;
		cout
			<< "\n";
	}
	else if (num3 > num2 && num3 > num1)
	{
		cout
			<< "El numero mayor es: ";
		cout
			<< num3;
		cout
			<< "\n";
	}


	cout
		<< "Ingrese un numero: ";
	cin
		>> num4;

	if (num4 > 0)
	{
		cout
			<< "El numero ingresado es positivo";
		cout
			<< "\n";
	}
	else if (num4 == 0)
	{
		cout
			<< "El numero ingresado es cero";
		cout
			<< "\n";

	}
	else
	{
		cout
			<< "El numero ingresado es negativo";
		cout
			<< "\n";
	}


	cout
		<< "Ingrese un numero positivo hasta tres cifras: ";
	cin
		>> numEntero;

	if (numEntero >= 0 && numEntero <= 9)
	{
		cout
			<< "El numero ingresado es de una cifra.";
	}
	else if (numEntero >= 10 && numEntero <= 99)
	{
		cout
			<< "El numero ingresado es de dos cifras";
	}
	else if (numEntero >= 100 && numEntero <= 999)
	{
		cout
			<< "El numero ingresado es de tres cifras";
	}
	else
	{
		cout
			<< "ERROR en el ingreso de datos.";
	}

	*/
	cout
		<< "Ingrese la cantidad de preguntas del examen: ";
	cin
		>> numPreguntas;
	cout
		<< "Ingrese la cantidad de respuestas correctas: ";
	cin
		>> numCorrectas;

	porcentaje = numCorrectas * 100 / numPreguntas;

	if (porcentaje >= 90)
	{
		cout
			<< "Nivel máximo";
	}
	else
	{
		if (porcentaje >= 75) 
		{
			cout << "Nivel Medio";		
		}
		else {
			if (porcentaje >= 50)
				{
					cout << "Nivel Regular";
				}
			else
			{
				cout << "Fuera de nivel";
			}
		}
	}


	return 0;
}