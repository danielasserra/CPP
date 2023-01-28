#include<iostream>

using namespace std;

//variables
int num1, num2;

int main()
{
	cout
		<< "Ingrese un numero";
	cin
		>> num1;
	cout
		<< "Ingrese otro numero";
	cin
		>> num2;

	if (num1 > num2)
	{
		cout
			<< "El numero "; 
		cout
			<< num1;
		cout
			<< " es mayor que ";
		cout
			<< num2;
	}
	else
	{
		cout
			<< "El numero ";
		cout
			<< num2;
		cout
			<< " es mayor que ";
		cout
			<< num1;
	}

	return 0;
}