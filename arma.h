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
    arma(string nombre, string tipo) {
        this->nombre = nombre;
        this->tipo = tipo;
        srand(time(NULL));
        this->ataque = rand() % 51 + 10;
    }

    string obtener_nombre() {
        return nombre;
    }

    string obtener_tipo() {
        return tipo;
    }

    int obtener_ataque() {
        return ataque;
    }

};

