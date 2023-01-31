/* 
Tema 12. Cadena de Caracteres Mediante Vectores (String)
Curso C ++ 
Quark Academy
Por Daniela Serra
*/

#include<iostream>

using namespace std;

int main()
{
	/*
	//Problema 1
	//Confeccionar un programa que defina dos vectores de caracteres con los nombres de meses de "enero" y "febrero". Mostrar luego por pantalla los dos vectores
	
	char mesUno [6] = "enero";
	char mesDos [8] = "febrero";

	cout
		<< mesUno;
	cout
		<< "\n";
	cout
		<< mesDos;
	
	//Problema 2:
	//Confeccionar un programa que defina una cadena de caracteres para almacenar el nombre y apellido de una persona.La carga del dato hacerla por teclado.
	
	char identidad[40];

	cout
		<< "Ingrese su nombre y apellido: ";
	cin.getline(identidad, 40);
	cout
		<< "El nombre ingresado es: ";
	cout
		<< identidad;
		
		*/

	//Problema 3:
	//Confeccionar un programa que permita ingresar dos cadenas de caracteres por teclado y luego mostrar un mensaje indicando si : "son iguales", "la primer cadena ingresada es mayor alfabéticamente" o "la segunda cadena ingresada es mayor alfabéticamente".

	char cad1[40];
	char cad2[40];

	cout
		<< "Ingrese una cadena: ";
	cin.getline(cad1, 40);
	cout
		<< "Ingrese otra cadena: ";
	cin.getline(cad2, 40);

	if (strcmp(cad1, cad2) == 0)
	{
		cout
			<<"Las cadenas son iguales";
	}
	else
	{
		if (strcmp(cad1, cad2) > 0)
		{
			cout
				<<"La primer cadena ingresada es mayor alfabeticamente";
		}
		else
		{
			cout
				<< "La segunda cadena ingresada es mayor alfabeticamente";
		}
	}

	








	return 0;


}

