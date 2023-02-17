#pragma once

#include <string>
#include <ctime>
using namespace std;
class armadura
{
private:
    string material;
    string pieza;
    int vida;

public:
    armadura(std::string material, std::string pieza);
    string obtener_material();
    string obtener_pieza();
    int obtener_vida();
};

