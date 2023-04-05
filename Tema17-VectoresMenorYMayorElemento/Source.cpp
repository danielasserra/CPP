/*Problema 1:
Confeccionar un programa que permita cargar los nombres de 5 operarios y sus sueldos respectivos. Mostrar el sueldo mayor y el nombre del operario.

#include <iostream>

using namespace std;

class operarios {
private:
	char nombre[5][40];
	int sueldo[5];
public:
	void cargar();
	void mayorSueldo();
};

void operarios::cargar() {

	for (int f = 0; f < 5; f++) {
		cout << "Ingrese el nombre del operario: ";
		cin.getline(nombre[f], 40);
		cout << "Ingrese el sueldo del operario: ";
		cin >> sueldo[f];
		cin.get();
	}
	
}


void operarios::mayorSueldo() {
	//para obtener el mayor sueldo y el nombre del operario:
	
	float mayor; //crear variable
	mayor = sueldo[0]; // inicializar la variable con el primer componente del vector "sueldo"
	int pos = 0; // Inicializar variable pos en 0 (inicialmente decidimos que la primera posición es la más alta)

	for (int f = 1; f < 5; f++) { //Recorrer los componentes del vector que faltan (2 a 5)
		if (sueldo[f] > mayor) { // Acceder a cada componente y contrastar si tiene un mayor valor que la variable que creamos (1er pos)
			mayor = sueldo[f]; // en caso de ser verdadera la condición, asignamos el valor de sueldos [f] a la variable "mayor".
			pos = f; //a la variable pos le cargamos la variable f, que indica el componente que estamos analizando
		}
	}

	cout << "El operario con mayor sueldo es: ";
	cout << nombre[pos]; //conociendo el valor del mayor sueldo, imprimimos la variable "pos" que indica posición que ocupa
	cout << "\n";
	cout << "su salario es: ";
	cout << mayor; //imprimimos la variable mayor que contiene el mayor sueldo
}

int main() {
	operarios operarios1;
	operarios1.cargar();
	operarios1.mayorSueldo();
	return 0;
}
*/

/*PROBLEMA PROPUESTO
Cargar un vector de 5 elementos enteros. imprimir el menor y un mensaje si se repite dentro del vector.*/

#include<iostream>

using namespace std;

class vector {
private:
	int elementos[5];
	int menor;
public:
	void cargar();
	void menorElem();
	void repiteMenor();
};

void vector::cargar() {

	for (int f=0; f<5; f++) {
		cout << "Ingrese el numero de elemento: ";
		cin >> elementos[f];
	}	
}

void vector::menorElem() {
	int menor = elementos[0];
	
	for (int f = 1; f < 5; f++) {
		if (elementos[f] < menor) {
			menor = elementos[f];
		}		
	}
	
	cout << "El elemento menor es: ";
	cout << menor;
	cout << "\n";	
}

void vector::repiteMenor() {

	int suma = 0;

	for (int f = 0; f < 5; f++) {
		if (elementos[f] = menor) {
			suma++;
		}

		if (suma > 1) {
			cout << "El elemento menor se repite dentro del vector.";
		}
		else {
			cout << "El elemento menor no se repite dentro del vector.";
		}
	}
	cin.get();
	cin.get();
	
}

int main() {
	vector v1;
	v1.cargar();
	v1.menorElem();
	v1.repiteMenor();
	return 0;
}