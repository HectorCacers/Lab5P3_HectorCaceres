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
    armadura casco("acero", "casco");

    cout << casco.obtener_vida() << "\n";
    cout << casco.obtener_material() << "\n";
    cout << casco.obtener_pieza() << "\n";
    return 0;
}


