
/* Aprendiendo C++ con Quark Academy por Daniela Serra */

/*Actividades sobre condicionales
1. Se ingresa un número multiplicarlo por 10 si es distinto a 0.   (!=)
2. Se ingresan dos números mostrar una advertencia si son iguales.  (== )
3. Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma y diferencia, en caso contrario informar el producto y la división del primero respecto al segundo.
4. Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".
5. Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje indicando si el número tiene uno o dos dígitos.
(Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)
*/

#include<iostream>

using namespace std;

//variables Actividad 1 y 2
int num1, pordiez, num2, num3;

//variables actividad 3
int num4, num5, suma, diferencia, producto, division;

//Variables actividad 4
float nota1, nota2, nota3, promedio;

//Variables actividad 5
int num6;

int main()
{
	
	//Actividad 1
	cout
		<< "Ingrese un numero: ";
	cin
		>> num1;
	
	//si el numero ingresado es distinto a cero
	if (num1 != 0)
	{
		//multiplicarlo por diez
		pordiez = num1 * 10;
		
		//mostrar en pantalla
		cout
			<< "Su numero por diez es ";
		cout
			<< pordiez;
		cout
			<< "\n";
	}
	else
	{
		cout
			<< "El numero ingresado es cero";
		cout
			<< "\n";
	}

	
	//Actividad 2.
	cout
		<< "Ingrese otro numero: ";
	cin
		>> num2;
	cout
		<< "Ingrese un numero mas: ";
	cin
		>> num3;
	cout
		<< "\n";
	
	if (num2 == num3)
	{
		
		cout
			<< "Ingreso dos veces el mismo numero"; 

	}
	else
	{
		
		cout
			<< "Los numeros ingresados son diferentes entre si";
	}

	//Actividad 3
	cout
		<< "Inserte un numero: ";
	cin
		>> num4;
	cout
		<< "Inserte otro numero: ";
	cin
		>> num5;

	if (num4 > num5)
	{
		suma = num4 + num5;
		
		cout
			<< "La suma de sus numeros es: ";
		cout
			<< suma;

		cout
			<< "\n";

		diferencia = num4 - num5;

		cout
			<< "La diferencia entre sus numeros es: ";
		cout
			<< diferencia;
		cout
			<< "\n";

	}
	else
	{
		producto = num4 * num5;

		cout
			<< "El producto de sus numeros es: ";
		cout
			<< producto;

		cout
			<< "\n";

		cout
			<< "La division de sus numeros es: ";
		cout
			<< division;
		cout
			<< "\n";
	}
	

	//Actividad 4.
	cout
		<< "Ingrese una calificacion: ";
	cin
		>> nota1;
	cout
		<< "Ingrese otra calificacion: ";
	cin
		>> nota2;
	cout
		<< "Ingrese una calificacion mas: ";
	cin
		>> nota3;

	promedio = (nota1 + nota2 + nota3) / 4;

	if (promedio >= 7 && promedio <=10)
	{
		cout
			<< "Promocionado"; 
		cout
			<< "\n";
	}
	else if (promedio <= 6 && promedio >= 1)
	{
		cout
			<< "Debe recuperar contenidos para aprobar";
		cout
			<< "\n";
	}
	else
	{
		cout
			<< "Calificacion invalida";
		cout
			<< "\n";
	}
	

	cout
	<< "Ingrese un numero: ";
	cin
		>> num6;
	if (num6 > 0 && num6 < 10)
	{
		cout
			<< "El numero ingresado tiene una cifra";
		cout
			<< "\n";
	}
	else if (num6 >9 && num6<100)
	{
		cout
			<< "El numero ingresado tiene dos cifras";
		cout
			<< "\n";
	}
	else if (num6 > 99)
	{
		cout
			<< "El numero ingresado tiene mas de dos cifras";
		cout
			<< "\n";
	}
	
	return 0;
}