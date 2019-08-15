/*Dado un número entero positivo entre 1 y 3999 informar su correspondiente “número romano”.*/
#include "pch.h"
#include <iostream>

using namespace std;

void comparar(int Fecha1[3], int Fecha2[3], int FechaHoy[3])
{
	int a;
	int b;

	if (Fecha1[2] == Fecha2[2])
	{
		if (Fecha1[1] == Fecha2[1])
		{
			if (Fecha1[0] == Fecha2[0])
			{

			}
		}
	}
	else {
		a = FechaHoy[2] - Fecha1[2];
		b = FechaHoy[2] - Fecha2[2];
		if (a < 0) {
			a = -a;
		}
		if (b < 0) {
			b = -b;
		}
		if (a > b) {
			cout << "La fecha mas cercana es la segunda";
		}
		else {
			cout << "La fecha mas cercana es la primera";
		}

	}
}

int main() {
	int Fecha1[3];
	int Fecha2[3];
	int FechaHoy[3] = { 22,03,2019 };

	cout << FechaHoy[0] << "/" << FechaHoy[1] << "/" << FechaHoy[2] << endl;



	cout << "Ingrese la primer fecha en formato DDMMAAAA:" << endl;
	cout << "Ingrese dia en formato DD:" << endl;
	cin >> Fecha1[0];
	cout << "Ingrese mes en formato MM:" << endl;
	cin >> Fecha1[1];
	cout << "Ingrese anio en formato AAAA:" << endl;
	cin >> Fecha1[2];

	cout << "Ingrese la segunda fecha en formato DDMMAAAA:" << endl;
	cout << "Ingrese dia en formato DD:" << endl;
	cin >> Fecha2[0];
	cout << "Ingrese mes en formato MM:" << endl;
	cin >> Fecha2[1];
	cout << "Ingrese anio en formato AAAA:" << endl;
	cin >> Fecha2[2];

	comparar(Fecha1, Fecha2, FechaHoy);

	return 0;

}



