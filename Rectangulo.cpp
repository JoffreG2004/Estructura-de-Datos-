/***********************************************************************
 * Module:  Rectangulo.cpp
* Author:  Joffre Gomez
 * Modified: Sabado, 2 de noviembre de 2024 18:03:23
 * Purpose: Implementation of the class Rectangulo
 ***********************************************************************/

#include "Rectangulo.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Rectangulo::Rectangulo(float largo, float ancho) {
    setLargo(largo);
    setAncho(ancho);
}

void Rectangulo::setLargo(float largo) {
    if (largo > 0) {
        this->largo = largo;
    } else {
        throw invalid_argument("El largo debe ser positivo.");
    }
}

void Rectangulo::setAncho(float ancho) {
    if (ancho > 0) {
        this->ancho = ancho;
    } else {
        throw invalid_argument("El ancho debe ser positivo.");
    }
}

float Rectangulo::getLargo(){
    return largo;
}

// Getter para el ancho
float Rectangulo::getAncho(){
    return ancho;
}

// Método para calcular el área del rectángulo
float Rectangulo::calcularArea(){
    return largo * ancho;
}

// Método para calcular el perímetro del rectángulo
float Rectangulo::calcularPerimetro(){
    return 2 * (largo + ancho);
}

#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main() {
    float largo, ancho;

    do {
        cout << "Ingrese el largo del rectángulo (positivo): ";
        cin >> largo;
        if (largo <= 0) {
            cout << "Error: El largo debe ser un valor positivo.\n";
        }
    } while (largo <= 0);

    do {
        cout << "Ingrese el ancho del rectángulo (positivo): ";
        cin >> ancho;
        if (ancho <= 0) {
            cout << "Error: El ancho debe ser un valor positivo.\n";
        }
    } while (ancho <= 0);

    Rectangulo rectangulo(largo, ancho);

    cout << "\nÁrea del rectángulo: " << rectangulo.calcularArea() << endl;
    cout << "Perímetro del rectángulo: " << rectangulo.calcularPerimetro() << endl;
}
