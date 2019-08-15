/*Dado un número entero positivo entre 1 y 3999 informar su correspondiente “número romano”.*/
#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	float divisor, dividendo, division;
	char nombre[50];

	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << endl;

	cout << "Ingrese el divisor: " << endl;
	cin >>divisor;

	cout << "Ingrese el dividendo: " << endl;
	cin >> dividendo;
	while (dividendo == 0)
	{
		cout << "Ingrese otro valor que no sea cero" << endl;
		cin >> dividendo;
	}

	division = divisor / dividendo;

	cout << nombre <<" el resultado de " << divisor <<" sobre "<< dividendo <<" es: " << division <<endl;

	return 0;

}



