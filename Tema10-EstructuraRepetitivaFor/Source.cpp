/*Actividades curso C++ Quark Academy
* Estructura Repetitiva For
* Por Daniela Serra*/

#include<iostream>

using namespace std;

int main()
{
	/*
	//Problema 1
	//Realizar un programa que imprima en pantalla los n�meros del 1 al 100.

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
	//Escribir un programa que lea 10 notas de alumnos y nos informe cu�ntos tienen notas mayores o iguales a 7 y cu�ntos menores.

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
	//Escribir un programa que lea 10 n�meros enteros y luego muestre cu�ntos valores ingresados fueron m�ltiplos de 3 y cu�ntos de 5. Debemos tener en cuenta que hay n�meros que son m�ltiplos de 3 y de 5 a la vez.

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
	//Escribir un programa que lea n n�meros enteros y calcule la cantidad de valores mayores o iguales a 1000.

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
	//Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de la base y la altura de un tri�ngulo. El programa deber� informar:
	//a) De cada tri�ngulo la medida de su base, su altura y su superficie.
	//b) La cantidad de tri�ngulos cuya superficie es mayor a 12.

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
		<< " tri�ngulos tienen superficie mayor a 12";

	

	//Actividad 2
	//Desarrollar un programa que solicite la carga de 10 n�meros e imprima la suma de los �ltimos 5 valores ingresados.

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
		

	//Actividad 3
	//Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)

	int f;
	int x=0;

	for (f = 0; f < 10; f++)
	{
		x = x + 5;

		cout
			<< x;
		cout
			<< ", ";
	}
	
	
	//Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre la tabla de multiplicar del mismo (los primeros 12 t�rminos)
	//Ejemplo: Si ingreso 3 deber� aparecer en pantalla los valores 3, 6, 9, hasta el 36.

	int x;
	int f; //contador

	cout
		<< "ingrese un numero del 1 al 10: ";
	cin
		>> x;

	for (f = x; f <= x * 12; f += x)
	{
		cout
			<< f;
		cout
			<< ", ";
	}

	
	//Actividad 5
	//Realizar un programa que lea los lados de n tri�ngulos, e informar:
	//a) De cada uno de ellos, qu� tipo de tri�ngulo es : equil�tero(tres lados iguales), is�sceles(dos lados iguales), o escaleno(ning�n lado igual)
	//b) Cantidad de tri�ngulos de cada tipo.
	//c) Tipo de tri�ngulo que posee menor cantidad.
	
	int triangulos; // ingreso por usuario
	int ladoUno = 0, ladoDos = 0, ladoTres = 0; //tama�o lados
	int equilatero = 0; 
	int isosceles = 0; 
	int escaleno = 0;
	int f;

	cout
		<< "Ingresar la cantidad de triangulos: ";
	cin
		>> triangulos;

	for (f = 0; f < triangulos; f++)
	{
		cout
			<< "Ingresar tres medidas, correspondientes a los lados del triangulo: ";
		cout
			<< "\n";
		cin
			>> ladoUno;
		cin
			>> ladoDos;
		cin
			>> ladoTres;
		if (ladoUno == ladoDos && ladoUno == ladoTres)
		{
			equilatero += 1;

			cout
				<< "Es un triangulo equilatero";
			cout
				<< "\n";
		}
		else
		{
			if (ladoUno == ladoDos || ladoUno == ladoTres || ladoDos == ladoTres)
			{
				isosceles += 1;

				cout
					<< "Es un triangulo Isosceles";
				cout
					<< "\n";
			}
			else
			{
				escaleno += 1;

				cout
					<< "Es un triangulo Escaleno";
				cout
					<< "\n";
			}
		}
		
	}
	cout
		<< "Cantidad de triangulos equilateros: ";
	cout
		<< equilatero;
	cout
		<< "\n";
	cout
		<< "Cantidad de triangulos isosceles: ";
	cout
		<< isosceles;
	cout
		<< "\n";
	cout
		<< "Cantidad de triangulos escalenos: ";
	cout
		<< escaleno;
	cout
		<< "\n";

	if (equilatero < isosceles && equilatero < escaleno)
	{
		cout
			<< "Hay menor cantidad de triangulos equilateros";
	}
	else
	{
		if (isosceles < equilatero && isosceles < escaleno)
		{
			cout
				<< "Hay menor cantidad de triangulos isosceles";
		}
		else
		{
			cout
				<< "Hay menor cantidad de triangulos escalenos";
		}
	}
	
	//Actividad 6
	//Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
	//Informar cu�ntos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante.Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.

	int puntos; //cantidad de puntos a procesar
	int x, y;
	int primerCuad = 0, segundoCuad = 0, tercerCuad = 0, cuartoCuad = 0;
	int f;

	cout
		<< "Ingrese la cantidad de puntos a procesar: ";
	cin
		>> puntos;

	for (f = 0; f < puntos; f++)
	{
		cout
			<< "Ingrese coordenada x: ";
		cin
			>> x;
		cout
			<< "Ingrese coordenada y: ";
		cin
			>> y;
		cout
			<< "\n";

		if (x > 0 && y > 0)
		{
			primerCuad += 1;
		}
		else
		{
			if (x < 0 && y > 0)
			{
				segundoCuad += 1;
			}
			else
			{
				if (x < 0 && y < 0)
				{
					tercerCuad += 0;
				}
				else
				{
					cuartoCuad += 1;
				}
			}
		}

	}
	cout
		<< "En el primer cuadrante se han ingresado ";
	cout
		<< primerCuad;
	cout
		<< "puntos";
	cout
		<< "\n";
	cout
		<< "En el segundo cuadrante se han ingresado ";
	cout
		<< segundoCuad;
	cout
		<< "puntos";
	cout
		<< "\n";
	cout
		<< "En el tercer cuadrante se han ingresado ";
	cout
		<< tercerCuad;
	cout
		<< "puntos";
	cout
		<< "\n";
	cout
		<< "En el cuarto cuadrante se han ingresado ";
	cout
		<< cuartoCuad;
	cout
		<< "puntos";
	cout
		<< "\n";
		


	//Actividad7
	//Se realiza la carga de 10 valores enteros por teclado.Se desea conocer :
	//a) La cantidad de valores ingresados negativos.
	//b) La cantidad de valores ingresados positivos.
	//c) La cantidad de m�ltiplos de 15.
	//d) El valor acumulado de los n�meros ingresados que son pares.
	int f;
	int valor;
	int neg=0;
	int pos=0;
	int quince=0;
	int par = 0;

	for (f = 0; f < 10; f++)
	{
		cout
			<< "Ingrese un numero entero: ";
		cin
			>> valor;

		if (valor < 0)
		{
			neg++;
		}
		else
		{
			if (valor > 0)
			{
				pos++;
			}
		}

		if (valor % 15 == 0)
		{
			quince++;
		}
		if (valor % 2 == 0)
		{
			par++;
		}
	}

	cout
		<< "Valores negativos ingresados: ";
	cout
		<< neg;
	cout
		<< "\n";
	cout
		<< "Valores positivos ingresados: ";
	cout
		<< pos;
	cout
		<< "\n";
	cout
		<< "Cantidad de multiplos de quince: ";
	cout
		<< quince;
	cout
		<< "\n";
	cout
		<< "cantidad de multiplos de dos: ";
	cout
		<< par;

	*/
	/*Actividad 8
	Se cuenta con la siguiente informaci�n:
Las edades de 5 estudiantes del turno ma�ana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.
a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor.*/	

	int f;
	int tm;
	int sumaTm=0;
	int promedioTm;
	int tt;
	int sumaTt=0;
	int promedioTt;
	int tn;
	int sumaTn=0;
	int promedioTn;

	for (f = 1; f <= 5; f++)
	{
		cout
			<< "Ingrese edad de estudiante TM: ";
		cin
			>> tm;

		sumaTm += tm;

	}
	for (f = 1; f <= 6; f++)
	{
		cout
			<< "Ingrese edad de estudiante TT: ";
		cin
			>> tt;

		sumaTt += tt;
	}

	for (f = 1; f <= 11; f++)
	{
		cout
			<< "Ingrese edad de estudiante TN: ";
		cin
			>> tn;

		sumaTn++;
	}

	promedioTm = sumaTm / 5;
	cout
		<< "La edad promedio de los alumnos del TM es de: ";
	cout
		<< promedioTm;
	cout
		<< "\n";

	promedioTt = sumaTt / 6;
	cout
		<< "La edad promedio de los alumnos del TT es de: ";
	cout
		<< promedioTt;
	cout
		<< "\n";

	promedioTn = sumaTn / 11;
	cout
		<< "La edad promedio de los alumnos del TN es de: ";
	cout
		<< promedioTn;
	cout
		<< "\n";

	if (promedioTm > promedioTt && promedioTm > promedioTn)
	{
		cout
			<< "El TM tiene un promedio de edades mayor";
	}
	else
	{
		if (promedioTt > promedioTn)
		{
			cout
				<< "El TT tiene un promedio de edades mayor";
		}
		else
		{
			cout
				<< "El TN tiene un promedio de edades mayor";
		}
	}


	return 0;
}