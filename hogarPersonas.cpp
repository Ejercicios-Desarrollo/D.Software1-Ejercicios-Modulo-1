// hogarPersonas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*Modelar un hogar, que tenga distintas partes de la casa, viven 4 personas inicialmente, con nombre, apellido, edad
saber donde duerme cada una de las personas, la habitación tiene coordenada y quiero saber si una habitación es
contigua a la otra

coordenada(x,y), tengo la direccion a izq y der de los vecinos*/
#include "pch.h"
#include <iostream>
#include <sstream>
#include <vector>
#include<string>
using namespace std;

struct persona
{
	string nombre;
	string apellido;
	int edad;
};
struct habitacion
{
	persona p;
	int numHabitacion;
	int habitacionIzq;
	int habitacionDer;

};
struct hogar
{
	habitacion habitaciones[4];
};

int main()
{
	int num;
	hogar hogar;
	for (int i = 0; i < 4; i++)
	{
		hogar.habitaciones[i].numHabitacion = i;
		hogar.habitaciones[i].habitacionDer = i + 1;
		hogar.habitaciones[i].habitacionIzq = i - 1;

		cout << "Habitacion " << i << endl;
		cout << "Ingresa tu nombre: ";
		cin >> hogar.habitaciones[i].p.nombre;
		cout << endl << "Ingresa tu apellido: ";
		cin >> hogar.habitaciones[i].p.apellido;
		cout << endl << "Ingresa tu edad: ";
		cin >> hogar.habitaciones[i].p.edad;
		cout << endl << endl;
	}


	cout << "Ingresa num de habitacion: ";
	cin >> num;

	cout << hogar.habitaciones[num].p.nombre << " esta a la derecha de " << hogar.habitaciones[(hogar.habitaciones[num].habitacionIzq)].p.nombre;
	cout << endl << "y a la izquierda de " << hogar.habitaciones[(hogar.habitaciones[num].habitacionDer)].p.nombre;

}

