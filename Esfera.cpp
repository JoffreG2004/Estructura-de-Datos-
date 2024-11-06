/***********************************************************************
 * Module:  Esfera.cpp
 * Author:  Joffre Gomez
 * Modified: Sabado, 2 de noviembre de 2024 18:45:00
 * Purpose: Implementación de la clase Esfera
 ***********************************************************************/

#include <iostream>
#include <stdexcept>  // Para manejar excepciones
#include <cmath>  // Para utilizar la constante PI y funciones matemáticas

class Esfera {
private:
    float radio;
    static const float PI;

public:
   
    Esfera() : radio(1.0) {  
        std::cout << "Esfera creada con radio por defecto de 1.0" << std::endl;
    }

   
    Esfera(float radio) {
        setRadio(radio);  
    }

  
    void setRadio(float radio) {
        if (radio > 0) {
            this->radio = radio; 
        } else {
            throw std::invalid_argument("El radio debe ser positivo.");
        }
    }

   
    float getRadio() {
        return radio;
    }

    
    float calcularVolumen() {
        return (4.0 / 3.0) * PI * std::pow(radio, 3);
    }

    
    float calcularAreaSuperficial() {
        return 4 * PI * std::pow(radio, 2);
    }

 
    void mostrarInformacion() {
        std::cout << "Esfera de radio: " << radio << std::endl;
        std::cout << "Volumen: " << calcularVolumen() << std::endl;
        std::cout << "Área superficial: " << calcularAreaSuperficial() << std::endl;
    }
};


const float Esfera::PI = 3.14159;

int main() {
    try {
        Esfera esfera1(5);  
        esfera1.mostrarInformacion();

        Esfera esfera2; 
        esfera2.mostrarInformacion();
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

