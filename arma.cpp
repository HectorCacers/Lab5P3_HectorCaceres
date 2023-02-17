#include "arma.h"
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
arma::arma() {
    this->nombre = "";
    this->tipo = "";
    this->ataque = 0;
}


arma::arma(string nombre, string tipo) {
    this->nombre = nombre;
    this->tipo = tipo;
    srand(time(NULL));
    this->ataque = rand() % 51 + 10;
}

string arma::obtener_nombre() {
    return nombre;
}

string arma:: obtener_tipo() {
    return tipo;
}

int arma::obtener_ataque() {
    return ataque;
}

