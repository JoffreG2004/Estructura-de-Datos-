#pragma once 
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>

using namespace std;

class Coche
{
private:

    string placa;
    string color;
    string modelo;
    string marca;
    chrono::system_clock::time_point horaIngreso;

    
public:
    Coche(string placa , string modelo , string color , string marca):
    placa(placa), modelo(modelo),marca(marca),horaIngreso(chrono::system_clock::now()){}

string getPlaca() const
 {return placa;}

string getMarca() const
 {return marca;}

string getModelo() const 
{return modelo;}

string getColor () const
{return color;}

chrono::system_clock::time_point getHora() const
 {return horaIngreso;}


void setModelo(const string& modelo) 
{ this->modelo = modelo; }

void setMarca(const string& marca) 
{ this->marca = marca; }

void setColor(const string& modelo) 
{ this->color = color; }


};

