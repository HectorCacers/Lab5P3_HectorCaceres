// Lab5P3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <string>
#include <ctime>
#include "armadura.h"
using namespace std;
int main()
{
    // Creamos un objeto arma1
    arma arma1("Lamento", "espada");

    // Creamos un vector de armaduras
    vector<armadura> armaduras_personaje;
    armaduras_personaje.push_back(armadura("acero", "pechera"));

    // Creamos un objeto personaje
    personaje personaje1("Bob", arma1, armaduras_personaje);

    // Mostramos las estadísticas del personaje
    personaje1.mostrar_estadisticas();

    return 0;
    //armadura casco("acero", "casco");

    //cout << casco.obtener_vida() << "\n";
    //cout << casco.obtener_material() << "\n";
    //cout << casco.obtener_pieza() << "\n";
    //return 0;
}


