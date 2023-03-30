/*Problema 1:
Se desea guardar los sueldos de 5 operarios.
Según lo conocido deberíamos definir 5 variables si queremos tener en un cierto momento los 5 sueldos almacenados en memoria.
Empleando un vector solo se requiere definir un único nombre y accedemos a cada elemento por medio del subíndice.


#include<iostream>

using namespace std;

class PruebaVector1 
{
private:
		int sueldos[5];
public:
		void cargar();
		void imprimir();
};

void PruebaVector1::cargar()
{
	for (int f = 0; f < 5; f++)
	{
		cout << "Ingrese el valor del sueldo: ";
		cin >> sueldos[f];
	}
}

void PruebaVector1::imprimir()
{
	cout << "Listado de sueldos";
	cout << "\n";
	for (int f = 0; f < 5; f++)
	{
		cout << sueldos[f];
		cout << "\n";
	}
	cin.get();
	cin.get();

}
int main()
{
	PruebaVector1 pv1;
	pv1.cargar();
	pv1.imprimir();
	return 0;
}

*/

/*Problema 2:
Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas.Contar cuántas personas son más altas que el promedio y cuántas más bajas.

#include<iostream>

using namespace std;

#include<iostream>

using namespace std;

class PruebaVector2 {
private:
    float alturas[5];
    float promedio;
public:
    void cargar();
    void calcularPromedio();
    void mayoresMenores();
};

void PruebaVector2::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese la altura de la persona:";
        cin >> alturas[f];
    }
}

void PruebaVector2::calcularPromedio()
{
    float suma;
    suma = 0;
    for (int f = 0; f < 5; f++)
    {
        suma = suma + alturas[f];
    }
    promedio = suma / 5;
    cout << "Promedio de alturas:";
    cout << promedio;
    cout << "\n";
}

void PruebaVector2::mayoresMenores()
{
    int may, men;
    may = 0;
    men = 0;
    for (int f = 0; f < 5; f++)
    {
        if (alturas[f] > promedio)
        {
            may++;
        }
        else
        {
            if (alturas[f] < promedio)
            {
                men++;
            }
        }
    }
    cout << "Cantidad de personas mayores al promedio:";
    cout << may;
    cout << "\n";
    cout << "Cantidad de personas menores al promedio:";
    cout << men;
    cin.get();
    cin.get();
}

int main()
{
    PruebaVector2 pv2;
    pv2.cargar();
    pv2.calcularPromedio();
    pv2.mayoresMenores();
    return 0;
}

*/

/*Problema 3:
Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
Imprimir los gastos en sueldos de cada turno.

#include<iostream>

using namespace std;

class pruebaVector3 {
private:
    float TM[4];
    float TT[4];
public:
    void cargar();
    void calcularGastos();
};

void pruebaVector3::cargar() {

    cout << "Ingrese sueldo de empleados TM: ";
    cout << "\n";

    for (int f = 0; f < 4; f++) {

        cout << "Ingrese sueldo: ";
        cin >> TM[f];          
    }

    cout << "Ingrese sueldo de empleados TT: ";
    cout << "\n";

    for (int f = 0; f < 4; f++) {
        cout << "Ingrese sueldo: ";
        cin >> TT[f];
    }
}

void pruebaVector3::calcularGastos() {
    float man = 0;
    float tar = 0;

    for (int f = 0; f < 4; f++) {
        man += TM[f];
        tar += TT[f];
    }
    cout << "Gasto TM: ";
    cout << man;
    cout << "\n";
    cout << "Gasto TT: ";
    cout << tar;
    cin.get();
    cin.get();
}

int main() {
    pruebaVector3 pv3;
    pv3.cargar();
    pv3.calcularGastos();
    return 0;
}
*/

//ACTIVIDADES

