/***********************************************************************
 * Module:  Fraccion.cpp
* Author:  Joffre Gomez
 * Modified: Sabado, 2 de noviembre de 2024 18:03:23
 * Purpose: Implementation of the class Fraccion
 ***********************************************************************/

#include "Fraccion.h"
#include <stdexcept>
#include <iostream>

using namespace std;

void Fraccion::setNumerador(float num) {
   this->num = num;
}

void Fraccion::setDenominador(float denm) {
   validarDenominador(denm);
   this->denm = denm;
}

float Fraccion::getNumerador(void) {
   return num;
}

float Fraccion::getDenominador(void) {
   return denm;
}

Fraccion::Fraccion(float num, float denm) : num(num) {
   validarDenominador(denm);
   this->denm = denm;
   simplificar();
}

Fraccion::~Fraccion() {
}

void Fraccion::validarDenominador(float denm) {
   if (denm == 0) {
      throw invalid_argument("El denominador no puede ser cero.");
   }
}

void Fraccion::simplificar() {
   int divisor = mcd(static_cast<int>(num), static_cast<int>(denm));
   num /= divisor;
   denm /= divisor;
}

int Fraccion::mcd(int a, int b) {
   if (b == 0) return a;
   return mcd(b, a % b);
}

Fraccion Fraccion::sumar(Fraccion other) {
   float nuevoNum = this->num * other.denm + other.num * this->denm;
   float nuevoDenm = this->denm * other.denm;

   Fraccion resultado(nuevoNum, nuevoDenm);
   resultado.simplificar(); // Simplificar el resultado
   return resultado;
}

Fraccion Fraccion::sumarFracciones(Fraccion fracciones[], int cantidad) {
   Fraccion suma(0, 1); // Inicializamos la suma en 0/1
   for (int i = 0; i < cantidad; i++) {
      suma = suma.sumar(fracciones[i]);
   }
   return suma;
}

int main() {
   try {
      int cantidad;

      cout << "Ingrese la cantidad de fracciones a sumar: ";
      cin >> cantidad;

      Fraccion fracciones[cantidad];
      float num, denm;

      // Ingreso de cada fracción
      for (int i = 0; i < cantidad; i++) {
         cout << "Ingrese el numerador de la fracción " << i + 1 << ": ";
         cin >> num;

         do {
            cout << "Ingrese el denominador de la fracción " << i + 1 << " (diferente de 0): ";
            cin >> denm;
            if (denm == 0) {
               cout << "Error: el denominador no puede ser cero. Intente de nuevo.\n";
            }
         } while (denm == 0);

         fracciones[i] = Fraccion(num, denm);
      }

      // Suma de las fracciones
      Fraccion resultado = Fraccion::sumarFracciones(fracciones, cantidad);
      cout << "La suma de las fracciones es: " << resultado.getNumerador() << "/" << resultado.getDenominador() << endl;
   } catch (const invalid_argument& e) {
      cerr << "Error: " << e.what() << endl;
   }
}
