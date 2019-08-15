// EJ 1 05.04.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//funcion que inicialize persona, pedir nombre, edad
//funcion que saluda y muestra sus datos

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
	int edad;
};
void inicializarPersona(persona*);
void saludarPersona(persona*);

int main()
{
	persona p;
	persona *p1;
	p1 = &p;
	inicializarPersona(p1);
	
	saludarPersona(p1);
	cout << "Hola " << p.nombre << ", tu edad es " << p.edad << endl;
}

void inicializarPersona(persona*p)
{
	cout << "Ingresa tu nombre: ";
	cin >> p->nombre; //(*p).nombre
	cout << endl << "Ingresa tu edad: ";
	cin >> p->edad;
}

void saludarPersona(persona*p)
{
	cout <<endl<< "Hola " << p->nombre << ", tu edad es " << p->edad << endl;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
