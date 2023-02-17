#pragma once
#include <iostream>
#include <string>
#include <ctime>

class armadura
{
private:
    string material;
    string pieza;
    int vida;

public:
     armadura(std::string material, std::string pieza);
    std::string obtener_material();
    std::string obtener_pieza();
    int obtener_vida();
};