/*1. Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50.

#include<iostream>

using namespace std;

class pruebaVector4 {
private:
    int elementos[8];
public:
    void cargar();
    void valA();
    void may();
    void valM50();
};

void pruebaVector4::cargar() {
    

    for (int f = 0; f < 8; f++) {
        cout << "Ingrese numeros de elementos: ";
        cin >> elementos[f];
        cout << "\n";
    }
}

void pruebaVector4::valA() {
    
    float suma = 0;
    
    for (int f = 0; f < 8; f++) {
        suma += elementos[f];
    }

    cout << "El valor acumulado de todos los elementos del vector es: ";
    cout << suma;
    cout << "\n";
}

void pruebaVector4::may() {

    int sumMay = 0;

    for (int f = 0; f < 8; f++) {
        if (elementos[f] > 36) {
            sumMay += elementos[f];
        }
    }
    cout << "El valor acumulado de los elementos del vector mayores a 36 es: ";
    cout << sumMay;
    cout << "\n";
}

void pruebaVector4::valM50() {
    
    int valM = 0;

    for (int f = 0; f < 8; f++) {
        if (elementos[f] > 50) {
            valM++;
        }
    }
    cout << "La cantidad de valores mayores a 50 es: ";
    cout << valM;
    cout << "\n";
    cin.get();
    cin.get();
}

int main() {
    pruebaVector4 pv4;
    pv4.cargar();
    pv4.may();
    pv4.valA();
    pv4.valM50();
    return 0;
}*/

/*2. Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. 
Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. 
Sumar componente a componente.

#include<iostream>

using namespace std;

class pruebaVector5 {
private:
    int vec1[4];
    int vec2[4];
    int vec3[4];
public:
    void cargar();
    void sumar();
};

void pruebaVector5::cargar() {

    cout << "Carga del primer vector.";
    cout << "\n";

    for (int f = 0; f < 4; f++) {
        cout << "Ingrese un número para vec1: ";
        cin
            >> vec1[f];
        cout << "\n";
    }

    cout << "Carga del segundo vector.";
    cout << "\n";

    for (int f = 0; f < 4; f++) {
        cout << "Ingrese un numero para vec2: ";
        cin >> vec2[f];
        cout << "\n";
    }
}

void pruebaVector5::sumar() {
    
    for (int f = 0; f < 4; f++) {
        vec3[f] = vec1[f] + vec2[f];
    }
    cout << "Vector resultante: ";
    cout << "\n";
    for (int f = 0; f < 4; f++) {
        cout<<vec3[f];
        cout << "\n";
    }
    cin.get();
    cin.get();
}

int main() {
    pruebaVector5 pv5;
    pv5.cargar();
    pv5.sumar();
    return 0;
}

*/

/*Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos. Realizar un programa que muestre el curso que obtuvo el mayor promedio general.

#include<iostream>

using namespace std;

class pruebaVector6 {
private:
    float cursoA[5];
    float cursoB[5];
public:
    void cargar();
    void promedio();
};

void pruebaVector6::cargar() {

    cout << "Cargar notas del primer parcial del curso A";
    cout << "\n";

    for (int f = 0; f < 5; f++) {
        cout << "Ingrese nota: ";
        cin >> cursoA[f];
        cout << "\n";
    }

    cout << "Cargar notas del primer parcial del curso B";
    cout << "\n";

    for (int f = 0; f < 5; f++) {
        cout << "Ingrese nota: ";
        cin >> cursoB[f];
        cout << "\n";
    }
}

void pruebaVector6::promedio() {

    float sumA = 0;
    float sumB = 0;
    float promA;
    float promB;

    for (int f = 0; f < 5; f++) {
        sumA = sumA + cursoA[f];
    }

    promA = sumA / 5;

    cout << "El promedio del curso A es: ";
    cout << promA;
    cout << "\n";
    
    //curso B
    for (int f = 0; f < 5; f++) {
        sumB = sumB + cursoB[f];
    }
    promB = sumB / 5;

    cout << "El promedio del curso B es: ";
    cout << promB;
    cout << "\n";

    if (promA < promB) {
        cout << "La clase B obtuvo el mayor promedio general.";

    }
    else if (promA>promB){
        cout << "La clase A obtuvo el mayor promedio general.";
    }   
    else {
        cout << "Ambas clases obtuvieron el mismo promedio general.";
    }

}

int main() {
    pruebaVector6 pv6;
    pv6.cargar();
    pv6.promedio();
    return 0;

}
*/

/* 4.Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor. */

#include<iostream>

using namespace std;

class pruebaVector7 {
private: 
    int vec[10];
public:
    void cargar();
    void menMay();
};

void pruebaVector7::cargar() {

}