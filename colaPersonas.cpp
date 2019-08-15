#include "pch.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <queue>

using namespace std;


struct persona {
	int edad;
	string nombre;
	int sexo;
};

int main()
{
	/* Cargar personas en una cola, dividir en dos colar segun
	sexo y dejar colaPersonas vacia	*/
	struct persona p;
	queue<persona> colaPersonas;
	queue<persona> colaHombres;
	queue<persona> colaMujeres;

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
			colaPersonas.push(p);
		}

	} while (p.nombre != "fin");

	cout <<endl<< "Personas:" << endl;
	while (! colaPersonas.empty() )
  	{
    	cout << colaPersonas.front().nombre << ": " << colaPersonas.front().edad<<", "<<colaPersonas.front().sexo<<endl;
    	if(colaPersonas.front().sexo==0)
			colaHombres.push(colaPersonas.front());

		else
			colaMujeres.push(colaPersonas.front());
		
		colaPersonas.pop();
  	}

	cout <<endl<< "Mujeres:" << endl;
	while (! colaMujeres.empty() )
  	{
		cout << colaMujeres.front().nombre << ": " << colaMujeres.front().edad<<endl;
		colaMujeres.pop();
	}

	cout <<endl<< "Hombres:" << endl;
	while (! colaHombres.empty() )
  	{
		cout << colaHombres.front().nombre << ": " << colaHombres.front().edad<<endl;
		colaHombres.pop();
	}
	return 0;

}