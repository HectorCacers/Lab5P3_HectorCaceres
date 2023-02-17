#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;
class personaje
{
private:
    string nombre;
    arma arma_personaje;
    vector<armadura> armaduras_personaje;
    int vida;
    int vida_total;
    int puntos_armadura;

public:
    personaje(string nombre, arma arma_personaje, vector<armadura> armaduras_personaje);

    void mostrar_estadisticas();
};

