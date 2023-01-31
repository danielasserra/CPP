/* 
Estructura Repetitiva Do While
Curso C++ Quark Academy
por Daniela Serra
*/

#include<iostream>

using namespace std;

int main()
{
	/*
	//Problema 1:
	//Escribir un programa que solicite la carga de un número entre 0 y 999, y nos muestre un mensaje de cuántos dígitos tiene el mismo.Finalizar el programa cuando se cargue el valor 0.

	int valor;
	do
	{
		cout
			<< "Ingrese un valor entre 0 y 999 (0 finaliza): ";
		cin
			>> valor;
		if (valor >= 100)
		{
			cout
				<< "Tiene tres digitos";
		}
		else
		{
			if (valor >= 10)
			{
				cout
					<< "Tiene dos digitos";
			}
			else
			{
				cout
					<< "Tiene un digito";
			}
		}
		cout << "\n";
	} while (valor != 0);
	

	//Problema 2:
	//Escribir un programa que solicite la carga de números por teclado, obtener su promedio.Finalizar la carga de valores cuando se cargue el valor 0.

	int c=0; //cantidad de valores ingresados
	int valor; //n° ingresado por usuario
	int suma = 0; //suma de valores ingresados.
	int promedio;

	do
	{
		//el usuario ingresa un valor
		cout
			<< "Ingrese un valor (0 para finalizar): ";
		cin
			>> valor;

		//si el valor es distinto a cero, se suma el valor al anterior. Y se añade uno al contador
		if (valor != 0)
		{
			suma += valor;
			c++;
		}
		
		//se cumple la condicion mientras el valor no sea cero
	} while (valor != 0);

	//si el contador es distinto a cero
	if (c != 0)
	{
		promedio = suma / c;   
		cout
			<< "El promedio de los valores ingresados es: ";
		cout
			<< promedio;
	}
	else
	{
		cout
			<< "No se ingresaron valores";
	}
	
		
	//Problema 3:
	//Realizar un programa que permita ingresar el peso(en kilogramos) de piezas.El proceso termina cuando ingresamos el valor 0. Se debe informar :
	//a) Cuántas piezas tienen un peso entre 9.8 Kg.y 10.2 Kg. ? , cuántas con más de 10.2 Kg. ? y cuántas con menos de 9.8 Kg. ?
	//b) La cantidad total de piezas procesadas.

	float peso; //ingresado por usuario
	int pesoDiez = 0; //piezas entre 9.8 y 10.2
	int pesoMenosDiez = 0; //piezas menos de 9.8
	int pesoMasDiez = 0; //piezas mas 10.2
	int piezas = 0; //cantidad total de piezas

	do {
		cout
			<< "Ingrese el peso de la pieza (0 finaliza): ";
		cin
			>> peso;
		
		//si el peso es distinto a cero
		if (peso != 0)
		{
			//sumar uno a piezas (para calcular la cantidad de piezas procesadas)
			piezas++;

			//si el peso se encuentra en estos valores
			if (peso > 9.8 && peso < 10.2)
			{
				//sumar uno para calcular la cant de piezas de esos valores.
				pesoDiez++;
			}
			else
			{
				if (peso < 9.8)
				{
					pesoMenosDiez++;
				}
				else
				{
					pesoMasDiez++;
				}//cierra else
			}//cierra else
		} //cierra if

		//cierra while con condicion
	} while (peso != 0);

	cout
		<< pesoDiez;
	cout
		<< " piezas pesan entre 9.8 y 10.2";
	cout
		<< "\n";
	cout
		<< pesoMasDiez;
	cout
		<< " piezas pesan más de 10.2";
	cout
		<< "\n";
	cout
		<< pesoMenosDiez;
	cout
		<< " piezas pesan menos de 9.8";
	cout
		<< "\n";
	cout
		<< piezas;
	cout
		<< " es la cantidad total de piezas procesadas";
	
	///////////////
	//ACTIVIDADES//
	///////////////
	
	//Actividad 1
	//Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga). Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.

	int valor;
	int suma = 0;

	do
	{
		cout
			<< "Ingrese un valor (9999 Finaliza): ";
		cin
			>> valor;

		//para no sumar el 9999
		if (valor != 9999)
		{
			suma += valor;
		}		

	} while (valor != 9999);

	cout
		<< "El valor acumulado es: ";
	cout
		<< suma;
	cout
		<< "\n";

	if (suma == 0)
	{
		cout
			<< "Es cero";
	}
	else 
	{
		if (suma < 0)
		{
			cout
				<< "Es menor a cero";
		}
		else
		{
			cout
				<< "Es mayor a cero";
		}
	}

	ACTIVIDAD 2

	En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual. El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
	Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:
	a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
	Estado de la cuenta	'Acreedor' si el saldo es >0.
			'Deudor' si el saldo es <0.
			'Nulo' si el saldo es =0.
	b) La suma total de los saldos acreedores.
	*/

	int numCuenta;
	int saldo;
	int sumaAcreedor=0;

	do
	{
		cout
			<< "Ingrese el numero de cuenta: ";
		cin
			>> numCuenta;
		cout
			<< "\n";

		if (numCuenta >= 0)
		{
			cout
				<< "Ingrese saldo de la cuente: ";
			cin
				>> saldo;
		
			if (saldo == 0)
			{
				cout
					<< "No tiene saldo";
				cout
					<< "\n";
			}
			else
			{
				if (saldo > 0)
				{
					cout
						<< "Acreedor";
					cout
						<< "\n";

					sumaAcreedor = sumaAcreedor + saldo;
				}
				else
				{
					cout
						<< "Deudor";
					cout
						<< "\n";

				}
			}
		}
	} while (numCuenta >= 0);

	cout
		<< "La suma total de saldos acreedores es de: ";
	cout
		<< sumaAcreedor;



	return 0;
}




