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

		

	//Ejercicio 3
	//En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300.Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.

	int empleados; //cant de empleados, ingresado por usuario
	int sueldo; //ingresado por usuario
	int mayor = 0; //indica los que cobran más de 300
	int menor = 0; //indica los que cobran menos de 300.
	int gasto = 0; //importe que gasta la empresa en sueldos
	int cont = 1; //contador

	cout
		<< "Ingrese la cantidad de empleados de la empresa: ";
	cin
		>> empleados;

	while (cont <= empleados)
	{
		cout
			<< "Ingrese el salario del empleado: ";
		cin
			>> sueldo;

		//acumulador 
		//suma de sueldos = gasto de la empresa en sueldos
		gasto += sueldo;

		//condicional para dirimir cuántos empleados cobran más de 300 y cuántos cobran menos
		if (sueldo < 300)
		{
			menor += 1;
		}
		else
		{
			mayor += 1;
		}

		cont += 1;
		
	}

	cout
		<< menor;
	cout
		<< " empleados cobran menos de 300.";
	cout
		<< "\n";
	cout
		<< mayor;
	cout
		<< " empleados cobran mas de 300.";
	cout
		<< "\n";
	cout
		<< "El importe que gasta la empresa en salarios al personal es de: ";
	cout
		<< gasto;


		

	//Ejercicio 4
	//Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)

	int cont = 0; //contador
	int num = 0; //acumulador
	int aumento = 11;

	while (cont < 25)
	{
		num = num + aumento;

		cout
			<< num;
		cout
			<< " - ";
		
		cont += 1;
	}

	

	//Ejercicio 5
	//Mostrar los múltiplos de 8 hasta el valor 500. Debe aparecer en pantalla 8 - 16 - 24, etc.

	int valor = 0; // acumulador
	int multiplo = 8; // aumenta 8 al numero anterior
	

	while (valor < 500)
	{
		valor += multiplo;

		cout
			<< valor;
		cout
			<< " - ";
	}

	

	//Ejercicio 6
	//Realizar un programa que permita cargar dos listas de 15 valores cada una. Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor (mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
	//Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.

	int valor; // numeros ingresados por el usuario
	int cont = 0; //contador
	int sumaLUno = 0; // acumulador de la lista 1
	int sumaLDos = 0; //acumulador de la lista 2

	cout
		<< "Lista 1";
	cout
		<< "\n";

	while (cont < 15)
	{
		cout
			<< "Ingrese un valor: ";
		cin
			>> valor;

		sumaLUno += valor;

		cont += 1;

	}

	cout
		<< "Lista 2";
	cout
		<< "\n";
	
	//reiniciar el contador
	cont = 0;

	while (cont < 15)
	{
		cout
			<< "Ingrese un valor: ";
		cin
			>> valor;
		
		sumaLDos += valor;

		cont += 1;

	}

	if (sumaLUno < sumaLDos)
	{
		cout
			<< "Lista 2 Mayor";
	}
	else 
	{
		if (sumaLUno == sumaLDos)
		{
			cout
				<< "Listas iguales";
		}
		else
		{
			cout
				<< "Lista 1 mayor";
		}
	}

	*/

	//Ejercicio 7
	//Desarrollar un programa que permita cargar n números enteros y luego nos informe cuántos valores fueron pares y cuántos impares.
	//Emplear el operador “% ” en la condición de la estructura condicional(este operador retorna el resto de la división de dos valores, por ejemplo 11 % 2 retorna un 1) :
	//if (valor % 2 == 0)         //Si el if da verdadero luego es par.

	int num; //numeros a ingresar por el usuario
	int valor; // valores ingresados por el usuario
	int cont = 0; //contador
	int par = 0;
	int impar = 0;

	cout
		<< "¿Cuantos numeros ingresara? ";
	cin
		>> num;

	while (cont < num)
	{
		cout
			<< "Ingrese un valor: ";
		cin
			>> valor;

		if (valor % 2 == 0)
		{
			par += 1;
		}
		else
		{
			impar += 1;
		}

		cont += 1;
	}

	cout
		<< par;
	cout
		<< " numeros ingresados pares";
	cout
		<< "\n";
	cout
		<< impar;
	cout
		<< " numeros ingresados impares";

	return 0;


	
}