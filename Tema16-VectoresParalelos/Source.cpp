/*Problema 1:
Desarrollar un programa que permita cargar 5 nombres de personas y sus edades respectivas. Luego de realizar la carga por teclado de todos los datos imprimir los nombres de las personas mayores de edad (mayores o iguales a 18 años)

#include <iostream>

using namespace std;

class vectorPrueba1 {
private:
	char nombres[5][40]; // cantidad de nombres y cantidad de caracteres por nombre
	int edades[5];
public:
	void cargar();
	void mayores();

};

void vectorPrueba1::cargar() {

	for (int f = 0; f < 5; f++) {
		cout << "Ingrese nombre: ";
		cin.getline(nombres[f],40); 
		cout << "\n";
		cout << "Ingrese edad: ";
		cin >> edades[f];
		cin.get(); //al cargar la edad de la persona se procede a cargar otro nombre por eso llamamos al metodo get del objeto cin. Porque en el buffer del teclado queda un enter.
	}
}

void vectorPrueba1::mayores() {
	for (int f = 0; f < 5; f++) {
		if (edades[f] >= 18) {
			cout << nombres[f];
			cout << "\n";
		} 
		
	}
	cin.get();
}

int main(){
	vectorPrueba1 vp1; //crear un objeto de la clase y llamar sus dos métodos
	vp1.cargar();
	vp1.mayores();
	return 0;
}*/

//PROBLEMAS PROPUESTOS

/*1. Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios. Definir dos vectores paralelos. Mostrar cuantos productos tienen un precio mayor al primer producto ingresado.

#include <iostream>

using namespace std;

class productos {
private:
	char nombre[5][40];
	int precio[5];
public:
	void cargar();
	void mayorPrecio();
};

void productos::cargar() {
	for (int f = 0; f < 5; f++) {
		cout << "Ingrese nombre del producto: ";
		cin.getline(nombre[f], 40);
		cout << "Ingrese precio del producto: ";
		cin >> precio[f];
		cin.get();
	}
}

void productos::mayorPrecio() {
	for (int f = 0; f < 5; f++) {
		if (precio[0] < precio[f]) {
			cout << nombre[f];
			cout << "\n";
		}
	}
}

int main(){
	productos pr;
	pr.cargar();
	pr.mayorPrecio();

}
*/

/*2. En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en dos vectores paralelos)
b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.*/

#include <iostream>

using namespace std;

class curso {
private:
	char nombre[4][40];
	int nota[4];
public:
	void cargar();
	void condicion();
	void muyBueno();
};

void curso::cargar() {
	for (int f = 0; f < 4; f++) {
		cout << "Ingrese el nombre del alumnx: ";
		cin.getline(nombre[f], 40);
		cout << "Ingrese nota del alumnx: ";
		cin >> nota[f];
		cin.get();
	}
	
}

void curso::condicion(){
	for (int f = 0; f < 4; f++) {

		cout << nombre[f];
		cout << " - ";
		cout << nota[f];
		cout << " - ";
		
		if (nota[f] >= 8) {
			cout << "Muy bueno";
			cout << "\n";
		}
		else if (nota [f]>= 4 && nota[f] < 8) {
			cout << "Bueno";
			cout << "\n";
		}
		else if (nota [f]<4 && nota[f] >=0) {
			cout << "Insuficiente";
			cout << "\n";
		}
		else {
			cout << "Calificacion invalida";
			cout << "\n";
		}
		
	}
}

void curso::muyBueno() {

	int suma = 0;

	for (int f = 0; f < 4; f++) {
		if (nota[f] >= 8) {
			suma++;
		}
	}
	cout << suma;
	cout << " alumnos obtuvieron la calificacion 'Muy bueno'";
}

int main() {
	curso cu;
	cu.cargar();
	cu.condicion();
	cu.muyBueno();
	return 0;
}