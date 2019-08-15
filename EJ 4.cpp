//Cola Personas -> Vector y la imprimimos -> A cada cola desde vector

// ConsoleApplication1.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
//

//#include "pch.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;


struct persona {
	int edad;
	string nombre;
	int sexo;
};

struct Nodo {
	persona info;
	Nodo *sgte;
};
void agregar(Nodo*&, Nodo*&, persona);
persona suprimir(Nodo*&, Nodo*&);


int main()
{
	//dada n personas ingresar edad y ordenar de menor a mayor;
	//implementarlo como si fuera una cola
	//lista de hombres y mujeres, borrar la cola donde estaban juntos
	//int mayor;
	
	/*cout << "Ingresa cantidad de personas" << endl;
	cin >> n;*/
	struct persona p;
	string nombre;
	vector<persona> personas;
	vector<persona> mujeres;
	vector<persona> hombres;
	vector<persona> v;

	Nodo *frente;
	Nodo *final;
	frente = NULL;
	final = NULL;

	Nodo *frentem;
	Nodo *finalm;
	frentem = NULL;
	finalm = NULL;

	Nodo *frentef;
	Nodo *finalf;
	frentef = NULL;
	finalf = NULL;

	do {
		cout << "Ingresa nombre: " ;
		cin >> p.nombre;
		if (p.nombre != "fin")
		{
			cout << "Ingresa edad: ";
			cin >> p.edad;
			cout << "Ingresa sexo: ";
			cin >> p.sexo;
			cout << endl;
			//personas.push_back(p);
			agregar(frente, final, p);
		}

	} while (p.nombre != "fin");

	cout <<endl<< "Personas:" << endl;
	for (int i = 0; i < int(personas.size()); i++)
	{
		personas[i]=suprimir(frente,final);
		cout << personas[i].nombre << ": " << personas[i].edad<<", "<<personas[i].sexo<<endl;
	}

	for (int i = 0; i < int(personas.size()); i++)
	{
		if (personas[i].sexo == 0)
		{
			//hombres.push_back(personas[i]);
			agregar(frentem, finalm, p);
		}
		else
		{
			//mujeres.push_back(personas[i]);
			agregar(frentef, finalf, p);
		}
	}

	cout <<endl<< "Mujeres:" << endl;
	for (int i = 0; i < int(mujeres.size()); i++)
	{
		mujeres[i]=suprimir(frentef,finalf);
		cout << mujeres[i].nombre << ": " << mujeres[i].edad<<endl;
	}

	cout <<endl<< "Hombres:" << endl;
	for (int i = 0; i < int(hombres.size()); i++)
	{
		hombres[i]=suprimir(frentem,finalm);
		cout << hombres[i].nombre << ": " << hombres[i].edad<<endl;
	}

	return 0;

	/*for (int i = 1; i <= int(personas.size()) - 1; i++) {
		for (int j = 1; j <= int(personas.size()) - i; j++) {
			if (personas[j - 1].edad < personas[j].edad) {
				persona aux = personas[j];
				personas[j] = personas[j - 1];
				personas[j - 1] = aux;
			}
		}
	}*/


	/*cout <<endl<< "Personas ordenadas por edad:" << endl;

	for (int i = 0; i < int(personas.size()); i++)
	{
		cout << personas[i].nombre <<": " << personas[i].edad << endl;
	}*/

}

void agregar(Nodo*&fte, Nodo*&fin, persona valor)
{
	Nodo *q = new Nodo();
	(*q).info = valor;
	(*q).sgte = NULL;
	if (fte == NULL) fte = q;
	else (*fin).sgte = q;
	fin = q;
	return;
}

persona suprimir(Nodo*&fte, Nodo*&fin)
{
	persona valor;
	Nodo *q = fte;
	valor = (*q).info;
	fte = (*q).sgte;
	if (fte == NULL) fin = NULL;
	delete q;
	return valor;
}

// Ejecutar programa: Ctrl + F5 o men� Depurar > Iniciar sin depurar
// Depurar programa: F5 o men� Depurar > Iniciar depuraci�n

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de c�digo fuente
//   3. Use la ventana de salida para ver la salida de compilaci�n y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de c�digo, o a Proyecto > Agregar elemento existente para agregar archivos de c�digo existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
