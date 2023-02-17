#include "armadura.h"
using namespace std;
// Constructor de la clase
armadura::armadura(std::string material, std::string pieza) {
	this->material = material;
	this->pieza = pieza;
	// Generar puntos de vida aleatorios entre 1 y 20
	srand(time(NULL));
	this->vida = rand() % 20 + 1;
}

// Método para obtener el material de la armadura
std::string armadura::obtener_material() {
	return material;
}

// Método para obtener la pieza de la armadura
std::string armadura::obtener_pieza() {
	return pieza;
}

// Método para obtener los puntos de vida de la armadura
int armadura::obtener_vida() {
	return vida;
}