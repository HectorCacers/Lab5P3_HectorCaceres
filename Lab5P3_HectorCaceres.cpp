// Lab5P3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>
#include <iostream>
#include <string>
#include <ctime>
#include "armadura.h"
#include "arma.h"
#include "personaje.h"
#include <vector>

using namespace std;
int main()
{
	int m;
	cout << "\t\t\tElija una opcion\n\n";
	//con '\t\t\t' llevo un poco al centro el mensaje, y con '\n\n' salto 2 lineas hacia abajo.
	cout << "1  Leyend of Selma\n";
	cout << "2  Generador de Examen\n";
	cout << "3  Salir\n\n";
	cin >> m;

	switch (m)
	{
	case 1: {
		int parar = 0;

		while (parar == 0)
		{
			string nombre, nombre_arma, tipo_arma, material_armadura, pieza_armadura;
			vector<armadura> armaduras_personaje;
			// nombre del personaje 
			cout << "Ingresa el nombre del personaje:" << "\n";
			getline(cin, nombre);
			cout << "Ingresa el nombre del arma del personaje:" << "\n";
			getline(cin, nombre_arma);
			cout << "Ingresa el tipo del arma del personaje:" << "\n";
			getline(cin, tipo_arma);
			// creamos el arma 
			arma arma_personaje(nombre_arma, tipo_arma);

			// creamos el menu para agregar armaduras 
			int salir = 0;

			// creamos variables para saber si  la armadura ya fue seleccionada
			int casco = 0;
			int pechera = 0;
			int grebas = 0;
			int hombreras = 0;
			int opcion;

			while (salir == 0)
			{
				cout << "Menu de armadura" << "\n";
				cout << "1) Casco" << "\n";
				cout << "2) Pechera" << "\n";
				cout << "3) Grebas" << "\n";
				cout << "4) Hombreras" << "\n";
				cout << "Armadura que deseas agregar al personaje:";
				cin >> opcion;

				if (opcion == 1)
				{
					if (casco == 0)
					{
						casco = 1;
						pieza_armadura = "casco";
						cout << "Ingresa el material del casco:" << "\n";
						cin >> material_armadura;
						// agregamos la armadura 
						armaduras_personaje.push_back(armadura(material_armadura, pieza_armadura));
						cout << "Se a aÃ±adido el " << pieza_armadura << " de " << material_armadura << " al personaje" << "\n";

					}
					else
					{
						cout << "El personaje ya cuenta con esa armadura" << "\n";
					}

				}

				else if (opcion == 2)
				{
					if (pechera == 0)
					{
						pechera = 1;
						pieza_armadura = "pechera";
						cout << "Ingresa el material de la  pechera:" << "\n";
						cin >> material_armadura;
						// agregamos la armadura 
						armaduras_personaje.push_back(armadura(material_armadura, pieza_armadura));
						cout << "Se a aÃ±adido la " << pieza_armadura << " de " << material_armadura << " al personaje" << "\n";

					}
					else
					{
						cout << "El personaje ya cuenta con esa armadura" << "\n";
					}

				}

				else if (opcion == 3)
				{
					if (grebas == 0)
					{
						grebas = 1;
						pieza_armadura = "grebas";
						cout << "Ingresa el material de las  grebas:" << "\n";
						cin >> material_armadura;
						// agregamos la armadura 
						armaduras_personaje.push_back(armadura(material_armadura, pieza_armadura));
						cout << "Se a aÃ±adido las " << pieza_armadura << " de " << material_armadura << " al personaje" << "\n";

					}
					else
					{
						cout << "El personaje ya cuenta con esa armadura" << "\n";
					}

				}

				else if (opcion == 4)
				{
					if (hombreras == 0)
					{
						hombreras = 1;
						pieza_armadura = "hombreras";
						cout << "Ingresa el material de las  hombreras:" << "\n";
						cin >> material_armadura;
						// agregamos la armadura 
						armaduras_personaje.push_back(armadura(material_armadura, pieza_armadura));
						cout << "Se a aÃ±adido las " << pieza_armadura << " de " << material_armadura << " al personaje" << "\n";

					}
					else
					{
						cout << "El personaje ya cuenta con esa armadura" << "\n";
					}

				}

				// preguntamos si se quiere ingresar otra 
				cout << "Ingresa 0 si deseas aÃ±adir otra armadura:" << "\n";
				cin >> salir;
			}

			// al salir creamos el personaje 
			personaje nuevo_personaje(nombre, arma_personaje, armaduras_personaje);
			// estadistica 
			cout << "Estadisticas del personaje:" << "\n";
			nuevo_personaje.mostrar_estadisticas();

			cout << "Ingresa 0 para agregar un neuvo personaje" << "\n";
			cin >> parar;
		}
	}
		break;
	case 2: {
		srand(time(0));

		BancoDePreguntas banco(10);
		Examen examen;

		examen.asignatura = "MatemÃ¡ticas";
		examen.crearExamen(3, banco);
		examen.imprimirExamen();

		return 0;
	}
			break;
	case 3:
		cout << "Ya esta fuera" << endl; 
		break;
	default: cout << "El valor ingresado no esta en el menu" << endl;
	}
	cin.ignore(); return 0;
}

class Pregunta {
public:
	string especificacion;
};

class BancoDePreguntas {
public:
	vector<Pregunta> preguntas;
	int cantidad;

	BancoDePreguntas(int cant) {
		cantidad = cant;
		preguntas.resize(cantidad);
		preguntas[0].especificacion = "cuanto es 8+8?";
		preguntas[1].especificacion = "cuanto es 9*7?";
		preguntas[2].especificacion = "cuannto es 12+50?";
		preguntas[3].especificacion = "cuanto es 24/6?";
		preguntas[4].especificacion = "cuannto es 17+60+72?";
		preguntas[5].especificacion = "cuannto es 50-6?";
		preguntas[6].especificacion = "cual es el valor de pi?";
		preguntas[7].especificacion = "cual es la raÃ­z cuadrada de 9?";
		preguntas[8].especificacion = "cuannto es 150*40?";
		preguntas[9].especificacion = "cuannto es 600-430?";
	}
};

class Examen {
public:
	string asignatura;
	vector<Pregunta> preguntas;
	int puntaje;
	int cantidad;

	void crearExamen(int cantPreguntas, BancoDePreguntas banco) {
		if (cantPreguntas < 3 || cantPreguntas > banco.cantidad) {
			cout << "La cantidad de preguntas debe ser mayor o igual a 3 y menor o igual que " << banco.cantidad << endl;
			return;
		}

		preguntas.clear();

		// Seleccionar preguntas aleatorias sin repeticiÃ³n
		vector<int> indices(banco.cantidad);
		for (int i = 0; i < banco.cantidad; i++) {
			indices[i] = i;
		}
		random_shuffle(indices.begin(), indices.end());
		for (int i = 0; i < cantPreguntas; i++) {
			preguntas.push_back(banco.preguntas[indices[i]]);
		}

		cantidad = cantPreguntas;
		puntaje = 15 + 5 * cantidad;
	}

	void imprimirExamen() {
		cout << "---" << asignatura << "---  ";
		cout << puntaje << " puntos" << "\n";
		cout << "Cantidad de preguntas: " << cantidad << "\n";

		for (int i = 0; i < cantidad; i++) {
			cout << i + 1 << ") " << preguntas[i].especificacion << "   ";
			cout << puntaje / cantidad << " puntos" << "\n";

			cout << "---------------------------------" << "\n";
		}
	}
};





