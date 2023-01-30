/* 
Actividades:
1. Confeccionar un programa que lea por teclado tres números distintos y nos muestre el mayor.
2. Se carga una fecha (día, mes y año) por teclado. Mostrar un mensaje si corresponde al primer trimestre del año (enero, febrero o marzo) Cargar por teclado el valor numérico del día, mes y año.
3. Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad.
4. Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo y a este resultado se lo multiplica por el tercero.
5. Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10, imprimir en pantalla la leyenda "Todos los números son menores a diez".
6. Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, imprimir en pantalla la leyenda "Alguno de los números es menor a diez".
7. Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores enteros x e y (distintos a cero). Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)
8. De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:
a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.
10. Escribir un programa en el cual: dada una lista de tres valores numéricos distintos se calcule e informe su rango de variación (debe mostrar el mayor y el menor de ellos)
*/

#include<iostream>

using namespace std;

//variables actividad 1, 4, 5, 6 y 10
int num1, num2, num3, num4; 

//variables actividad 2 y 3
int dia, mes, año;

//variables actividad 7
int puntoX, puntoY;

//variables actividad 8
int sueldo, antiguedad, aumento;



int main()
{
	
	//Actividad 1
	cout
		<< "Ingrese primer valor: ";
	cin
		>> num1;
	cout
		<< "Ingrese segundo valor: ";
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
	}
	else {
		if (num2 > num3) {
			cout
				<< "El numero mayor es: ";
			cout
				<< num2;
		}
		else
		{
			cout
				<< "El numero mayor es: ";
			cout
				<< num3;
		}
	}


	//Actividad 2

	cout
		<< "Escriba una fecha utilizando datos numericos unicamente."
		"\n"
		"Ingrese el dia (DD): ";
	cin
		>> dia;
	cout
		<<"Ingrese el mes (MM): ";
	cin
		>> mes;
	cout
		<<"Ingrese el año (AAAA): ";
	cin
		>> año;

	if (mes == 01 || mes == 02 || mes == 03)
	{
		cout
			<< "La fecha ingresada pertenece al primer trimestre del año ";
	}
	else
	{
		cout
			<< "La fecha ingresada no pertenece al primer trimestre del año ";
	}


	//Actividad 3
	cout
		<< "Ingrese una fecha (DD/MM/AAAA)"
		"\n"
		"Ingrese Dia (DD)";
	cin
		>> dia;
	cout
		<< "Ingrese Mes (MM)";
	cin
		>> mes;
	cout
		<< "Ingrese Año (AAAA)";
	cin
		>> año;

	if (dia == 25 && mes == 12)
	{
		cout
			<< "La fecha ingresada es Navidad";
	}
	else
	{
		cout
			<< "La fecha ingresada no es navidad";
	}


	//Actividad 4, 5 y 6

	cout
		<< "Ingrese el primer valor: ";
	cin
		>> num1;
	cout
		<< "Ingrese el segundo valor: ";
	cin
		>> num2;
	cout
		<< "Ingrese el tercer valor: ";
	cin
		>> num3;

	if (num1 == num2 && num2 == num3)
	{
		num4 = (num1 + num2) * num3;
		cout
			<< "Su resultado es: ";
		cout
			<< num4;
	}
	else
	{
		if (num1 < 10 && num2 < 10 && num3 < 10)
		{
			cout
				<< "Todos los numeros son menores a 10";
		}
		else
		{
			if (num1 < 10 || num2 < 10 || num3 < 10)
			{
				cout
					<< "Alguno de los numeros es menor a 10";
			}
	}

	
		
	}	
	/*
	//Actividad 7

	cout
		<< "Vamos a ingresar coordenadas de un punto en el plano"
		"\n"
		"Ingrese coordenada X: ";
	cin
		>> puntoX;
	cout
		<< "Ingrese coordenada Y: ";
	cin
		>> puntoY;

	if (puntoX > 0 && puntoY > 0)
	{
		cout
			<< "El punto se encuentra en el primer cuadrante";
	}
	else
	{
		if (puntoX < 0 && puntoY > 0)
		{
			cout
				<< "El punto se encuentraen el segundo cuadrante";
		}
		else
		{
			if (puntoX < 0 && puntoY < 0)
			{
				cout
					<< "El punto se encuentra en el tercer cuadrante";
			}
			else
				cout
				<< "El punto se encuentra en el cuarto cuadrante";
		}

	}
	
	//Actividad 8

	cout
		<< "Ingrese su sueldo: ";
	cin
		>> sueldo;
	cout
		<< "Ingrese su antiguedad: ";
	cin
		>> antiguedad;

	if (sueldo < 500 && antiguedad >= 10)
	{
		aumento = (sueldo * 0.2) + sueldo;

		cout
			<< "Recibe un aumento del 20%"
			"\n"
			"Su nuevo salario es: ";
		cout
			<< aumento;
	}
	else
	{
		if (sueldo < 500 && antiguedad < 10)
		{
			aumento = (sueldo * 0.05) + sueldo;

			cout
				<< "Recibe un aumento del 5%"
				"\n"
				"Su nuevo salario es: ";
			cout
				<< aumento;
		}
		else
		{
			if (sueldo >= 500)
			{
				cout
					<< "Su salario actual es: ";
				cout
					<< sueldo;
			}
		}
	}
	

	//Actividad 9
	
	cout
		<< "Ingrese el primer valor: ";
	cin
		>> num1;
	cout
		<< "Ingrese el segundo valor: ";
	cin
		>> num2;
	cout
		<< "Ingrese el tercer valor: ";
	cin
		>> num3;

	if (num1 < num2 && num1 < num3)
	{
		cout
			<< num1;
	}
	else
	{
		if (num2 < num3)
		{
			cout
				<< num2;
		}
		else
		{
			cout
				<<num3;
		}
	}

	cout
		<< "-";
	if (num1 > num2 && num1 > num3)
	{
		cout
			<< num1;
	} 
	else
	{
		if (num2 > num3)
		{
			cout
				<< num2;
		}
		else
		{
			cout
				<< num3;
		}
	}


	return 0;
}
