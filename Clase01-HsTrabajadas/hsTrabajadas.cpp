#include<iostream>

using namespace std;

int main()
{
    //Declaraci�n de variables
    int horasTrabajadas;
    float costoHora;
    float sueldo;

    //El usuario ingresa datos num�ricos
    cout << "Ingrese Horas trabajadas por el operario:";
    cin >> horasTrabajadas;
    cout << "Ingrese el pago por hora en pesos argentinos:";
    cin >> costoHora;

    //Calculo del sueldo del operario
    sueldo = horasTrabajadas * costoHora;
    cout << "El sueldo del operario es: ";
    cout << sueldo;
    cout
        << "\n";

    //Condici�n de pago de impuestos.
    if (sueldo > 100000)
    {
        cout
            << "Esta persona debe abonar impuestos";
    }
    return 0;
}