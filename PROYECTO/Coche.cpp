#include "Coche.h"
#include <iostream>

using namespace std;

Coche InsertarDatos(){
string placa;
string modelo;
string color;
string marca;

cout<<"Ingrese la placa"<<endl;
cin >> placa; 

cout<<"Ingrese la marca"<<endl;
cin >> marca; 

cout<<"Ingrese la color"<<endl;
cin >> color; 

cout<<"Ingrese la placa"<<endl;
cin >> placa; 

return Coche(placa, modelo, color ,marca);
}

