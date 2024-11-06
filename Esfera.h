/***********************************************************************
 * Module:  Esfera.h
 * Author:  Joffre Gomez
 * Modified: Sábado, 2 de noviembre de 2024 18:45:00
 * Purpose: Declaration of the class Esfera
 ***********************************************************************/

#ifndef ESFERA_H
#define ESFERA_H

class Esfera {
public:
    Esfera(float radio); // Constructor

    void setRadio(float radio); // Establecer el valor del radio
    float getRadio(); // Obtener el valor del radio

    float calcularVolumen(); // Calcular el volumen de la esfera
    float calcularAreaSuperficial(); // Calcular el área superficial de la esfera

private:
    float radio;
  float PI = 3.14159; // Valor de pi
};

#endif
