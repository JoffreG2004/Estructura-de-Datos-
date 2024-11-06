/***********************************************************************
 * Module:  Cilindro.cpp
* Author:  Joffre Gomez
 * Modified: Sabado, 2 de noviembre de 2024 18:03:23
 * Purpose: Implementation of the class Cilindro
 ***********************************************************************/

#include "Cilindro.h"
#include <stdexcept>
#include <iostream>
#include <limits>

using namespace std;

Cilindro::Cilindro(float radio, float altura) {
    setRadio(radio);
    setAltura(altura);
}

void Cilindro::setRadio(float radio) {
    if (radio > 0) {
        this->radio = radio;
    } else {
        throw invalid_argument("El radio debe ser positivo.");
    }
}

void Cilindro::setAltura(float altura) {
    if (altura > 0) {
        this->altura = altura;
    } else {
        throw invalid_argument("La altura debe ser positiva.");
    }
}

float Cilindro::getRadio(){
    return radio;
}

float Cilindro::getAltura(){
    return altura;
}

float Cilindro::calcularVolumen(){
    return PI * radio * radio * altura;
}

float Cilindro::calcularAreaSuperficial(){
    return 2 * PI * radio * (radio + altura);
}

float obtenerEntradaPositiva(string mensaje) {
    float valor;
    while (true) {
        cout << mensaje;
        cin >> valor;

        if (cin.fail()) {
            cout << "Entrada inválida. Debe ingresar un número." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (valor <= 0) {
            cout << "Error: El valor debe ser positivo." << endl;
        } else {
            return valor;
        }
    }
}

int main() {

    float radio = obtenerEntradaPositiva("Ingrese el radio del cilindro (positivo): ");

    float altura = obtenerEntradaPositiva("Ingrese la altura del cilindro (positivo): ");

    Cilindro cilindro(radio, altura);

    cout << "\nVolumen del cilindro: " << cilindro.calcularVolumen() << endl;
    cout << "Área superficial del cilindro: " << cilindro.calcularAreaSuperficial() << endl;

}
