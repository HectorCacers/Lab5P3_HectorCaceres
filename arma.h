#pragma once
#include <string>
#include <ctime>
using namespace std;
class arma
{

private:
	string nombre;
	string tipo;
	int ataque;

public:
	arma();
	arma(string nombre, string tipo);
	string obtener_nombre();
	string obtener_tipo();
	int obtener_ataque();
};

