/***********************************************************************
 * Module:  Esfera.cpp
 * Author:  Joffre Gomez
 * Modified: Sabado, 2 de noviembre de 2024 18:45:00
 * Purpose: Implementation of the class Esfera
 ***********************************************************************/

#include "Esfera.h"
#include <stdexcept>
#include <iostream>
#include <limits>

using namespace std;

Esfera::Esfera(float radio) {
    setRadio(radio);
}

void Esfera::setRadio(float radio) {
    if (radio > 0) {
        this->radio = radio;
    } else {
        throw invalid_argument("El radio debe ser positivo.");
    }
}

float Esfera::getRadio() {
    return radio;
}

float Esfera::calcularVolumen() {
    return (4.0 / 3.0) * PI * radio * radio * radio;
}

float Esfera::calcularAreaSuperficial() {
    return 4 * PI * radio * radio;
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
    float radio = obtenerEntradaPositiva("Ingrese el radio de la esfera (positivo): ");

    Esfera esfera(radio);

    cout << "\nVolumen de la esfera: " << esfera.calcularVolumen() << endl;
    cout << "Área superficial de la esfera: " << esfera.calcularAreaSuperficial() << endl;

    return 0;
}
