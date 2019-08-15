// EvalucacionMerencio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include "pch.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

struct multa
{
	bool lucesApagadas;
	int velocidad;
	int kmExcedidos;
	int multa;
	bool multaPagada;
};

int main()
{
	//EJ 5
	string respuesta;
	bool multaPagada;
	int multaTotal=0;
	int kmExcedidos;
	int valorMultaLuces = 2500;
	int valorMultaExcesoVelocidad = 4000;
	int valorKmExcedido = 500;
	bool lucesApagadas;
	int velocidad;
	int cantidadMultas=0;
	multa m;
	vector<multa> multas;

	do {
		cout << "Ingrese velocidad: ";
		cin >> m.velocidad;
		if (m.velocidad != 0)
		{
			m.kmExcedidos = m.velocidad - 80;
			//considere que a partir de los 81km/h le empieza a cobrar
			m.multa = valorMultaExcesoVelocidad + valorKmExcedido * m.kmExcedidos;

			cout << endl << "Tenia las luces apagadas? (Ingrese si o no)" << endl;
			cin >> respuesta;
			m.lucesApagadas = (respuesta == "si");
			if (m.lucesApagadas)
			{
				m.multa += valorMultaLuces;
			}
			cout << "Pago la multa? (Ingrese si o no)" << endl;
			cin >> respuesta;
			m.multaPagada = (respuesta == "si");
			multas.push_back(m);

		}
	} while (m.velocidad != 0);


	for (int i = 0; i <= int(multas.size()); i++)
	{
		cantidadMultas++;
		if (multas[i].multaPagada = false)
			multaTotal += multas[i].multa;
	}
	cout << "La cantidad de multas es: " << cantidadMultas;
	cout << "La multa total es de: " << multaTotal;

	//EJ 6

	int nota;
	int sumaNotas=0;
	vector<int> notas;
	int promedio;
	int sumaAlumnos=0;
	int sumaPromedios=0;
	int promedioCurso=0;


	for (int i = 0; i < 30; i++)
	{
		
		do {
			cout << "Ingresa nota: ";
			cin >> nota;
			if (nota != 0)
			{
				notas.push_back(nota);
			}

		} while (nota != 0);
		promedio = sumaNotas / int(notas.size());
		cout << "Promedio de alumno " << i << ": " <<promedio;
		sumaNotas += promedio;
		notas = 0;
		sumaAlumnos++;

	}

	promedioCurso = sumaNotas / sumaAlumnos;
	cout << "Promedio del curso: " << promedioCurso;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
