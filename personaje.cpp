#include "personaje.h"

using namespace std;



personaje::personaje(string nombre, arma arma_personaje, vector<armadura> armaduras_personaje) {
	this->nombre = nombre;
	this->arma_personaje = arma_personaje;
	this->armaduras_personaje = armaduras_personaje;
	this->puntos_armadura = 0;
	this->vida = rand() % 15 + 1;
	this->vida_total = vida;
	for (int i = 0; i < armaduras_personaje.size(); i++) {
		this->puntos_armadura += armaduras_personaje[i].obtener_vida();
	}
}

void personaje:: mostrar_estadisticas() {
	cout << "Nombre: " << nombre << endl;
	cout << "Arma: " << arma_personaje.obtener_nombre() << endl;
	cout << "DaÃ±o: " << arma_personaje.obtener_ataque() << endl;
	cout << "Puntos de vida: " << vida << endl;
	cout << "Puntos de Armadura: " << puntos_armadura << endl;
	cout << "Vida total: " << vida_total + puntos_armadura << endl;
}



